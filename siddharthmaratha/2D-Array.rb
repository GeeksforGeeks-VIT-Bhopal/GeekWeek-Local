 #!/bin/ruby        
    arr = Array.new(6)
    total = 0 
    ## initilizing as negative integer | in order to work on negative array values
    max_total = -1073741824


    for arr_i in (0..6-1)
        arr_t = gets.strip
        arr[arr_i] = arr_t.split(' ').map(&:to_i)
    end

    ## iterating
    for i in 0..5
        for j in 0..5
            if (j+2 < 6) && (i+2 < 6)
                total = arr[i][j].to_i + arr[i][j+1].to_i + arr[i][j+2].to_i + arr[i+1][j+1].to_i + arr[i+2][j].to_i + arr[i+2][j+1].to_i + arr[i+2][j+2].to_i
            end

            ## storing max value
            if max_total < total
                max_total = total
            end
        end
    end

    #printing output
    puts max_total
