from nltk.tokenize import word_tokenize, sent_tokenize

sentense = "Hello brother, I'm Muhammad Shifat Hasan..."
paragraph = "Hello. I'm Muhammad Shifat Hasan. How are you? What the hell! Are you serious? Who made you solve the problem?"

tokenized_sentense = word_tokenize(sentense, language='english')
tokenized_paragraph = sent_tokenize(paragraph, language='english')

print(tokenized_sentense)
print()
print(tokenized_paragraph)