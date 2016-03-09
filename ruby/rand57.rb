# create func rand5() with rand7()
# DONE brute force first
#  may never finish
#  performance?
# try divide by 5/7
#  impact on distribution?

def rand7()
	checkResult = rand(6)+1
	if checkResult < 1
		puts "Too low"
	end
	if checkResult>7
		puts "Too high"
	end

	return checkResult
end


def rand5()
	return rand5range
end


def  rand5range() 
	rand5result = rand7
	while rand5result>5  do
		rand5result = rand7 
	end 
	return rand5result
end

def  rand5div() 
	rand5result = rand7
	return rand5result*5/7
end

def testRand5()
	count = []
	(1..100).each do 
		num = rand5
		if count[num] == nil
			count[num] = 1
		else
			count[num] = count[num] + 1
		end

	end
	cntr = 1
	count.each do |num|
		puts "#{cntr}:#{num}"
		cntr = cntr+1
		
	end
end

# can't throw multiple dice
# factor?
# 1-5 (5/7) or 6-7(2/7)
# What % chance of getting which number group 
# required to even distribution?
# 5/7 * 2/7 = 2/7 * 5/7
# throw 1-5 five times and 6-7 two times?
# 

def do7Die()
	num1 = rand5
	num2 = rand5

	while num2 > 2 
		num2 = rand5
	end
	return num1+num2
end

def test7Die()
	count = []
	(1..100).each do
		num = do7Die
		if count[num]==nil
			count[num]=1
		else
			count[num] = count[num]+1
		end
	end
	cntr = 1
	count.each do |num|
		puts "#{cntr}:#{num}"
		cntr = cntr+1
	end
end


test7Die

#testRand5

