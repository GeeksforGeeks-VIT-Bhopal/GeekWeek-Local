using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
 
    public class ANewHope
    {
        public int count(int[] firstWeek, int[] lastWeek, int D)
        {
            bool isPassing = true;
            for (int i = 0; i < firstWeek.Length; i++)
            {
                if (firstWeek[i] != lastWeek[i])
                    isPassing = false;
            }
            if (isPassing)
                return 1;
            
            int skip = firstWeek.Length - D;
 
            int output = 0;
            for (int i = 1; i < firstWeek.Length+1; i++)
            {
                int currentSteps = Convert.ToInt32(Math.Ceiling((0.0 + (firstWeek.ToList().IndexOf(i) - lastWeek.ToList().IndexOf(i))) / (0.0 + skip)));
                if (currentSteps > output)
                    output = currentSteps;
            }
 
            return output+1;
        }
    }
