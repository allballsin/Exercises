sumEven = 0
curNum = 1
lastNum = 1
last2Num = 1

while curNum <= 4000000 do
	if curNum % 2 == 0
		sumEven = sumEven + curNum
	end
	last2Num = lastNum
	lastNum = curNum	
	curNum = last2Num + lastNum
	puts "Last2:#{last2Num} Last:#{lastNum} CurNum:#{curNum}"
	puts sumEven
end

