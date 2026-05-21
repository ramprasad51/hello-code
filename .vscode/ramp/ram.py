'''TEXT ANALYSIS in which we calculate:
1.Number of words
2.Number of sentences
3.Longest word
4.Frequncy of each word'''
#input a paragraph
text=input("Enter a paragraph:\n")
text_lower=text.lower()
sentences_count=text.count('.')+text.count('?')+text.count('!')
words=text_lower.split()
word_freq={}
#Calculate word frequncy using for l00p
for word in words:
    word=word.strip("?!,.:;\"")
    if word in word_freq:
        word_freq[word]+=1
    else:
        word_freq[word]=1
#Find looongest word
longest_word=""
for w in word_freq:
    if len(w)>len(longest_word):
        longest_word=w
#Report
print("\n---Text analysis report---")
print("Number of sentences:",sentences_count)
print("Number  of words:",len(words))
print("Longest word:",longest_word)
print("Word frequncy:\n")
for word,freq in word_freq.items():
    print(word,":",freq)

    