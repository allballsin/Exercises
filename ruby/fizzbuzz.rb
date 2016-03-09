# fizzbuzz
# fizz on multiples of 3, 5 on multiples of buzz
# do to 100
# comma separated


1.upto(100) do |i|
	out = i
	if i % 3 == 0  
		fizz = "fizz" 
	end
	if i % 5 == 0  
		buzz = "buzz" 
	end
	if fizz == "fizz" 
		out = fizz
	end
	if buzz == "buzz"  
		out = buzz
	end
	if fizz == "fizz" && buzz == "buzz" 
		out = "fizzbuzz"
	end
	puts out
end

