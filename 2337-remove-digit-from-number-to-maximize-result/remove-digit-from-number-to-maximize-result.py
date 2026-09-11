class Solution(object):
    def removeDigit(self, number, digit):
        """
        :type number: str
        :type digit: str
        :rtype: str
        """

        for i in range(len(number) - 1):
            if number[i] == digit and number[i] < number[i + 1]:
                return number[:i] + number[i + 1:]

        i = number.rfind(digit)
        return number[:i] + number[i + 1:]