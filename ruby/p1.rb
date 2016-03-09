sum = 0

1.upto(999) do |i|
	if i % 3 == 0 
		sum = sum + i	
	elsif i % 5 == 0
		sum = sum + i
	end
end
puts sum


