public class Solution
 {
  public int MinSteps(int n)
  {
   Queue queue = new Queue();
   Hashtable alreadySeen = new Hashtable();

   EnqueueItem ei = new EnqueueItem("A", "", 0, null);
   alreadySeen.Add(ei.current + "@" + ei.paste, true);
   queue.Enqueue(ei);
   while (queue.Count > 0)
   {
    EnqueueItem currentItem = (EnqueueItem)queue.Dequeue();

    if (currentItem.current.Length == n)
    {
     //PrintBacktrack(currentItem);
     return currentItem.numberSteps;
    }

    //Copy
    if (currentItem.current.Length <= n && currentItem.paste.Length > 0 && !alreadySeen.ContainsKey(currentItem.current + currentItem.paste + "@" + currentItem.paste))
    {
     EnqueueItem currentItemCopy = new EnqueueItem(currentItem.current + currentItem.paste, currentItem.paste, currentItem.numberSteps + 1, currentItem);
     alreadySeen.Add(currentItem.current + currentItem.paste + "@" + currentItem.paste, true);
     queue.Enqueue(currentItemCopy);
    }

    //Paste
    if (currentItem.current.Length <= n && !alreadySeen.ContainsKey(currentItem.current + "@" + currentItem.current))
    {
     EnqueueItem currentItemPaste = new EnqueueItem(currentItem.current, currentItem.current, currentItem.numberSteps + 1, currentItem);
     alreadySeen.Add(currentItem.current + "@" + currentItem.current, true);
     queue.Enqueue(currentItemPaste);
    }
   }

   return -1;
  }

  private void PrintBacktrack(EnqueueItem ei)
  {
   if (ei.from != null) PrintBacktrack(ei.from);
   if (ei.from == null) return;
   if (ei.current == ei.paste) Console.WriteLine("Step {0}: pasted '{1}' to the clipboard. Current: {2}. Clipboard = {3}", ei.numberSteps, ei.current, ei.current, ei.paste);
   else Console.WriteLine("Step {0}: copied '{1}' from the clipboard. Current: {2}. Clipboard = {3}", ei.numberSteps, ei.paste, ei.current, ei.paste);
  }

  private class EnqueueItem
  {
   public string current = "";
   public string paste = "";
   public int numberSteps = 0;
   public EnqueueItem from = null;

   public EnqueueItem(string current,
          string paste,
          int numberSteps,
          EnqueueItem from)
   {
    this.current = current;
    this.paste = paste;
    this.numberSteps = numberSteps;
    if (from != null)
    {
     this.from = new EnqueueItem(from.current, from.paste, from.numberSteps, from.from);
    }
   }
  }
 }
