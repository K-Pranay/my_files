// For complete examples and data files, please go to https://github.com/aspose-pdf/Aspose.Pdf-for-Java
// Open a document
Document pdfDocument = new Document("input.pdf");

// Delete all attachments
pdfDocument.getEmbeddedFiles().delete();

// Save the updated file
pdfDocument.save("output.pdf");