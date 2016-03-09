# buyPointer<sellPointer
# minimise buyPointer
# maximise sellPointer
# valid comparison array
# start with pmax,pmax-1
# if comparison < maxProfit, discard
# if price < maxProfit, discard
# buyPointer<sellPointer
# DONE brute force first
# find highest number from right
# find lowest number from left
# if no 


def bestProfit()
    s = [6,3,88,1,6,2]
    bestProfit = 0
    (0..s.length()-2).each {|i|
        puts s[i]
        bp = i
        sp= i+1
        (sp..s.length()-1).each {|j|
            sp = j
            thisProfit = s[sp]-s[bp]
            if thisProfit>bestProfit
                bestProfit = thisProfit
            end
            puts "#{bp} #{sp}  #{thisProfit} #{bestProfit}"
        }
        
    }
    return bestProfit
end

puts bestProfit

    
    