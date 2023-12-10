#include <jni.h>
#include <Python.h>
#include "JCCEnv.h"
#include "functions.h"

PyObject *initVM(PyObject *module, PyObject *args, PyObject *kwds);
PyObject *getJavaModule(PyObject *module, const char *parent, const char *name);

namespace java {
  void __install__(PyObject *module);
  void __initialize__(PyObject *module);
}
namespace org {
  void __install__(PyObject *module);
  void __initialize__(PyObject *module);
}

void __install__(PyObject *module)
{
  java::__install__(module);
  org::__install__(module);
}

PyObject *__initialize__(PyObject *module, PyObject *args, PyObject *kwds)
{
  PyObject *env = initVM(module, args, kwds);

  if (env == NULL)
    return NULL;

  try {
    java::__initialize__(module);
    org::__initialize__(module);
    return env;
  } catch (int e) {
    switch(e) {
      case _EXC_JAVA:
      return PyErr_SetJavaError();
      default:
      throw;
    }
  }
}


namespace java {

  namespace io {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace lang {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace net {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace security {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace text {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace util {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }

  void __install__(PyObject *module)
  {
    module = getJavaModule(module, "", "java");

    io::__install__(module);
    lang::__install__(module);
    net::__install__(module);
    security::__install__(module);
    text::__install__(module);
    util::__install__(module);
  }

  void __initialize__(PyObject *module)
  {
    module = getJavaModule(module, "", "java");

    io::__initialize__(module);
    lang::__initialize__(module);
    net::__initialize__(module);
    security::__initialize__(module);
    text::__initialize__(module);
    util::__initialize__(module);
  }
}

#include "java/io/BufferedReader.h"
#include "java/io/Closeable.h"
#include "java/io/Console.h"
#include "java/io/DataInput.h"
#include "java/io/DataOutput.h"
#include "java/io/File.h"
#include "java/io/FileDescriptor.h"
#include "java/io/FileFilter.h"
#include "java/io/FileInputStream.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/FileOutputStream.h"
#include "java/io/FilenameFilter.h"
#include "java/io/FilterOutputStream.h"
#include "java/io/Flushable.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/InputStreamReader.h"
#include "java/io/InvalidObjectException.h"
#include "java/io/NotActiveException.h"
#include "java/io/ObjectInput.h"
#include "java/io/ObjectInputFilter.h"
#include "java/io/ObjectInputFilter$FilterInfo.h"
#include "java/io/ObjectInputFilter$Status.h"
#include "java/io/ObjectInputStream.h"
#include "java/io/ObjectInputStream$GetField.h"
#include "java/io/ObjectInputValidation.h"
#include "java/io/ObjectOutput.h"
#include "java/io/ObjectOutputStream.h"
#include "java/io/ObjectOutputStream$PutField.h"
#include "java/io/ObjectStreamClass.h"
#include "java/io/ObjectStreamConstants.h"
#include "java/io/ObjectStreamException.h"
#include "java/io/ObjectStreamField.h"
#include "java/io/OutputStream.h"
#include "java/io/PrintStream.h"
#include "java/io/PrintWriter.h"
#include "java/io/Reader.h"
#include "java/io/Serializable.h"
#include "java/io/SerializablePermission.h"
#include "java/io/StringReader.h"
#include "java/io/StringWriter.h"
#include "java/io/SyncFailedException.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/io/Writer.h"

namespace java {
  namespace io {


    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "io");

      t_BufferedReader::install(module);
      t_Closeable::install(module);
      t_Console::install(module);
      t_DataInput::install(module);
      t_DataOutput::install(module);
      t_File::install(module);
      t_FileDescriptor::install(module);
      t_FileFilter::install(module);
      t_FileInputStream::install(module);
      t_FileNotFoundException::install(module);
      t_FileOutputStream::install(module);
      t_FilenameFilter::install(module);
      t_FilterOutputStream::install(module);
      t_Flushable::install(module);
      t_IOException::install(module);
      t_InputStream::install(module);
      t_InputStreamReader::install(module);
      t_InvalidObjectException::install(module);
      t_NotActiveException::install(module);
      t_ObjectInput::install(module);
      t_ObjectInputFilter::install(module);
      t_ObjectInputFilter$FilterInfo::install(module);
      t_ObjectInputFilter$Status::install(module);
      t_ObjectInputStream::install(module);
      t_ObjectInputStream$GetField::install(module);
      t_ObjectInputValidation::install(module);
      t_ObjectOutput::install(module);
      t_ObjectOutputStream::install(module);
      t_ObjectOutputStream$PutField::install(module);
      t_ObjectStreamClass::install(module);
      t_ObjectStreamConstants::install(module);
      t_ObjectStreamException::install(module);
      t_ObjectStreamField::install(module);
      t_OutputStream::install(module);
      t_PrintStream::install(module);
      t_PrintWriter::install(module);
      t_Reader::install(module);
      t_Serializable::install(module);
      t_SerializablePermission::install(module);
      t_StringReader::install(module);
      t_StringWriter::install(module);
      t_SyncFailedException::install(module);
      t_UnsupportedEncodingException::install(module);
      t_Writer::install(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "io");

      t_BufferedReader::initialize(module);
      t_Closeable::initialize(module);
      t_Console::initialize(module);
      t_DataInput::initialize(module);
      t_DataOutput::initialize(module);
      t_File::initialize(module);
      t_FileDescriptor::initialize(module);
      t_FileFilter::initialize(module);
      t_FileInputStream::initialize(module);
      t_FileNotFoundException::initialize(module);
      t_FileOutputStream::initialize(module);
      t_FilenameFilter::initialize(module);
      t_FilterOutputStream::initialize(module);
      t_Flushable::initialize(module);
      t_IOException::initialize(module);
      t_InputStream::initialize(module);
      t_InputStreamReader::initialize(module);
      t_InvalidObjectException::initialize(module);
      t_NotActiveException::initialize(module);
      t_ObjectInput::initialize(module);
      t_ObjectInputFilter::initialize(module);
      t_ObjectInputFilter$FilterInfo::initialize(module);
      t_ObjectInputFilter$Status::initialize(module);
      t_ObjectInputStream::initialize(module);
      t_ObjectInputStream$GetField::initialize(module);
      t_ObjectInputValidation::initialize(module);
      t_ObjectOutput::initialize(module);
      t_ObjectOutputStream::initialize(module);
      t_ObjectOutputStream$PutField::initialize(module);
      t_ObjectStreamClass::initialize(module);
      t_ObjectStreamConstants::initialize(module);
      t_ObjectStreamException::initialize(module);
      t_ObjectStreamField::initialize(module);
      t_OutputStream::initialize(module);
      t_PrintStream::initialize(module);
      t_PrintWriter::initialize(module);
      t_Reader::initialize(module);
      t_Serializable::initialize(module);
      t_SerializablePermission::initialize(module);
      t_StringReader::initialize(module);
      t_StringWriter::initialize(module);
      t_SyncFailedException::initialize(module);
      t_UnsupportedEncodingException::initialize(module);
      t_Writer::initialize(module);
    }
  }
}

#include "java/lang/AbstractStringBuilder.h"
#include "java/lang/Appendable.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/Boolean.h"
#include "java/lang/Byte.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Character.h"
#include "java/lang/Class.h"
#include "java/lang/ClassLoader.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/Cloneable.h"
#include "java/lang/Comparable.h"
#include "java/lang/Double.h"
#include "java/lang/Enum.h"
#include "java/lang/Exception.h"
#include "java/lang/Float.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/InstantiationException.h"
#include "java/lang/Integer.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/Iterable.h"
#include "java/lang/Long.h"
#include "java/lang/Module.h"
#include "java/lang/ModuleLayer.h"
#include "java/lang/ModuleLayer$Controller.h"
#include "java/lang/NamedPackage.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Number.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Object.h"
#include "java/lang/Package.h"
#include "java/lang/Readable.h"
#include "java/lang/ReflectiveOperationException.h"
#include "java/lang/Runnable.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/SecurityException.h"
#include "java/lang/SecurityManager.h"
#include "java/lang/Short.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/String.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/System.h"
#include "java/lang/System$Logger.h"
#include "java/lang/System$Logger$Level.h"
#include "java/lang/Thread.h"
#include "java/lang/Thread$State.h"
#include "java/lang/Thread$UncaughtExceptionHandler.h"
#include "java/lang/ThreadGroup.h"
#include "java/lang/Throwable.h"
#include "java/lang/UnsupportedOperationException.h"

namespace java {
  namespace lang {


    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "lang");

      t_AbstractStringBuilder::install(module);
      t_Appendable::install(module);
      t_AutoCloseable::install(module);
      t_Boolean::install(module);
      t_Byte::install(module);
      t_CharSequence::install(module);
      t_Character::install(module);
      t_Class::install(module);
      t_ClassLoader::install(module);
      t_ClassNotFoundException::install(module);
      t_Cloneable::install(module);
      t_Comparable::install(module);
      t_Double::install(module);
      t_Enum::install(module);
      t_Exception::install(module);
      t_Float::install(module);
      t_IllegalAccessException::install(module);
      t_IllegalArgumentException::install(module);
      t_IllegalStateException::install(module);
      t_InstantiationException::install(module);
      t_Integer::install(module);
      t_InterruptedException::install(module);
      t_Iterable::install(module);
      t_Long::install(module);
      t_Module::install(module);
      t_ModuleLayer::install(module);
      t_ModuleLayer$Controller::install(module);
      t_NamedPackage::install(module);
      t_NullPointerException::install(module);
      t_Number::install(module);
      t_NumberFormatException::install(module);
      t_Object::install(module);
      t_Package::install(module);
      t_Readable::install(module);
      t_ReflectiveOperationException::install(module);
      t_Runnable::install(module);
      t_RuntimeException::install(module);
      t_SecurityException::install(module);
      t_SecurityManager::install(module);
      t_Short::install(module);
      t_StackTraceElement::install(module);
      t_String::install(module);
      t_StringBuffer::install(module);
      t_StringBuilder::install(module);
      t_System::install(module);
      t_System$Logger::install(module);
      t_System$Logger$Level::install(module);
      t_Thread::install(module);
      t_Thread$State::install(module);
      t_Thread$UncaughtExceptionHandler::install(module);
      t_ThreadGroup::install(module);
      t_Throwable::install(module);
      t_UnsupportedOperationException::install(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "lang");

      t_AbstractStringBuilder::initialize(module);
      t_Appendable::initialize(module);
      t_AutoCloseable::initialize(module);
      t_Boolean::initialize(module);
      t_Byte::initialize(module);
      t_CharSequence::initialize(module);
      t_Character::initialize(module);
      t_Class::initialize(module);
      t_ClassLoader::initialize(module);
      t_ClassNotFoundException::initialize(module);
      t_Cloneable::initialize(module);
      t_Comparable::initialize(module);
      t_Double::initialize(module);
      t_Enum::initialize(module);
      t_Exception::initialize(module);
      t_Float::initialize(module);
      t_IllegalAccessException::initialize(module);
      t_IllegalArgumentException::initialize(module);
      t_IllegalStateException::initialize(module);
      t_InstantiationException::initialize(module);
      t_Integer::initialize(module);
      t_InterruptedException::initialize(module);
      t_Iterable::initialize(module);
      t_Long::initialize(module);
      t_Module::initialize(module);
      t_ModuleLayer::initialize(module);
      t_ModuleLayer$Controller::initialize(module);
      t_NamedPackage::initialize(module);
      t_NullPointerException::initialize(module);
      t_Number::initialize(module);
      t_NumberFormatException::initialize(module);
      t_Object::initialize(module);
      t_Package::initialize(module);
      t_Readable::initialize(module);
      t_ReflectiveOperationException::initialize(module);
      t_Runnable::initialize(module);
      t_RuntimeException::initialize(module);
      t_SecurityException::initialize(module);
      t_SecurityManager::initialize(module);
      t_Short::initialize(module);
      t_StackTraceElement::initialize(module);
      t_String::initialize(module);
      t_StringBuffer::initialize(module);
      t_StringBuilder::initialize(module);
      t_System::initialize(module);
      t_System$Logger::initialize(module);
      t_System$Logger$Level::initialize(module);
      t_Thread::initialize(module);
      t_Thread$State::initialize(module);
      t_Thread$UncaughtExceptionHandler::initialize(module);
      t_ThreadGroup::initialize(module);
      t_Throwable::initialize(module);
      t_UnsupportedOperationException::initialize(module);
    }
  }
}

#include "java/net/URL.h"

namespace java {
  namespace net {


    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "net");

      t_URL::install(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "net");

      t_URL::initialize(module);
    }
  }
}

#include "java/security/BasicPermission.h"
#include "java/security/Permission.h"

namespace java {
  namespace security {


    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "security");

      t_BasicPermission::install(module);
      t_Permission::install(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "security");

      t_BasicPermission::initialize(module);
      t_Permission::initialize(module);
    }
  }
}

#include "java/text/AttributedCharacterIterator.h"
#include "java/text/AttributedCharacterIterator$Attribute.h"
#include "java/text/CharacterIterator.h"
#include "java/text/DecimalFormat.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/text/FieldPosition.h"
#include "java/text/Format.h"
#include "java/text/Format$Field.h"
#include "java/text/NumberFormat.h"
#include "java/text/ParseException.h"
#include "java/text/ParsePosition.h"

namespace java {
  namespace text {


    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "text");

      t_AttributedCharacterIterator::install(module);
      t_AttributedCharacterIterator$Attribute::install(module);
      t_CharacterIterator::install(module);
      t_DecimalFormat::install(module);
      t_DecimalFormatSymbols::install(module);
      t_FieldPosition::install(module);
      t_Format::install(module);
      t_Format$Field::install(module);
      t_NumberFormat::install(module);
      t_ParseException::install(module);
      t_ParsePosition::install(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "text");

      t_AttributedCharacterIterator::initialize(module);
      t_AttributedCharacterIterator$Attribute::initialize(module);
      t_CharacterIterator::initialize(module);
      t_DecimalFormat::initialize(module);
      t_DecimalFormatSymbols::initialize(module);
      t_FieldPosition::initialize(module);
      t_Format::initialize(module);
      t_Format$Field::initialize(module);
      t_NumberFormat::initialize(module);
      t_ParseException::initialize(module);
      t_ParsePosition::initialize(module);
    }
  }
}

#include "java/util/AbstractCollection.h"
#include "java/util/AbstractList.h"
#include "java/util/AbstractMap.h"
#include "java/util/AbstractSet.h"
#include "java/util/ArrayDeque.h"
#include "java/util/ArrayList.h"
#include "java/util/Arrays.h"
#include "java/util/Collection.h"
#include "java/util/Collections.h"
#include "java/util/Comparator.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/util/Currency.h"
#include "java/util/Date.h"
#include "java/util/Deque.h"
#include "java/util/Dictionary.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/util/Enumeration.h"
#include "java/util/EventListener.h"
#include "java/util/EventObject.h"
#include "java/util/HashMap.h"
#include "java/util/HashSet.h"
#include "java/util/Hashtable.h"
#include "java/util/InvalidPropertiesFormatException.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/util/ListIterator.h"
#include "java/util/Locale.h"
#include "java/util/Locale$Category.h"
#include "java/util/Locale$FilteringMode.h"
#include "java/util/Locale$IsoCountryCode.h"
#include "java/util/Locale$LanguageRange.h"
#include "java/util/Map.h"
#include "java/util/Map$Entry.h"
#include "java/util/MissingResourceException.h"
#include "java/util/NavigableMap.h"
#include "java/util/NavigableSet.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Optional.h"
#include "java/util/OptionalDouble.h"
#include "java/util/PrimitiveIterator.h"
#include "java/util/PrimitiveIterator$OfDouble.h"
#include "java/util/Properties.h"
#include "java/util/Queue.h"
#include "java/util/Random.h"
#include "java/util/RandomAccess.h"
#include "java/util/ResourceBundle.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/util/Set.h"
#include "java/util/SortedMap.h"
#include "java/util/SortedSet.h"
#include "java/util/Spliterator.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/util/Spliterator$OfPrimitive.h"
#include "java/util/TimeZone.h"
#include "java/util/TreeSet.h"

namespace java {
  namespace util {

    namespace function {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace stream {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "java", "util");

      t_AbstractCollection::install(module);
      t_AbstractList::install(module);
      t_AbstractMap::install(module);
      t_AbstractSet::install(module);
      t_ArrayDeque::install(module);
      t_ArrayList::install(module);
      t_Arrays::install(module);
      t_Collection::install(module);
      t_Collections::install(module);
      t_Comparator::install(module);
      t_ConcurrentModificationException::install(module);
      t_Currency::install(module);
      t_Date::install(module);
      t_Deque::install(module);
      t_Dictionary::install(module);
      t_DoubleSummaryStatistics::install(module);
      t_Enumeration::install(module);
      t_EventListener::install(module);
      t_EventObject::install(module);
      t_HashMap::install(module);
      t_HashSet::install(module);
      t_Hashtable::install(module);
      t_InvalidPropertiesFormatException::install(module);
      t_Iterator::install(module);
      t_List::install(module);
      t_ListIterator::install(module);
      t_Locale::install(module);
      t_Locale$Category::install(module);
      t_Locale$FilteringMode::install(module);
      t_Locale$IsoCountryCode::install(module);
      t_Locale$LanguageRange::install(module);
      t_Map::install(module);
      t_Map$Entry::install(module);
      t_MissingResourceException::install(module);
      t_NavigableMap::install(module);
      t_NavigableSet::install(module);
      t_NoSuchElementException::install(module);
      t_Optional::install(module);
      t_OptionalDouble::install(module);
      t_PrimitiveIterator::install(module);
      t_PrimitiveIterator$OfDouble::install(module);
      t_Properties::install(module);
      t_Queue::install(module);
      t_Random::install(module);
      t_RandomAccess::install(module);
      t_ResourceBundle::install(module);
      t_ResourceBundle$Control::install(module);
      t_Set::install(module);
      t_SortedMap::install(module);
      t_SortedSet::install(module);
      t_Spliterator::install(module);
      t_Spliterator$OfDouble::install(module);
      t_Spliterator$OfInt::install(module);
      t_Spliterator$OfLong::install(module);
      t_Spliterator$OfPrimitive::install(module);
      t_TimeZone::install(module);
      t_TreeSet::install(module);
      function::__install__(module);
      stream::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "java", "util");

      t_AbstractCollection::initialize(module);
      t_AbstractList::initialize(module);
      t_AbstractMap::initialize(module);
      t_AbstractSet::initialize(module);
      t_ArrayDeque::initialize(module);
      t_ArrayList::initialize(module);
      t_Arrays::initialize(module);
      t_Collection::initialize(module);
      t_Collections::initialize(module);
      t_Comparator::initialize(module);
      t_ConcurrentModificationException::initialize(module);
      t_Currency::initialize(module);
      t_Date::initialize(module);
      t_Deque::initialize(module);
      t_Dictionary::initialize(module);
      t_DoubleSummaryStatistics::initialize(module);
      t_Enumeration::initialize(module);
      t_EventListener::initialize(module);
      t_EventObject::initialize(module);
      t_HashMap::initialize(module);
      t_HashSet::initialize(module);
      t_Hashtable::initialize(module);
      t_InvalidPropertiesFormatException::initialize(module);
      t_Iterator::initialize(module);
      t_List::initialize(module);
      t_ListIterator::initialize(module);
      t_Locale::initialize(module);
      t_Locale$Category::initialize(module);
      t_Locale$FilteringMode::initialize(module);
      t_Locale$IsoCountryCode::initialize(module);
      t_Locale$LanguageRange::initialize(module);
      t_Map::initialize(module);
      t_Map$Entry::initialize(module);
      t_MissingResourceException::initialize(module);
      t_NavigableMap::initialize(module);
      t_NavigableSet::initialize(module);
      t_NoSuchElementException::initialize(module);
      t_Optional::initialize(module);
      t_OptionalDouble::initialize(module);
      t_PrimitiveIterator::initialize(module);
      t_PrimitiveIterator$OfDouble::initialize(module);
      t_Properties::initialize(module);
      t_Queue::initialize(module);
      t_Random::initialize(module);
      t_RandomAccess::initialize(module);
      t_ResourceBundle::initialize(module);
      t_ResourceBundle$Control::initialize(module);
      t_Set::initialize(module);
      t_SortedMap::initialize(module);
      t_SortedSet::initialize(module);
      t_Spliterator::initialize(module);
      t_Spliterator$OfDouble::initialize(module);
      t_Spliterator$OfInt::initialize(module);
      t_Spliterator$OfLong::initialize(module);
      t_Spliterator$OfPrimitive::initialize(module);
      t_TimeZone::initialize(module);
      t_TreeSet::initialize(module);
      function::__initialize__(module);
      stream::__initialize__(module);
    }
  }
}

#include "java/util/function/DoubleConsumer.h"
#include "java/util/function/IntConsumer.h"
#include "java/util/function/LongConsumer.h"
#include "java/util/function/Supplier.h"

namespace java {
  namespace util {
    namespace function {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "function");

        t_DoubleConsumer::install(module);
        t_IntConsumer::install(module);
        t_LongConsumer::install(module);
        t_Supplier::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "function");

        t_DoubleConsumer::initialize(module);
        t_IntConsumer::initialize(module);
        t_LongConsumer::initialize(module);
        t_Supplier::initialize(module);
      }
    }
  }
}

#include "java/util/stream/Collectors.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/stream/Stream.h"

namespace java {
  namespace util {
    namespace stream {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "stream");

        t_Collectors::install(module);
        t_DoubleStream::install(module);
        t_Stream::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "java.util", "stream");

        t_Collectors::initialize(module);
        t_DoubleStream::initialize(module);
        t_Stream::initialize(module);
      }
    }
  }
}


namespace org {

  namespace hipparchus {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }
  namespace orekit {
    void __install__(PyObject *module);
    void __initialize__(PyObject *module);
  }

  void __install__(PyObject *module)
  {
    module = getJavaModule(module, "", "org");

    hipparchus::__install__(module);
    orekit::__install__(module);
  }

  void __initialize__(PyObject *module)
  {
    module = getJavaModule(module, "", "org");

    hipparchus::__initialize__(module);
    orekit::__initialize__(module);
  }
}

#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/FieldElement.h"

namespace org {
  namespace hipparchus {

    namespace analysis {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace complex {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace dfp {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace distribution {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace exception {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace filtering {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace fitting {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace fraction {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace geometry {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace linear {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace ode {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace optim {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace random {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace special {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace stat {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace util {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "org", "hipparchus");

      t_CalculusFieldElement::install(module);
      t_Field::install(module);
      t_FieldElement::install(module);
      analysis::__install__(module);
      complex::__install__(module);
      dfp::__install__(module);
      distribution::__install__(module);
      exception::__install__(module);
      filtering::__install__(module);
      fitting::__install__(module);
      fraction::__install__(module);
      geometry::__install__(module);
      linear::__install__(module);
      ode::__install__(module);
      optim::__install__(module);
      random::__install__(module);
      special::__install__(module);
      stat::__install__(module);
      util::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "org", "hipparchus");

      t_CalculusFieldElement::initialize(module);
      t_Field::initialize(module);
      t_FieldElement::initialize(module);
      analysis::__initialize__(module);
      complex::__initialize__(module);
      dfp::__initialize__(module);
      distribution::__initialize__(module);
      exception::__initialize__(module);
      filtering::__initialize__(module);
      fitting::__initialize__(module);
      fraction::__initialize__(module);
      geometry::__initialize__(module);
      linear::__initialize__(module);
      ode::__initialize__(module);
      optim::__initialize__(module);
      random::__initialize__(module);
      special::__initialize__(module);
      stat::__initialize__(module);
      util::__initialize__(module);
    }
  }
}

#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldBivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "org/hipparchus/analysis/FieldMultivariateFunction.h"
#include "org/hipparchus/analysis/FieldMultivariateMatrixFunction.h"
#include "org/hipparchus/analysis/FieldMultivariateVectorFunction.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/analysis/FieldUnivariateMatrixFunction.h"
#include "org/hipparchus/analysis/FieldUnivariateVectorFunction.h"
#include "org/hipparchus/analysis/FunctionUtils.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/analysis/PythonFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/PythonUnivariateFunction.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      namespace differentiation {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace function {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace integration {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace interpolation {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace polynomials {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace solvers {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "analysis");

        t_BivariateFunction::install(module);
        t_CalculusFieldBivariateFunction::install(module);
        t_CalculusFieldMultivariateFunction::install(module);
        t_CalculusFieldMultivariateMatrixFunction::install(module);
        t_CalculusFieldMultivariateVectorFunction::install(module);
        t_CalculusFieldUnivariateFunction::install(module);
        t_CalculusFieldUnivariateMatrixFunction::install(module);
        t_CalculusFieldUnivariateVectorFunction::install(module);
        t_FieldBivariateFunction::install(module);
        t_FieldMultivariateFunction::install(module);
        t_FieldMultivariateMatrixFunction::install(module);
        t_FieldMultivariateVectorFunction::install(module);
        t_FieldUnivariateFunction::install(module);
        t_FieldUnivariateMatrixFunction::install(module);
        t_FieldUnivariateVectorFunction::install(module);
        t_FunctionUtils::install(module);
        t_MultivariateFunction::install(module);
        t_MultivariateMatrixFunction::install(module);
        t_MultivariateVectorFunction::install(module);
        t_ParametricUnivariateFunction::install(module);
        t_PythonFieldUnivariateFunction::install(module);
        t_PythonUnivariateFunction::install(module);
        t_TrivariateFunction::install(module);
        t_UnivariateFunction::install(module);
        t_UnivariateMatrixFunction::install(module);
        t_UnivariateVectorFunction::install(module);
        differentiation::__install__(module);
        function::__install__(module);
        integration::__install__(module);
        interpolation::__install__(module);
        polynomials::__install__(module);
        solvers::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "analysis");

        t_BivariateFunction::initialize(module);
        t_CalculusFieldBivariateFunction::initialize(module);
        t_CalculusFieldMultivariateFunction::initialize(module);
        t_CalculusFieldMultivariateMatrixFunction::initialize(module);
        t_CalculusFieldMultivariateVectorFunction::initialize(module);
        t_CalculusFieldUnivariateFunction::initialize(module);
        t_CalculusFieldUnivariateMatrixFunction::initialize(module);
        t_CalculusFieldUnivariateVectorFunction::initialize(module);
        t_FieldBivariateFunction::initialize(module);
        t_FieldMultivariateFunction::initialize(module);
        t_FieldMultivariateMatrixFunction::initialize(module);
        t_FieldMultivariateVectorFunction::initialize(module);
        t_FieldUnivariateFunction::initialize(module);
        t_FieldUnivariateMatrixFunction::initialize(module);
        t_FieldUnivariateVectorFunction::initialize(module);
        t_FunctionUtils::initialize(module);
        t_MultivariateFunction::initialize(module);
        t_MultivariateMatrixFunction::initialize(module);
        t_MultivariateVectorFunction::initialize(module);
        t_ParametricUnivariateFunction::initialize(module);
        t_PythonFieldUnivariateFunction::initialize(module);
        t_PythonUnivariateFunction::initialize(module);
        t_TrivariateFunction::initialize(module);
        t_UnivariateFunction::initialize(module);
        t_UnivariateMatrixFunction::initialize(module);
        t_UnivariateVectorFunction::initialize(module);
        differentiation::__initialize__(module);
        function::__initialize__(module);
        integration::__initialize__(module);
        interpolation::__initialize__(module);
        polynomials::__initialize__(module);
        solvers::__initialize__(module);
      }
    }
  }
}

#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/analysis/differentiation/DSFactory.h"
#include "org/hipparchus/analysis/differentiation/DSFactory$DSField.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "org/hipparchus/analysis/differentiation/FieldTaylorMap.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/FiniteDifferencesDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "org/hipparchus/analysis/differentiation/GradientFunction.h"
#include "org/hipparchus/analysis/differentiation/JacobianFunction.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/SparseGradient.h"
#include "org/hipparchus/analysis/differentiation/TaylorMap.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1Field.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.analysis", "differentiation");

          t_DSCompiler::install(module);
          t_DSFactory::install(module);
          t_DSFactory$DSField::install(module);
          t_Derivative::install(module);
          t_DerivativeStructure::install(module);
          t_FDSFactory::install(module);
          t_FDSFactory$DerivativeField::install(module);
          t_FieldDerivative::install(module);
          t_FieldDerivativeStructure::install(module);
          t_FieldGradient::install(module);
          t_FieldGradientField::install(module);
          t_FieldTaylorMap::install(module);
          t_FieldUnivariateDerivative::install(module);
          t_FieldUnivariateDerivative1::install(module);
          t_FieldUnivariateDerivative1Field::install(module);
          t_FieldUnivariateDerivative2::install(module);
          t_FieldUnivariateDerivative2Field::install(module);
          t_FiniteDifferencesDifferentiator::install(module);
          t_Gradient::install(module);
          t_GradientField::install(module);
          t_GradientFunction::install(module);
          t_JacobianFunction::install(module);
          t_MultivariateDifferentiableFunction::install(module);
          t_MultivariateDifferentiableVectorFunction::install(module);
          t_SparseGradient::install(module);
          t_TaylorMap::install(module);
          t_UnivariateDerivative::install(module);
          t_UnivariateDerivative1::install(module);
          t_UnivariateDerivative1Field::install(module);
          t_UnivariateDerivative2::install(module);
          t_UnivariateDerivative2Field::install(module);
          t_UnivariateDifferentiableFunction::install(module);
          t_UnivariateDifferentiableMatrixFunction::install(module);
          t_UnivariateDifferentiableVectorFunction::install(module);
          t_UnivariateFunctionDifferentiator::install(module);
          t_UnivariateMatrixFunctionDifferentiator::install(module);
          t_UnivariateVectorFunctionDifferentiator::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.analysis", "differentiation");

          t_DSCompiler::initialize(module);
          t_DSFactory::initialize(module);
          t_DSFactory$DSField::initialize(module);
          t_Derivative::initialize(module);
          t_DerivativeStructure::initialize(module);
          t_FDSFactory::initialize(module);
          t_FDSFactory$DerivativeField::initialize(module);
          t_FieldDerivative::initialize(module);
          t_FieldDerivativeStructure::initialize(module);
          t_FieldGradient::initialize(module);
          t_FieldGradientField::initialize(module);
          t_FieldTaylorMap::initialize(module);
          t_FieldUnivariateDerivative::initialize(module);
          t_FieldUnivariateDerivative1::initialize(module);
          t_FieldUnivariateDerivative1Field::initialize(module);
          t_FieldUnivariateDerivative2::initialize(module);
          t_FieldUnivariateDerivative2Field::initialize(module);
          t_FiniteDifferencesDifferentiator::initialize(module);
          t_Gradient::initialize(module);
          t_GradientField::initialize(module);
          t_GradientFunction::initialize(module);
          t_JacobianFunction::initialize(module);
          t_MultivariateDifferentiableFunction::initialize(module);
          t_MultivariateDifferentiableVectorFunction::initialize(module);
          t_SparseGradient::initialize(module);
          t_TaylorMap::initialize(module);
          t_UnivariateDerivative::initialize(module);
          t_UnivariateDerivative1::initialize(module);
          t_UnivariateDerivative1Field::initialize(module);
          t_UnivariateDerivative2::initialize(module);
          t_UnivariateDerivative2Field::initialize(module);
          t_UnivariateDifferentiableFunction::initialize(module);
          t_UnivariateDifferentiableMatrixFunction::initialize(module);
          t_UnivariateDifferentiableVectorFunction::initialize(module);
          t_UnivariateFunctionDifferentiator::initialize(module);
          t_UnivariateMatrixFunctionDifferentiator::initialize(module);
          t_UnivariateVectorFunctionDifferentiator::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/analysis/function/Abs.h"
#include "org/hipparchus/analysis/function/Acos.h"
#include "org/hipparchus/analysis/function/Acosh.h"
#include "org/hipparchus/analysis/function/Add.h"
#include "org/hipparchus/analysis/function/Asin.h"
#include "org/hipparchus/analysis/function/Asinh.h"
#include "org/hipparchus/analysis/function/Atan.h"
#include "org/hipparchus/analysis/function/Atan2.h"
#include "org/hipparchus/analysis/function/Atanh.h"
#include "org/hipparchus/analysis/function/Cbrt.h"
#include "org/hipparchus/analysis/function/Ceil.h"
#include "org/hipparchus/analysis/function/Constant.h"
#include "org/hipparchus/analysis/function/Cos.h"
#include "org/hipparchus/analysis/function/Cosh.h"
#include "org/hipparchus/analysis/function/Divide.h"
#include "org/hipparchus/analysis/function/Exp.h"
#include "org/hipparchus/analysis/function/Expm1.h"
#include "org/hipparchus/analysis/function/Floor.h"
#include "org/hipparchus/analysis/function/Gaussian.h"
#include "org/hipparchus/analysis/function/Gaussian$Parametric.h"
#include "org/hipparchus/analysis/function/HarmonicOscillator.h"
#include "org/hipparchus/analysis/function/HarmonicOscillator$Parametric.h"
#include "org/hipparchus/analysis/function/Identity.h"
#include "org/hipparchus/analysis/function/Inverse.h"
#include "org/hipparchus/analysis/function/Log.h"
#include "org/hipparchus/analysis/function/Log10.h"
#include "org/hipparchus/analysis/function/Log1p.h"
#include "org/hipparchus/analysis/function/Logistic.h"
#include "org/hipparchus/analysis/function/Logistic$Parametric.h"
#include "org/hipparchus/analysis/function/Logit.h"
#include "org/hipparchus/analysis/function/Logit$Parametric.h"
#include "org/hipparchus/analysis/function/Max.h"
#include "org/hipparchus/analysis/function/Min.h"
#include "org/hipparchus/analysis/function/Minus.h"
#include "org/hipparchus/analysis/function/Multiply.h"
#include "org/hipparchus/analysis/function/Pow.h"
#include "org/hipparchus/analysis/function/Power.h"
#include "org/hipparchus/analysis/function/Rint.h"
#include "org/hipparchus/analysis/function/Sigmoid.h"
#include "org/hipparchus/analysis/function/Sigmoid$Parametric.h"
#include "org/hipparchus/analysis/function/Sin.h"
#include "org/hipparchus/analysis/function/Sinc.h"
#include "org/hipparchus/analysis/function/Sinh.h"
#include "org/hipparchus/analysis/function/Sqrt.h"
#include "org/hipparchus/analysis/function/StepFunction.h"
#include "org/hipparchus/analysis/function/Subtract.h"
#include "org/hipparchus/analysis/function/Tan.h"
#include "org/hipparchus/analysis/function/Tanh.h"
#include "org/hipparchus/analysis/function/Ulp.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.analysis", "function");

          t_Abs::install(module);
          t_Acos::install(module);
          t_Acosh::install(module);
          t_Add::install(module);
          t_Asin::install(module);
          t_Asinh::install(module);
          t_Atan::install(module);
          t_Atan2::install(module);
          t_Atanh::install(module);
          t_Cbrt::install(module);
          t_Ceil::install(module);
          t_Constant::install(module);
          t_Cos::install(module);
          t_Cosh::install(module);
          t_Divide::install(module);
          t_Exp::install(module);
          t_Expm1::install(module);
          t_Floor::install(module);
          t_Gaussian::install(module);
          t_Gaussian$Parametric::install(module);
          t_HarmonicOscillator::install(module);
          t_HarmonicOscillator$Parametric::install(module);
          t_Identity::install(module);
          t_Inverse::install(module);
          t_Log::install(module);
          t_Log10::install(module);
          t_Log1p::install(module);
          t_Logistic::install(module);
          t_Logistic$Parametric::install(module);
          t_Logit::install(module);
          t_Logit$Parametric::install(module);
          t_Max::install(module);
          t_Min::install(module);
          t_Minus::install(module);
          t_Multiply::install(module);
          t_Pow::install(module);
          t_Power::install(module);
          t_Rint::install(module);
          t_Sigmoid::install(module);
          t_Sigmoid$Parametric::install(module);
          t_Sin::install(module);
          t_Sinc::install(module);
          t_Sinh::install(module);
          t_Sqrt::install(module);
          t_StepFunction::install(module);
          t_Subtract::install(module);
          t_Tan::install(module);
          t_Tanh::install(module);
          t_Ulp::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.analysis", "function");

          t_Abs::initialize(module);
          t_Acos::initialize(module);
          t_Acosh::initialize(module);
          t_Add::initialize(module);
          t_Asin::initialize(module);
          t_Asinh::initialize(module);
          t_Atan::initialize(module);
          t_Atan2::initialize(module);
          t_Atanh::initialize(module);
          t_Cbrt::initialize(module);
          t_Ceil::initialize(module);
          t_Constant::initialize(module);
          t_Cos::initialize(module);
          t_Cosh::initialize(module);
          t_Divide::initialize(module);
          t_Exp::initialize(module);
          t_Expm1::initialize(module);
          t_Floor::initialize(module);
          t_Gaussian::initialize(module);
          t_Gaussian$Parametric::initialize(module);
          t_HarmonicOscillator::initialize(module);
          t_HarmonicOscillator$Parametric::initialize(module);
          t_Identity::initialize(module);
          t_Inverse::initialize(module);
          t_Log::initialize(module);
          t_Log10::initialize(module);
          t_Log1p::initialize(module);
          t_Logistic::initialize(module);
          t_Logistic$Parametric::initialize(module);
          t_Logit::initialize(module);
          t_Logit$Parametric::initialize(module);
          t_Max::initialize(module);
          t_Min::initialize(module);
          t_Minus::initialize(module);
          t_Multiply::initialize(module);
          t_Pow::initialize(module);
          t_Power::initialize(module);
          t_Rint::initialize(module);
          t_Sigmoid::initialize(module);
          t_Sigmoid$Parametric::initialize(module);
          t_Sin::initialize(module);
          t_Sinc::initialize(module);
          t_Sinh::initialize(module);
          t_Sqrt::initialize(module);
          t_StepFunction::initialize(module);
          t_Subtract::initialize(module);
          t_Tan::initialize(module);
          t_Tanh::initialize(module);
          t_Ulp::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator.h"
#include "org/hipparchus/analysis/integration/BaseAbstractUnivariateIntegrator.h"
#include "org/hipparchus/analysis/integration/FieldMidPointIntegrator.h"
#include "org/hipparchus/analysis/integration/FieldRombergIntegrator.h"
#include "org/hipparchus/analysis/integration/FieldSimpsonIntegrator.h"
#include "org/hipparchus/analysis/integration/FieldTrapezoidIntegrator.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/hipparchus/analysis/integration/IterativeLegendreFieldGaussIntegrator.h"
#include "org/hipparchus/analysis/integration/IterativeLegendreGaussIntegrator.h"
#include "org/hipparchus/analysis/integration/MidPointIntegrator.h"
#include "org/hipparchus/analysis/integration/RombergIntegrator.h"
#include "org/hipparchus/analysis/integration/SimpsonIntegrator.h"
#include "org/hipparchus/analysis/integration/TrapezoidIntegrator.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        namespace gauss {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.analysis", "integration");

          t_BaseAbstractFieldUnivariateIntegrator::install(module);
          t_BaseAbstractUnivariateIntegrator::install(module);
          t_FieldMidPointIntegrator::install(module);
          t_FieldRombergIntegrator::install(module);
          t_FieldSimpsonIntegrator::install(module);
          t_FieldTrapezoidIntegrator::install(module);
          t_FieldUnivariateIntegrator::install(module);
          t_IterativeLegendreFieldGaussIntegrator::install(module);
          t_IterativeLegendreGaussIntegrator::install(module);
          t_MidPointIntegrator::install(module);
          t_RombergIntegrator::install(module);
          t_SimpsonIntegrator::install(module);
          t_TrapezoidIntegrator::install(module);
          t_UnivariateIntegrator::install(module);
          gauss::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.analysis", "integration");

          t_BaseAbstractFieldUnivariateIntegrator::initialize(module);
          t_BaseAbstractUnivariateIntegrator::initialize(module);
          t_FieldMidPointIntegrator::initialize(module);
          t_FieldRombergIntegrator::initialize(module);
          t_FieldSimpsonIntegrator::initialize(module);
          t_FieldTrapezoidIntegrator::initialize(module);
          t_FieldUnivariateIntegrator::initialize(module);
          t_IterativeLegendreFieldGaussIntegrator::initialize(module);
          t_IterativeLegendreGaussIntegrator::initialize(module);
          t_MidPointIntegrator::initialize(module);
          t_RombergIntegrator::initialize(module);
          t_SimpsonIntegrator::initialize(module);
          t_TrapezoidIntegrator::initialize(module);
          t_UnivariateIntegrator::initialize(module);
          gauss::__initialize__(module);
        }
      }
    }
  }
}

#include "org/hipparchus/analysis/integration/gauss/AbstractRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/ConvertingRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/FieldAbstractRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator.h"
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegratorFactory.h"
#include "org/hipparchus/analysis/integration/gauss/FieldHermiteRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/FieldLaguerreRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/FieldLegendreRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/GaussIntegrator.h"
#include "org/hipparchus/analysis/integration/gauss/GaussIntegratorFactory.h"
#include "org/hipparchus/analysis/integration/gauss/HermiteRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/LaguerreRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/LegendreRuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/RuleFactory.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.analysis.integration", "gauss");

            t_AbstractRuleFactory::install(module);
            t_ConvertingRuleFactory::install(module);
            t_FieldAbstractRuleFactory::install(module);
            t_FieldGaussIntegrator::install(module);
            t_FieldGaussIntegratorFactory::install(module);
            t_FieldHermiteRuleFactory::install(module);
            t_FieldLaguerreRuleFactory::install(module);
            t_FieldLegendreRuleFactory::install(module);
            t_FieldRuleFactory::install(module);
            t_GaussIntegrator::install(module);
            t_GaussIntegratorFactory::install(module);
            t_HermiteRuleFactory::install(module);
            t_LaguerreRuleFactory::install(module);
            t_LegendreRuleFactory::install(module);
            t_RuleFactory::install(module);
            t_SymmetricFieldGaussIntegrator::install(module);
            t_SymmetricGaussIntegrator::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.analysis.integration", "gauss");

            t_AbstractRuleFactory::initialize(module);
            t_ConvertingRuleFactory::initialize(module);
            t_FieldAbstractRuleFactory::initialize(module);
            t_FieldGaussIntegrator::initialize(module);
            t_FieldGaussIntegratorFactory::initialize(module);
            t_FieldHermiteRuleFactory::initialize(module);
            t_FieldLaguerreRuleFactory::initialize(module);
            t_FieldLegendreRuleFactory::initialize(module);
            t_FieldRuleFactory::initialize(module);
            t_GaussIntegrator::initialize(module);
            t_GaussIntegratorFactory::initialize(module);
            t_HermiteRuleFactory::initialize(module);
            t_LaguerreRuleFactory::initialize(module);
            t_LegendreRuleFactory::initialize(module);
            t_RuleFactory::initialize(module);
            t_SymmetricFieldGaussIntegrator::initialize(module);
            t_SymmetricGaussIntegrator::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/analysis/interpolation/AkimaSplineInterpolator.h"
#include "org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction.h"
#include "org/hipparchus/analysis/interpolation/BicubicInterpolator.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolator.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "org/hipparchus/analysis/interpolation/DividedDifferenceInterpolator.h"
#include "org/hipparchus/analysis/interpolation/FieldHermiteInterpolator.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/analysis/interpolation/GridAxis.h"
#include "org/hipparchus/analysis/interpolation/HermiteInterpolator.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere.h"
#include "org/hipparchus/analysis/interpolation/InterpolatingMicrosphere2D.h"
#include "org/hipparchus/analysis/interpolation/LinearInterpolator.h"
#include "org/hipparchus/analysis/interpolation/LoessInterpolator.h"
#include "org/hipparchus/analysis/interpolation/MicrosphereProjectionInterpolator.h"
#include "org/hipparchus/analysis/interpolation/MultivariateInterpolator.h"
#include "org/hipparchus/analysis/interpolation/NevilleInterpolator.h"
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction.h"
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolator.h"
#include "org/hipparchus/analysis/interpolation/SplineInterpolator.h"
#include "org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction.h"
#include "org/hipparchus/analysis/interpolation/TricubicInterpolator.h"
#include "org/hipparchus/analysis/interpolation/TrivariateGridInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariatePeriodicInterpolator.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.analysis", "interpolation");

          t_AkimaSplineInterpolator::install(module);
          t_BicubicInterpolatingFunction::install(module);
          t_BicubicInterpolator::install(module);
          t_BilinearInterpolatingFunction::install(module);
          t_BilinearInterpolator::install(module);
          t_BivariateGridInterpolator::install(module);
          t_DividedDifferenceInterpolator::install(module);
          t_FieldHermiteInterpolator::install(module);
          t_FieldUnivariateInterpolator::install(module);
          t_GridAxis::install(module);
          t_HermiteInterpolator::install(module);
          t_InterpolatingMicrosphere::install(module);
          t_InterpolatingMicrosphere2D::install(module);
          t_LinearInterpolator::install(module);
          t_LoessInterpolator::install(module);
          t_MicrosphereProjectionInterpolator::install(module);
          t_MultivariateInterpolator::install(module);
          t_NevilleInterpolator::install(module);
          t_PiecewiseBicubicSplineInterpolatingFunction::install(module);
          t_PiecewiseBicubicSplineInterpolator::install(module);
          t_SplineInterpolator::install(module);
          t_TricubicInterpolatingFunction::install(module);
          t_TricubicInterpolator::install(module);
          t_TrivariateGridInterpolator::install(module);
          t_UnivariateInterpolator::install(module);
          t_UnivariatePeriodicInterpolator::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.analysis", "interpolation");

          t_AkimaSplineInterpolator::initialize(module);
          t_BicubicInterpolatingFunction::initialize(module);
          t_BicubicInterpolator::initialize(module);
          t_BilinearInterpolatingFunction::initialize(module);
          t_BilinearInterpolator::initialize(module);
          t_BivariateGridInterpolator::initialize(module);
          t_DividedDifferenceInterpolator::initialize(module);
          t_FieldHermiteInterpolator::initialize(module);
          t_FieldUnivariateInterpolator::initialize(module);
          t_GridAxis::initialize(module);
          t_HermiteInterpolator::initialize(module);
          t_InterpolatingMicrosphere::initialize(module);
          t_InterpolatingMicrosphere2D::initialize(module);
          t_LinearInterpolator::initialize(module);
          t_LoessInterpolator::initialize(module);
          t_MicrosphereProjectionInterpolator::initialize(module);
          t_MultivariateInterpolator::initialize(module);
          t_NevilleInterpolator::initialize(module);
          t_PiecewiseBicubicSplineInterpolatingFunction::initialize(module);
          t_PiecewiseBicubicSplineInterpolator::initialize(module);
          t_SplineInterpolator::initialize(module);
          t_TricubicInterpolatingFunction::initialize(module);
          t_TricubicInterpolator::initialize(module);
          t_TrivariateGridInterpolator::initialize(module);
          t_UnivariateInterpolator::initialize(module);
          t_UnivariatePeriodicInterpolator::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionLagrangeForm.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunctionNewtonForm.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialsUtils.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.analysis", "polynomials");

          t_FieldPolynomialFunction::install(module);
          t_FieldPolynomialSplineFunction::install(module);
          t_PolynomialFunction::install(module);
          t_PolynomialFunction$Parametric::install(module);
          t_PolynomialFunctionLagrangeForm::install(module);
          t_PolynomialFunctionNewtonForm::install(module);
          t_PolynomialSplineFunction::install(module);
          t_PolynomialsUtils::install(module);
          t_SmoothStepFactory::install(module);
          t_SmoothStepFactory$FieldSmoothStepFunction::install(module);
          t_SmoothStepFactory$QuadraticSmoothStepFunction::install(module);
          t_SmoothStepFactory$SmoothStepFunction::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.analysis", "polynomials");

          t_FieldPolynomialFunction::initialize(module);
          t_FieldPolynomialSplineFunction::initialize(module);
          t_PolynomialFunction::initialize(module);
          t_PolynomialFunction$Parametric::initialize(module);
          t_PolynomialFunctionLagrangeForm::initialize(module);
          t_PolynomialFunctionNewtonForm::initialize(module);
          t_PolynomialSplineFunction::initialize(module);
          t_PolynomialsUtils::initialize(module);
          t_SmoothStepFactory::initialize(module);
          t_SmoothStepFactory$FieldSmoothStepFunction::initialize(module);
          t_SmoothStepFactory$QuadraticSmoothStepFunction::initialize(module);
          t_SmoothStepFactory$SmoothStepFunction::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/analysis/solvers/AbstractPolynomialSolver.h"
#include "org/hipparchus/analysis/solvers/AbstractUnivariateDifferentiableSolver.h"
#include "org/hipparchus/analysis/solvers/AbstractUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/analysis/solvers/BaseAbstractUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/BaseSecantSolver.h"
#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/BisectionSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/solvers/BracketingNthOrderBrentSolver.h"
#include "org/hipparchus/analysis/solvers/BrentSolver.h"
#include "org/hipparchus/analysis/solvers/FieldBracketingNthOrderBrentSolver.h"
#include "org/hipparchus/analysis/solvers/IllinoisSolver.h"
#include "org/hipparchus/analysis/solvers/LaguerreSolver.h"
#include "org/hipparchus/analysis/solvers/MullerSolver.h"
#include "org/hipparchus/analysis/solvers/MullerSolver2.h"
#include "org/hipparchus/analysis/solvers/NewtonRaphsonSolver.h"
#include "org/hipparchus/analysis/solvers/PegasusSolver.h"
#include "org/hipparchus/analysis/solvers/PolynomialSolver.h"
#include "org/hipparchus/analysis/solvers/RegulaFalsiSolver.h"
#include "org/hipparchus/analysis/solvers/RiddersSolver.h"
#include "org/hipparchus/analysis/solvers/SecantSolver.h"
#include "org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver.h"
#include "org/hipparchus/analysis/solvers/UnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/UnivariateSolverUtils.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.analysis", "solvers");

          t_AbstractPolynomialSolver::install(module);
          t_AbstractUnivariateDifferentiableSolver::install(module);
          t_AbstractUnivariateSolver::install(module);
          t_AllowedSolution::install(module);
          t_BaseAbstractUnivariateSolver::install(module);
          t_BaseSecantSolver::install(module);
          t_BaseUnivariateSolver::install(module);
          t_BisectionSolver::install(module);
          t_BracketedRealFieldUnivariateSolver::install(module);
          t_BracketedRealFieldUnivariateSolver$Interval::install(module);
          t_BracketedUnivariateSolver::install(module);
          t_BracketedUnivariateSolver$Interval::install(module);
          t_BracketingNthOrderBrentSolver::install(module);
          t_BrentSolver::install(module);
          t_FieldBracketingNthOrderBrentSolver::install(module);
          t_IllinoisSolver::install(module);
          t_LaguerreSolver::install(module);
          t_MullerSolver::install(module);
          t_MullerSolver2::install(module);
          t_NewtonRaphsonSolver::install(module);
          t_PegasusSolver::install(module);
          t_PolynomialSolver::install(module);
          t_RegulaFalsiSolver::install(module);
          t_RiddersSolver::install(module);
          t_SecantSolver::install(module);
          t_UnivariateDifferentiableSolver::install(module);
          t_UnivariateSolver::install(module);
          t_UnivariateSolverUtils::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.analysis", "solvers");

          t_AbstractPolynomialSolver::initialize(module);
          t_AbstractUnivariateDifferentiableSolver::initialize(module);
          t_AbstractUnivariateSolver::initialize(module);
          t_AllowedSolution::initialize(module);
          t_BaseAbstractUnivariateSolver::initialize(module);
          t_BaseSecantSolver::initialize(module);
          t_BaseUnivariateSolver::initialize(module);
          t_BisectionSolver::initialize(module);
          t_BracketedRealFieldUnivariateSolver::initialize(module);
          t_BracketedRealFieldUnivariateSolver$Interval::initialize(module);
          t_BracketedUnivariateSolver::initialize(module);
          t_BracketedUnivariateSolver$Interval::initialize(module);
          t_BracketingNthOrderBrentSolver::initialize(module);
          t_BrentSolver::initialize(module);
          t_FieldBracketingNthOrderBrentSolver::initialize(module);
          t_IllinoisSolver::initialize(module);
          t_LaguerreSolver::initialize(module);
          t_MullerSolver::initialize(module);
          t_MullerSolver2::initialize(module);
          t_NewtonRaphsonSolver::initialize(module);
          t_PegasusSolver::initialize(module);
          t_PolynomialSolver::initialize(module);
          t_RegulaFalsiSolver::initialize(module);
          t_RiddersSolver::initialize(module);
          t_SecantSolver::initialize(module);
          t_UnivariateDifferentiableSolver::initialize(module);
          t_UnivariateSolver::initialize(module);
          t_UnivariateSolverUtils::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/complex/ComplexComparator.h"
#include "org/hipparchus/complex/ComplexField.h"
#include "org/hipparchus/complex/ComplexFormat.h"
#include "org/hipparchus/complex/ComplexUnivariateIntegrator.h"
#include "org/hipparchus/complex/ComplexUtils.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "org/hipparchus/complex/FieldComplexUnivariateIntegrator.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "org/hipparchus/complex/RootsOfUnity.h"

namespace org {
  namespace hipparchus {
    namespace complex {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "complex");

        t_Complex::install(module);
        t_ComplexComparator::install(module);
        t_ComplexField::install(module);
        t_ComplexFormat::install(module);
        t_ComplexUnivariateIntegrator::install(module);
        t_ComplexUtils::install(module);
        t_FieldComplex::install(module);
        t_FieldComplexField::install(module);
        t_FieldComplexUnivariateIntegrator::install(module);
        t_Quaternion::install(module);
        t_RootsOfUnity::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "complex");

        t_Complex::initialize(module);
        t_ComplexComparator::initialize(module);
        t_ComplexField::initialize(module);
        t_ComplexFormat::initialize(module);
        t_ComplexUnivariateIntegrator::initialize(module);
        t_ComplexUtils::initialize(module);
        t_FieldComplex::initialize(module);
        t_FieldComplexField::initialize(module);
        t_FieldComplexUnivariateIntegrator::initialize(module);
        t_Quaternion::initialize(module);
        t_RootsOfUnity::initialize(module);
      }
    }
  }
}

#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/dfp/DfpDec.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "org/hipparchus/dfp/DfpMath.h"

namespace org {
  namespace hipparchus {
    namespace dfp {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "dfp");

        t_Dfp::install(module);
        t_DfpDec::install(module);
        t_DfpField::install(module);
        t_DfpField$RoundingMode::install(module);
        t_DfpMath::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "dfp");

        t_Dfp::initialize(module);
        t_DfpDec::initialize(module);
        t_DfpField::initialize(module);
        t_DfpField$RoundingMode::initialize(module);
        t_DfpMath::initialize(module);
      }
    }
  }
}

#include "org/hipparchus/distribution/EnumeratedDistribution.h"
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "org/hipparchus/distribution/MultivariateRealDistribution.h"
#include "org/hipparchus/distribution/RealDistribution.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      namespace continuous {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace discrete {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace multivariate {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "distribution");

        t_EnumeratedDistribution::install(module);
        t_IntegerDistribution::install(module);
        t_MultivariateRealDistribution::install(module);
        t_RealDistribution::install(module);
        continuous::__install__(module);
        discrete::__install__(module);
        multivariate::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "distribution");

        t_EnumeratedDistribution::initialize(module);
        t_IntegerDistribution::initialize(module);
        t_MultivariateRealDistribution::initialize(module);
        t_RealDistribution::initialize(module);
        continuous::__initialize__(module);
        discrete::__initialize__(module);
        multivariate::__initialize__(module);
      }
    }
  }
}

#include "org/hipparchus/distribution/continuous/AbstractRealDistribution.h"
#include "org/hipparchus/distribution/continuous/BetaDistribution.h"
#include "org/hipparchus/distribution/continuous/CauchyDistribution.h"
#include "org/hipparchus/distribution/continuous/ChiSquaredDistribution.h"
#include "org/hipparchus/distribution/continuous/ConstantRealDistribution.h"
#include "org/hipparchus/distribution/continuous/EnumeratedRealDistribution.h"
#include "org/hipparchus/distribution/continuous/ExponentialDistribution.h"
#include "org/hipparchus/distribution/continuous/FDistribution.h"
#include "org/hipparchus/distribution/continuous/GammaDistribution.h"
#include "org/hipparchus/distribution/continuous/GumbelDistribution.h"
#include "org/hipparchus/distribution/continuous/LaplaceDistribution.h"
#include "org/hipparchus/distribution/continuous/LevyDistribution.h"
#include "org/hipparchus/distribution/continuous/LogNormalDistribution.h"
#include "org/hipparchus/distribution/continuous/LogisticDistribution.h"
#include "org/hipparchus/distribution/continuous/NakagamiDistribution.h"
#include "org/hipparchus/distribution/continuous/NormalDistribution.h"
#include "org/hipparchus/distribution/continuous/ParetoDistribution.h"
#include "org/hipparchus/distribution/continuous/TDistribution.h"
#include "org/hipparchus/distribution/continuous/TriangularDistribution.h"
#include "org/hipparchus/distribution/continuous/UniformRealDistribution.h"
#include "org/hipparchus/distribution/continuous/WeibullDistribution.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.distribution", "continuous");

          t_AbstractRealDistribution::install(module);
          t_BetaDistribution::install(module);
          t_CauchyDistribution::install(module);
          t_ChiSquaredDistribution::install(module);
          t_ConstantRealDistribution::install(module);
          t_EnumeratedRealDistribution::install(module);
          t_ExponentialDistribution::install(module);
          t_FDistribution::install(module);
          t_GammaDistribution::install(module);
          t_GumbelDistribution::install(module);
          t_LaplaceDistribution::install(module);
          t_LevyDistribution::install(module);
          t_LogNormalDistribution::install(module);
          t_LogisticDistribution::install(module);
          t_NakagamiDistribution::install(module);
          t_NormalDistribution::install(module);
          t_ParetoDistribution::install(module);
          t_TDistribution::install(module);
          t_TriangularDistribution::install(module);
          t_UniformRealDistribution::install(module);
          t_WeibullDistribution::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.distribution", "continuous");

          t_AbstractRealDistribution::initialize(module);
          t_BetaDistribution::initialize(module);
          t_CauchyDistribution::initialize(module);
          t_ChiSquaredDistribution::initialize(module);
          t_ConstantRealDistribution::initialize(module);
          t_EnumeratedRealDistribution::initialize(module);
          t_ExponentialDistribution::initialize(module);
          t_FDistribution::initialize(module);
          t_GammaDistribution::initialize(module);
          t_GumbelDistribution::initialize(module);
          t_LaplaceDistribution::initialize(module);
          t_LevyDistribution::initialize(module);
          t_LogNormalDistribution::initialize(module);
          t_LogisticDistribution::initialize(module);
          t_NakagamiDistribution::initialize(module);
          t_NormalDistribution::initialize(module);
          t_ParetoDistribution::initialize(module);
          t_TDistribution::initialize(module);
          t_TriangularDistribution::initialize(module);
          t_UniformRealDistribution::initialize(module);
          t_WeibullDistribution::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/distribution/discrete/AbstractIntegerDistribution.h"
#include "org/hipparchus/distribution/discrete/BinomialDistribution.h"
#include "org/hipparchus/distribution/discrete/EnumeratedIntegerDistribution.h"
#include "org/hipparchus/distribution/discrete/GeometricDistribution.h"
#include "org/hipparchus/distribution/discrete/HypergeometricDistribution.h"
#include "org/hipparchus/distribution/discrete/PascalDistribution.h"
#include "org/hipparchus/distribution/discrete/PoissonDistribution.h"
#include "org/hipparchus/distribution/discrete/UniformIntegerDistribution.h"
#include "org/hipparchus/distribution/discrete/ZipfDistribution.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.distribution", "discrete");

          t_AbstractIntegerDistribution::install(module);
          t_BinomialDistribution::install(module);
          t_EnumeratedIntegerDistribution::install(module);
          t_GeometricDistribution::install(module);
          t_HypergeometricDistribution::install(module);
          t_PascalDistribution::install(module);
          t_PoissonDistribution::install(module);
          t_UniformIntegerDistribution::install(module);
          t_ZipfDistribution::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.distribution", "discrete");

          t_AbstractIntegerDistribution::initialize(module);
          t_BinomialDistribution::initialize(module);
          t_EnumeratedIntegerDistribution::initialize(module);
          t_GeometricDistribution::initialize(module);
          t_HypergeometricDistribution::initialize(module);
          t_PascalDistribution::initialize(module);
          t_PoissonDistribution::initialize(module);
          t_UniformIntegerDistribution::initialize(module);
          t_ZipfDistribution::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution.h"
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution.h"
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateRealDistribution.h"
#include "org/hipparchus/distribution/multivariate/MultivariateNormalDistribution.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.distribution", "multivariate");

          t_AbstractMultivariateRealDistribution::install(module);
          t_MixtureMultivariateNormalDistribution::install(module);
          t_MixtureMultivariateRealDistribution::install(module);
          t_MultivariateNormalDistribution::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.distribution", "multivariate");

          t_AbstractMultivariateRealDistribution::initialize(module);
          t_MixtureMultivariateNormalDistribution::initialize(module);
          t_MixtureMultivariateRealDistribution::initialize(module);
          t_MultivariateNormalDistribution::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/exception/DummyLocalizable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/LocalizedCoreFormats.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/UTF8Control.h"

namespace org {
  namespace hipparchus {
    namespace exception {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "exception");

        t_DummyLocalizable::install(module);
        t_Localizable::install(module);
        t_LocalizedCoreFormats::install(module);
        t_LocalizedException::install(module);
        t_MathIllegalArgumentException::install(module);
        t_MathIllegalStateException::install(module);
        t_MathRuntimeException::install(module);
        t_NullArgumentException::install(module);
        t_UTF8Control::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "exception");

        t_DummyLocalizable::initialize(module);
        t_Localizable::initialize(module);
        t_LocalizedCoreFormats::initialize(module);
        t_LocalizedException::initialize(module);
        t_MathIllegalArgumentException::initialize(module);
        t_MathIllegalStateException::initialize(module);
        t_MathRuntimeException::initialize(module);
        t_NullArgumentException::initialize(module);
        t_UTF8Control::initialize(module);
      }
    }
  }
}


namespace org {
  namespace hipparchus {
    namespace filtering {

      namespace kalman {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "filtering");

        kalman::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "filtering");

        kalman::__initialize__(module);
      }
    }
  }
}

#include "org/hipparchus/filtering/kalman/AbstractKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        namespace extended {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace linear {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace unscented {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.filtering", "kalman");

          t_AbstractKalmanFilter::install(module);
          t_KalmanFilter::install(module);
          t_Measurement::install(module);
          t_ProcessEstimate::install(module);
          extended::__install__(module);
          linear::__install__(module);
          unscented::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.filtering", "kalman");

          t_AbstractKalmanFilter::initialize(module);
          t_KalmanFilter::initialize(module);
          t_Measurement::initialize(module);
          t_ProcessEstimate::initialize(module);
          extended::__initialize__(module);
          linear::__initialize__(module);
          unscented::__initialize__(module);
        }
      }
    }
  }
}

#include "org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.filtering.kalman", "extended");

            t_ExtendedKalmanFilter::install(module);
            t_NonLinearEvolution::install(module);
            t_NonLinearProcess::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.filtering.kalman", "extended");

            t_ExtendedKalmanFilter::initialize(module);
            t_NonLinearEvolution::initialize(module);
            t_NonLinearProcess::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/filtering/kalman/linear/LinearEvolution.h"
#include "org/hipparchus/filtering/kalman/linear/LinearKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/linear/LinearProcess.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.filtering.kalman", "linear");

            t_LinearEvolution::install(module);
            t_LinearKalmanFilter::install(module);
            t_LinearProcess::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.filtering.kalman", "linear");

            t_LinearEvolution::initialize(module);
            t_LinearKalmanFilter::initialize(module);
            t_LinearProcess::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace unscented {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.filtering.kalman", "unscented");

            t_UnscentedEvolution::install(module);
            t_UnscentedKalmanFilter::install(module);
            t_UnscentedProcess::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.filtering.kalman", "unscented");

            t_UnscentedEvolution::initialize(module);
            t_UnscentedKalmanFilter::initialize(module);
            t_UnscentedProcess::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/fitting/AbstractCurveFitter.h"
#include "org/hipparchus/fitting/GaussianCurveFitter.h"
#include "org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser.h"
#include "org/hipparchus/fitting/PolynomialCurveFitter.h"
#include "org/hipparchus/fitting/SimpleCurveFitter.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "org/hipparchus/fitting/WeightedObservedPoints.h"

namespace org {
  namespace hipparchus {
    namespace fitting {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "fitting");

        t_AbstractCurveFitter::install(module);
        t_GaussianCurveFitter::install(module);
        t_GaussianCurveFitter$ParameterGuesser::install(module);
        t_HarmonicCurveFitter::install(module);
        t_HarmonicCurveFitter$ParameterGuesser::install(module);
        t_PolynomialCurveFitter::install(module);
        t_SimpleCurveFitter::install(module);
        t_WeightedObservedPoint::install(module);
        t_WeightedObservedPoints::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "fitting");

        t_AbstractCurveFitter::initialize(module);
        t_GaussianCurveFitter::initialize(module);
        t_GaussianCurveFitter$ParameterGuesser::initialize(module);
        t_HarmonicCurveFitter::initialize(module);
        t_HarmonicCurveFitter$ParameterGuesser::initialize(module);
        t_PolynomialCurveFitter::initialize(module);
        t_SimpleCurveFitter::initialize(module);
        t_WeightedObservedPoint::initialize(module);
        t_WeightedObservedPoints::initialize(module);
      }
    }
  }
}

#include "org/hipparchus/fraction/AbstractFormat.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "org/hipparchus/fraction/BigFraction$ConvergenceTest.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "org/hipparchus/fraction/BigFractionFormat.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "org/hipparchus/fraction/Fraction$ConvergenceTest.h"
#include "org/hipparchus/fraction/FractionField.h"
#include "org/hipparchus/fraction/FractionFormat.h"
#include "org/hipparchus/fraction/ProperBigFractionFormat.h"
#include "org/hipparchus/fraction/ProperFractionFormat.h"

namespace org {
  namespace hipparchus {
    namespace fraction {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "fraction");

        t_AbstractFormat::install(module);
        t_BigFraction::install(module);
        t_BigFraction$ConvergenceTest::install(module);
        t_BigFractionField::install(module);
        t_BigFractionFormat::install(module);
        t_Fraction::install(module);
        t_Fraction$ConvergenceTest::install(module);
        t_FractionField::install(module);
        t_FractionFormat::install(module);
        t_ProperBigFractionFormat::install(module);
        t_ProperFractionFormat::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "fraction");

        t_AbstractFormat::initialize(module);
        t_BigFraction::initialize(module);
        t_BigFraction$ConvergenceTest::initialize(module);
        t_BigFractionField::initialize(module);
        t_BigFractionFormat::initialize(module);
        t_Fraction::initialize(module);
        t_Fraction$ConvergenceTest::initialize(module);
        t_FractionField::initialize(module);
        t_FractionFormat::initialize(module);
        t_ProperBigFractionFormat::initialize(module);
        t_ProperFractionFormat::initialize(module);
      }
    }
  }
}

#include "org/hipparchus/geometry/LocalizedGeometryFormats.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/VectorFormat.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      namespace enclosing {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace euclidean {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace hull {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace partitioning {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace spherical {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "geometry");

        t_LocalizedGeometryFormats::install(module);
        t_Point::install(module);
        t_Space::install(module);
        t_Vector::install(module);
        t_VectorFormat::install(module);
        enclosing::__install__(module);
        euclidean::__install__(module);
        hull::__install__(module);
        partitioning::__install__(module);
        spherical::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "geometry");

        t_LocalizedGeometryFormats::initialize(module);
        t_Point::initialize(module);
        t_Space::initialize(module);
        t_Vector::initialize(module);
        t_VectorFormat::initialize(module);
        enclosing::__initialize__(module);
        euclidean::__initialize__(module);
        hull::__initialize__(module);
        partitioning::__initialize__(module);
        spherical::__initialize__(module);
      }
    }
  }
}

#include "org/hipparchus/geometry/enclosing/Encloser.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "org/hipparchus/geometry/enclosing/WelzlEncloser.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.geometry", "enclosing");

          t_Encloser::install(module);
          t_EnclosingBall::install(module);
          t_SupportBallGenerator::install(module);
          t_WelzlEncloser::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.geometry", "enclosing");

          t_Encloser::initialize(module);
          t_EnclosingBall::initialize(module);
          t_SupportBallGenerator::initialize(module);
          t_WelzlEncloser::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {

        namespace oned {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace threed {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace twod {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.geometry", "euclidean");

          oned::__install__(module);
          threed::__install__(module);
          twod::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.geometry", "euclidean");

          oned::__initialize__(module);
          threed::__initialize__(module);
          twod::__initialize__(module);
        }
      }
    }
  }
}

#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D$NoSubSpaceException.h"
#include "org/hipparchus/geometry/euclidean/oned/Interval.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "org/hipparchus/geometry/euclidean/oned/OrientedPoint.h"
#include "org/hipparchus/geometry/euclidean/oned/SubOrientedPoint.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1DFormat.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.geometry.euclidean", "oned");

            t_Euclidean1D::install(module);
            t_Euclidean1D$NoSubSpaceException::install(module);
            t_Interval::install(module);
            t_IntervalsSet::install(module);
            t_OrientedPoint::install(module);
            t_SubOrientedPoint::install(module);
            t_Vector1D::install(module);
            t_Vector1DFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.geometry.euclidean", "oned");

            t_Euclidean1D::initialize(module);
            t_Euclidean1D$NoSubSpaceException::initialize(module);
            t_Interval::initialize(module);
            t_IntervalsSet::initialize(module);
            t_OrientedPoint::initialize(module);
            t_SubOrientedPoint::initialize(module);
            t_Vector1D::initialize(module);
            t_Vector1DFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/OutlineExtractor.h"
#include "org/hipparchus/geometry/euclidean/threed/Plane.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/geometry/euclidean/threed/Segment.h"
#include "org/hipparchus/geometry/euclidean/threed/SphereGenerator.h"
#include "org/hipparchus/geometry/euclidean/threed/SphericalCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "org/hipparchus/geometry/euclidean/threed/SubPlane.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3DFormat.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.geometry.euclidean", "threed");

            t_Euclidean3D::install(module);
            t_FieldLine::install(module);
            t_FieldRotation::install(module);
            t_FieldVector3D::install(module);
            t_Line::install(module);
            t_OutlineExtractor::install(module);
            t_Plane::install(module);
            t_PolyhedronsSet::install(module);
            t_PolyhedronsSet$BRep::install(module);
            t_Rotation::install(module);
            t_RotationConvention::install(module);
            t_RotationOrder::install(module);
            t_Segment::install(module);
            t_SphereGenerator::install(module);
            t_SphericalCoordinates::install(module);
            t_SubLine::install(module);
            t_SubPlane::install(module);
            t_Vector3D::install(module);
            t_Vector3DFormat::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.geometry.euclidean", "threed");

            t_Euclidean3D::initialize(module);
            t_FieldLine::initialize(module);
            t_FieldRotation::initialize(module);
            t_FieldVector3D::initialize(module);
            t_Line::initialize(module);
            t_OutlineExtractor::initialize(module);
            t_Plane::initialize(module);
            t_PolyhedronsSet::initialize(module);
            t_PolyhedronsSet$BRep::initialize(module);
            t_Rotation::initialize(module);
            t_RotationConvention::initialize(module);
            t_RotationOrder::initialize(module);
            t_Segment::initialize(module);
            t_SphereGenerator::initialize(module);
            t_SphericalCoordinates::initialize(module);
            t_SubLine::initialize(module);
            t_SubPlane::initialize(module);
            t_Vector3D::initialize(module);
            t_Vector3DFormat::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/geometry/euclidean/twod/DiskGenerator.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2DFormat.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          namespace hull {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.geometry.euclidean", "twod");

            t_DiskGenerator::install(module);
            t_Euclidean2D::install(module);
            t_FieldVector2D::install(module);
            t_Line::install(module);
            t_PolygonsSet::install(module);
            t_Segment::install(module);
            t_SubLine::install(module);
            t_Vector2D::install(module);
            t_Vector2DFormat::install(module);
            hull::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.geometry.euclidean", "twod");

            t_DiskGenerator::initialize(module);
            t_Euclidean2D::initialize(module);
            t_FieldVector2D::initialize(module);
            t_Line::initialize(module);
            t_PolygonsSet::initialize(module);
            t_Segment::initialize(module);
            t_SubLine::initialize(module);
            t_Vector2D::initialize(module);
            t_Vector2DFormat::initialize(module);
            hull::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/geometry/euclidean/twod/hull/AbstractConvexHullGenerator2D.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/AklToussaintHeuristic.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/MonotoneChain.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.hipparchus.geometry.euclidean.twod", "hull");

              t_AbstractConvexHullGenerator2D::install(module);
              t_AklToussaintHeuristic::install(module);
              t_ConvexHull2D::install(module);
              t_ConvexHullGenerator2D::install(module);
              t_MonotoneChain::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.hipparchus.geometry.euclidean.twod", "hull");

              t_AbstractConvexHullGenerator2D::initialize(module);
              t_AklToussaintHeuristic::initialize(module);
              t_ConvexHull2D::initialize(module);
              t_ConvexHullGenerator2D::initialize(module);
              t_MonotoneChain::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "org/hipparchus/geometry/hull/ConvexHullGenerator.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.geometry", "hull");

          t_ConvexHull::install(module);
          t_ConvexHullGenerator::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.geometry", "hull");

          t_ConvexHull::initialize(module);
          t_ConvexHullGenerator::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"
#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$LeafMerger.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "org/hipparchus/geometry/partitioning/BoundaryAttribute.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/NodesSet.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/partitioning/RegionFactory.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.geometry", "partitioning");

          t_AbstractRegion::install(module);
          t_AbstractSubHyperplane::install(module);
          t_BSPTree::install(module);
          t_BSPTree$LeafMerger::install(module);
          t_BSPTree$VanishingCutHandler::install(module);
          t_BSPTreeVisitor::install(module);
          t_BSPTreeVisitor$Order::install(module);
          t_BoundaryAttribute::install(module);
          t_BoundaryProjection::install(module);
          t_Embedding::install(module);
          t_Hyperplane::install(module);
          t_NodesSet::install(module);
          t_Region::install(module);
          t_Region$Location::install(module);
          t_RegionFactory::install(module);
          t_Side::install(module);
          t_SubHyperplane::install(module);
          t_SubHyperplane$SplitSubHyperplane::install(module);
          t_Transform::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.geometry", "partitioning");

          t_AbstractRegion::initialize(module);
          t_AbstractSubHyperplane::initialize(module);
          t_BSPTree::initialize(module);
          t_BSPTree$LeafMerger::initialize(module);
          t_BSPTree$VanishingCutHandler::initialize(module);
          t_BSPTreeVisitor::initialize(module);
          t_BSPTreeVisitor$Order::initialize(module);
          t_BoundaryAttribute::initialize(module);
          t_BoundaryProjection::initialize(module);
          t_Embedding::initialize(module);
          t_Hyperplane::initialize(module);
          t_NodesSet::initialize(module);
          t_Region::initialize(module);
          t_Region$Location::initialize(module);
          t_RegionFactory::initialize(module);
          t_Side::initialize(module);
          t_SubHyperplane::initialize(module);
          t_SubHyperplane$SplitSubHyperplane::initialize(module);
          t_Transform::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {

        namespace oned {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace twod {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.geometry", "spherical");

          oned::__install__(module);
          twod::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.geometry", "spherical");

          oned::__initialize__(module);
          twod::__initialize__(module);
        }
      }
    }
  }
}

#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$Split.h"
#include "org/hipparchus/geometry/spherical/oned/LimitAngle.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException.h"
#include "org/hipparchus/geometry/spherical/oned/SubLimitAngle.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.geometry.spherical", "oned");

            t_Arc::install(module);
            t_ArcsSet::install(module);
            t_ArcsSet$InconsistentStateAt2PiWrapping::install(module);
            t_ArcsSet$Split::install(module);
            t_LimitAngle::install(module);
            t_S1Point::install(module);
            t_Sphere1D::install(module);
            t_Sphere1D$NoSubSpaceException::install(module);
            t_SubLimitAngle::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.geometry.spherical", "oned");

            t_Arc::initialize(module);
            t_ArcsSet::initialize(module);
            t_ArcsSet$InconsistentStateAt2PiWrapping::initialize(module);
            t_ArcsSet$Split::initialize(module);
            t_LimitAngle::initialize(module);
            t_S1Point::initialize(module);
            t_Sphere1D::initialize(module);
            t_Sphere1D$NoSubSpaceException::initialize(module);
            t_SubLimitAngle::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "org/hipparchus/geometry/spherical/twod/Edge.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/geometry/spherical/twod/SubCircle.h"
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.geometry.spherical", "twod");

            t_Circle::install(module);
            t_Edge::install(module);
            t_S2Point::install(module);
            t_Sphere2D::install(module);
            t_SphericalPolygonsSet::install(module);
            t_SubCircle::install(module);
            t_Vertex::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.geometry.spherical", "twod");

            t_Circle::initialize(module);
            t_Edge::initialize(module);
            t_S2Point::initialize(module);
            t_Sphere2D::initialize(module);
            t_SphericalPolygonsSet::initialize(module);
            t_SubCircle::initialize(module);
            t_Vertex::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/linear/AbstractFieldMatrix.h"
#include "org/hipparchus/linear/AbstractRealMatrix.h"
#include "org/hipparchus/linear/AnyMatrix.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/linear/ArrayFieldVector.h"
#include "org/hipparchus/linear/ArrayRealVector.h"
#include "org/hipparchus/linear/BlockFieldMatrix.h"
#include "org/hipparchus/linear/BlockRealMatrix.h"
#include "org/hipparchus/linear/CholeskyDecomposer.h"
#include "org/hipparchus/linear/CholeskyDecomposition.h"
#include "org/hipparchus/linear/ComplexEigenDecomposition.h"
#include "org/hipparchus/linear/ConjugateGradient.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/DefaultFieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/DefaultFieldMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/DefaultIterativeLinearSolverEvent.h"
#include "org/hipparchus/linear/DefaultRealMatrixChangingVisitor.h"
#include "org/hipparchus/linear/DefaultRealMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "org/hipparchus/linear/EigenDecompositionNonSymmetric.h"
#include "org/hipparchus/linear/EigenDecompositionSymmetric.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "org/hipparchus/linear/FieldLUDecomposer.h"
#include "org/hipparchus/linear/FieldLUDecomposition.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/FieldQRDecomposer.h"
#include "org/hipparchus/linear/FieldQRDecomposition.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "org/hipparchus/linear/HessenbergTransformer.h"
#include "org/hipparchus/linear/IterativeLinearSolver.h"
#include "org/hipparchus/linear/IterativeLinearSolverEvent.h"
#include "org/hipparchus/linear/JacobiPreconditioner.h"
#include "org/hipparchus/linear/LUDecomposer.h"
#include "org/hipparchus/linear/LUDecomposition.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/linear/MatrixUtils.h"
#include "org/hipparchus/linear/OpenMapRealMatrix.h"
#include "org/hipparchus/linear/OpenMapRealVector.h"
#include "org/hipparchus/linear/OrderedComplexEigenDecomposition.h"
#include "org/hipparchus/linear/PreconditionedIterativeLinearSolver.h"
#include "org/hipparchus/linear/QRDecomposer.h"
#include "org/hipparchus/linear/QRDecomposition.h"
#include "org/hipparchus/linear/RRQRDecomposition.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "org/hipparchus/linear/RealVectorFormat.h"
#include "org/hipparchus/linear/RealVectorPreservingVisitor.h"
#include "org/hipparchus/linear/RectangularCholeskyDecomposition.h"
#include "org/hipparchus/linear/RiccatiEquationSolver.h"
#include "org/hipparchus/linear/RiccatiEquationSolverImpl.h"
#include "org/hipparchus/linear/SchurTransformer.h"
#include "org/hipparchus/linear/SemiDefinitePositiveCholeskyDecomposition.h"
#include "org/hipparchus/linear/SingularValueDecomposer.h"
#include "org/hipparchus/linear/SingularValueDecomposition.h"
#include "org/hipparchus/linear/SparseFieldMatrix.h"
#include "org/hipparchus/linear/SparseFieldVector.h"
#include "org/hipparchus/linear/SparseRealMatrix.h"
#include "org/hipparchus/linear/SparseRealVector.h"
#include "org/hipparchus/linear/SymmLQ.h"

namespace org {
  namespace hipparchus {
    namespace linear {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "linear");

        t_AbstractFieldMatrix::install(module);
        t_AbstractRealMatrix::install(module);
        t_AnyMatrix::install(module);
        t_Array2DRowFieldMatrix::install(module);
        t_Array2DRowRealMatrix::install(module);
        t_ArrayFieldVector::install(module);
        t_ArrayRealVector::install(module);
        t_BlockFieldMatrix::install(module);
        t_BlockRealMatrix::install(module);
        t_CholeskyDecomposer::install(module);
        t_CholeskyDecomposition::install(module);
        t_ComplexEigenDecomposition::install(module);
        t_ConjugateGradient::install(module);
        t_DecompositionSolver::install(module);
        t_DefaultFieldMatrixChangingVisitor::install(module);
        t_DefaultFieldMatrixPreservingVisitor::install(module);
        t_DefaultIterativeLinearSolverEvent::install(module);
        t_DefaultRealMatrixChangingVisitor::install(module);
        t_DefaultRealMatrixPreservingVisitor::install(module);
        t_DependentVectorsHandler::install(module);
        t_DiagonalMatrix::install(module);
        t_EigenDecompositionNonSymmetric::install(module);
        t_EigenDecompositionSymmetric::install(module);
        t_FieldDecompositionSolver::install(module);
        t_FieldLUDecomposer::install(module);
        t_FieldLUDecomposition::install(module);
        t_FieldMatrix::install(module);
        t_FieldMatrixChangingVisitor::install(module);
        t_FieldMatrixDecomposer::install(module);
        t_FieldMatrixPreservingVisitor::install(module);
        t_FieldQRDecomposer::install(module);
        t_FieldQRDecomposition::install(module);
        t_FieldVector::install(module);
        t_FieldVectorChangingVisitor::install(module);
        t_FieldVectorPreservingVisitor::install(module);
        t_HessenbergTransformer::install(module);
        t_IterativeLinearSolver::install(module);
        t_IterativeLinearSolverEvent::install(module);
        t_JacobiPreconditioner::install(module);
        t_LUDecomposer::install(module);
        t_LUDecomposition::install(module);
        t_MatrixDecomposer::install(module);
        t_MatrixUtils::install(module);
        t_OpenMapRealMatrix::install(module);
        t_OpenMapRealVector::install(module);
        t_OrderedComplexEigenDecomposition::install(module);
        t_PreconditionedIterativeLinearSolver::install(module);
        t_QRDecomposer::install(module);
        t_QRDecomposition::install(module);
        t_RRQRDecomposition::install(module);
        t_RealLinearOperator::install(module);
        t_RealMatrix::install(module);
        t_RealMatrixChangingVisitor::install(module);
        t_RealMatrixFormat::install(module);
        t_RealMatrixPreservingVisitor::install(module);
        t_RealVector::install(module);
        t_RealVector$Entry::install(module);
        t_RealVectorChangingVisitor::install(module);
        t_RealVectorFormat::install(module);
        t_RealVectorPreservingVisitor::install(module);
        t_RectangularCholeskyDecomposition::install(module);
        t_RiccatiEquationSolver::install(module);
        t_RiccatiEquationSolverImpl::install(module);
        t_SchurTransformer::install(module);
        t_SemiDefinitePositiveCholeskyDecomposition::install(module);
        t_SingularValueDecomposer::install(module);
        t_SingularValueDecomposition::install(module);
        t_SparseFieldMatrix::install(module);
        t_SparseFieldVector::install(module);
        t_SparseRealMatrix::install(module);
        t_SparseRealVector::install(module);
        t_SymmLQ::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "linear");

        t_AbstractFieldMatrix::initialize(module);
        t_AbstractRealMatrix::initialize(module);
        t_AnyMatrix::initialize(module);
        t_Array2DRowFieldMatrix::initialize(module);
        t_Array2DRowRealMatrix::initialize(module);
        t_ArrayFieldVector::initialize(module);
        t_ArrayRealVector::initialize(module);
        t_BlockFieldMatrix::initialize(module);
        t_BlockRealMatrix::initialize(module);
        t_CholeskyDecomposer::initialize(module);
        t_CholeskyDecomposition::initialize(module);
        t_ComplexEigenDecomposition::initialize(module);
        t_ConjugateGradient::initialize(module);
        t_DecompositionSolver::initialize(module);
        t_DefaultFieldMatrixChangingVisitor::initialize(module);
        t_DefaultFieldMatrixPreservingVisitor::initialize(module);
        t_DefaultIterativeLinearSolverEvent::initialize(module);
        t_DefaultRealMatrixChangingVisitor::initialize(module);
        t_DefaultRealMatrixPreservingVisitor::initialize(module);
        t_DependentVectorsHandler::initialize(module);
        t_DiagonalMatrix::initialize(module);
        t_EigenDecompositionNonSymmetric::initialize(module);
        t_EigenDecompositionSymmetric::initialize(module);
        t_FieldDecompositionSolver::initialize(module);
        t_FieldLUDecomposer::initialize(module);
        t_FieldLUDecomposition::initialize(module);
        t_FieldMatrix::initialize(module);
        t_FieldMatrixChangingVisitor::initialize(module);
        t_FieldMatrixDecomposer::initialize(module);
        t_FieldMatrixPreservingVisitor::initialize(module);
        t_FieldQRDecomposer::initialize(module);
        t_FieldQRDecomposition::initialize(module);
        t_FieldVector::initialize(module);
        t_FieldVectorChangingVisitor::initialize(module);
        t_FieldVectorPreservingVisitor::initialize(module);
        t_HessenbergTransformer::initialize(module);
        t_IterativeLinearSolver::initialize(module);
        t_IterativeLinearSolverEvent::initialize(module);
        t_JacobiPreconditioner::initialize(module);
        t_LUDecomposer::initialize(module);
        t_LUDecomposition::initialize(module);
        t_MatrixDecomposer::initialize(module);
        t_MatrixUtils::initialize(module);
        t_OpenMapRealMatrix::initialize(module);
        t_OpenMapRealVector::initialize(module);
        t_OrderedComplexEigenDecomposition::initialize(module);
        t_PreconditionedIterativeLinearSolver::initialize(module);
        t_QRDecomposer::initialize(module);
        t_QRDecomposition::initialize(module);
        t_RRQRDecomposition::initialize(module);
        t_RealLinearOperator::initialize(module);
        t_RealMatrix::initialize(module);
        t_RealMatrixChangingVisitor::initialize(module);
        t_RealMatrixFormat::initialize(module);
        t_RealMatrixPreservingVisitor::initialize(module);
        t_RealVector::initialize(module);
        t_RealVector$Entry::initialize(module);
        t_RealVectorChangingVisitor::initialize(module);
        t_RealVectorFormat::initialize(module);
        t_RealVectorPreservingVisitor::initialize(module);
        t_RectangularCholeskyDecomposition::initialize(module);
        t_RiccatiEquationSolver::initialize(module);
        t_RiccatiEquationSolverImpl::initialize(module);
        t_SchurTransformer::initialize(module);
        t_SemiDefinitePositiveCholeskyDecomposition::initialize(module);
        t_SingularValueDecomposer::initialize(module);
        t_SingularValueDecomposition::initialize(module);
        t_SparseFieldMatrix::initialize(module);
        t_SparseFieldVector::initialize(module);
        t_SparseRealMatrix::initialize(module);
        t_SparseRealVector::initialize(module);
        t_SymmLQ::initialize(module);
      }
    }
  }
}

#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/hipparchus/ode/AbstractParameterizable.h"
#include "org/hipparchus/ode/ComplexODEConverter.h"
#include "org/hipparchus/ode/ComplexODEState.h"
#include "org/hipparchus/ode/ComplexODEStateAndDerivative.h"
#include "org/hipparchus/ode/ComplexOrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ComplexSecondaryODE.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "org/hipparchus/ode/EquationsMapper.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/FieldSecondaryODE.h"
#include "org/hipparchus/ode/FirstOrderConverter.h"
#include "org/hipparchus/ode/LocalizedODEFormats.h"
#include "org/hipparchus/ode/MultistepFieldIntegrator.h"
#include "org/hipparchus/ode/MultistepIntegrator.h"
#include "org/hipparchus/ode/NamedParameterJacobianProvider.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/hipparchus/ode/ODEJacobiansProvider.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ParameterConfiguration.h"
#include "org/hipparchus/ode/Parameterizable.h"
#include "org/hipparchus/ode/ParametersController.h"
#include "org/hipparchus/ode/SecondOrderODE.h"
#include "org/hipparchus/ode/SecondaryODE.h"
#include "org/hipparchus/ode/VariationalEquation.h"
#include "org/hipparchus/ode/VariationalEquation$MismatchedEquations.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      namespace events {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace nonstiff {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace sampling {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "ode");

        t_AbstractFieldIntegrator::install(module);
        t_AbstractIntegrator::install(module);
        t_AbstractParameterizable::install(module);
        t_ComplexODEConverter::install(module);
        t_ComplexODEState::install(module);
        t_ComplexODEStateAndDerivative::install(module);
        t_ComplexOrdinaryDifferentialEquation::install(module);
        t_ComplexSecondaryODE::install(module);
        t_DenseOutputModel::install(module);
        t_EquationsMapper::install(module);
        t_ExpandableODE::install(module);
        t_FieldDenseOutputModel::install(module);
        t_FieldEquationsMapper::install(module);
        t_FieldExpandableODE::install(module);
        t_FieldODEIntegrator::install(module);
        t_FieldODEState::install(module);
        t_FieldODEStateAndDerivative::install(module);
        t_FieldOrdinaryDifferentialEquation::install(module);
        t_FieldSecondaryODE::install(module);
        t_FirstOrderConverter::install(module);
        t_LocalizedODEFormats::install(module);
        t_MultistepFieldIntegrator::install(module);
        t_MultistepIntegrator::install(module);
        t_NamedParameterJacobianProvider::install(module);
        t_ODEIntegrator::install(module);
        t_ODEJacobiansProvider::install(module);
        t_ODEState::install(module);
        t_ODEStateAndDerivative::install(module);
        t_OrdinaryDifferentialEquation::install(module);
        t_ParameterConfiguration::install(module);
        t_Parameterizable::install(module);
        t_ParametersController::install(module);
        t_SecondOrderODE::install(module);
        t_SecondaryODE::install(module);
        t_VariationalEquation::install(module);
        t_VariationalEquation$MismatchedEquations::install(module);
        events::__install__(module);
        nonstiff::__install__(module);
        sampling::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "ode");

        t_AbstractFieldIntegrator::initialize(module);
        t_AbstractIntegrator::initialize(module);
        t_AbstractParameterizable::initialize(module);
        t_ComplexODEConverter::initialize(module);
        t_ComplexODEState::initialize(module);
        t_ComplexODEStateAndDerivative::initialize(module);
        t_ComplexOrdinaryDifferentialEquation::initialize(module);
        t_ComplexSecondaryODE::initialize(module);
        t_DenseOutputModel::initialize(module);
        t_EquationsMapper::initialize(module);
        t_ExpandableODE::initialize(module);
        t_FieldDenseOutputModel::initialize(module);
        t_FieldEquationsMapper::initialize(module);
        t_FieldExpandableODE::initialize(module);
        t_FieldODEIntegrator::initialize(module);
        t_FieldODEState::initialize(module);
        t_FieldODEStateAndDerivative::initialize(module);
        t_FieldOrdinaryDifferentialEquation::initialize(module);
        t_FieldSecondaryODE::initialize(module);
        t_FirstOrderConverter::initialize(module);
        t_LocalizedODEFormats::initialize(module);
        t_MultistepFieldIntegrator::initialize(module);
        t_MultistepIntegrator::initialize(module);
        t_NamedParameterJacobianProvider::initialize(module);
        t_ODEIntegrator::initialize(module);
        t_ODEJacobiansProvider::initialize(module);
        t_ODEState::initialize(module);
        t_ODEStateAndDerivative::initialize(module);
        t_OrdinaryDifferentialEquation::initialize(module);
        t_ParameterConfiguration::initialize(module);
        t_Parameterizable::initialize(module);
        t_ParametersController::initialize(module);
        t_SecondOrderODE::initialize(module);
        t_SecondaryODE::initialize(module);
        t_VariationalEquation::initialize(module);
        t_VariationalEquation$MismatchedEquations::initialize(module);
        events::__initialize__(module);
        nonstiff::__initialize__(module);
        sampling::__initialize__(module);
      }
    }
  }
}

#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"
#include "org/hipparchus/ode/events/AbstractODEDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "org/hipparchus/ode/events/DetectorBasedEventState.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/events/EventSlopeFilter.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "org/hipparchus/ode/events/FieldDetectorBasedEventState.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "org/hipparchus/ode/events/FieldEventSlopeFilter.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/ode/events/FieldStepEndEventState.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/ode/events/StepEndEventState.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.ode", "events");

          t_AbstractFieldODEDetector::install(module);
          t_AbstractODEDetector::install(module);
          t_Action::install(module);
          t_AdaptableInterval::install(module);
          t_DetectorBasedEventState::install(module);
          t_EventOccurrence::install(module);
          t_EventSlopeFilter::install(module);
          t_EventState::install(module);
          t_FieldAdaptableInterval::install(module);
          t_FieldDetectorBasedEventState::install(module);
          t_FieldEventOccurrence::install(module);
          t_FieldEventSlopeFilter::install(module);
          t_FieldEventState::install(module);
          t_FieldODEEventDetector::install(module);
          t_FieldODEEventHandler::install(module);
          t_FieldODEStepEndHandler::install(module);
          t_FieldStepEndEventState::install(module);
          t_FilterType::install(module);
          t_ODEEventDetector::install(module);
          t_ODEEventHandler::install(module);
          t_ODEStepEndHandler::install(module);
          t_StepEndEventState::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.ode", "events");

          t_AbstractFieldODEDetector::initialize(module);
          t_AbstractODEDetector::initialize(module);
          t_Action::initialize(module);
          t_AdaptableInterval::initialize(module);
          t_DetectorBasedEventState::initialize(module);
          t_EventOccurrence::initialize(module);
          t_EventSlopeFilter::initialize(module);
          t_EventState::initialize(module);
          t_FieldAdaptableInterval::initialize(module);
          t_FieldDetectorBasedEventState::initialize(module);
          t_FieldEventOccurrence::initialize(module);
          t_FieldEventSlopeFilter::initialize(module);
          t_FieldEventState::initialize(module);
          t_FieldODEEventDetector::initialize(module);
          t_FieldODEEventHandler::initialize(module);
          t_FieldODEStepEndHandler::initialize(module);
          t_FieldStepEndEventState::initialize(module);
          t_FilterType::initialize(module);
          t_ODEEventDetector::initialize(module);
          t_ODEEventHandler::initialize(module);
          t_ODEStepEndHandler::initialize(module);
          t_StepEndEventState::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/ode/nonstiff/AdamsBashforthFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/AdamsBashforthIntegrator.h"
#include "org/hipparchus/ode/nonstiff/AdamsFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/AdamsIntegrator.h"
#include "org/hipparchus/ode/nonstiff/AdamsMoultonFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/AdamsMoultonIntegrator.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer.h"
#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/AdaptiveStepsizeIntegrator.h"
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince54FieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince54Integrator.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince853FieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince853Integrator.h"
#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaIntegrator.h"
#include "org/hipparchus/ode/nonstiff/EulerFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/EulerIntegrator.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "org/hipparchus/ode/nonstiff/GillFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/GillIntegrator.h"
#include "org/hipparchus/ode/nonstiff/GraggBulirschStoerIntegrator.h"
#include "org/hipparchus/ode/nonstiff/HighamHall54FieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/HighamHall54Integrator.h"
#include "org/hipparchus/ode/nonstiff/LutherFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/LutherIntegrator.h"
#include "org/hipparchus/ode/nonstiff/MidpointFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/MidpointIntegrator.h"
#include "org/hipparchus/ode/nonstiff/RungeKuttaFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/RungeKuttaIntegrator.h"
#include "org/hipparchus/ode/nonstiff/StepsizeHelper.h"
#include "org/hipparchus/ode/nonstiff/ThreeEighthesFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/ThreeEighthesIntegrator.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.ode", "nonstiff");

          t_AdamsBashforthFieldIntegrator::install(module);
          t_AdamsBashforthIntegrator::install(module);
          t_AdamsFieldIntegrator::install(module);
          t_AdamsIntegrator::install(module);
          t_AdamsMoultonFieldIntegrator::install(module);
          t_AdamsMoultonIntegrator::install(module);
          t_AdamsNordsieckFieldTransformer::install(module);
          t_AdamsNordsieckTransformer::install(module);
          t_AdaptiveStepsizeFieldIntegrator::install(module);
          t_AdaptiveStepsizeIntegrator::install(module);
          t_ButcherArrayProvider::install(module);
          t_ClassicalRungeKuttaFieldIntegrator::install(module);
          t_ClassicalRungeKuttaIntegrator::install(module);
          t_DormandPrince54FieldIntegrator::install(module);
          t_DormandPrince54Integrator::install(module);
          t_DormandPrince853FieldIntegrator::install(module);
          t_DormandPrince853Integrator::install(module);
          t_EmbeddedRungeKuttaFieldIntegrator::install(module);
          t_EmbeddedRungeKuttaIntegrator::install(module);
          t_EulerFieldIntegrator::install(module);
          t_EulerIntegrator::install(module);
          t_FieldButcherArrayProvider::install(module);
          t_GillFieldIntegrator::install(module);
          t_GillIntegrator::install(module);
          t_GraggBulirschStoerIntegrator::install(module);
          t_HighamHall54FieldIntegrator::install(module);
          t_HighamHall54Integrator::install(module);
          t_LutherFieldIntegrator::install(module);
          t_LutherIntegrator::install(module);
          t_MidpointFieldIntegrator::install(module);
          t_MidpointIntegrator::install(module);
          t_RungeKuttaFieldIntegrator::install(module);
          t_RungeKuttaIntegrator::install(module);
          t_StepsizeHelper::install(module);
          t_ThreeEighthesFieldIntegrator::install(module);
          t_ThreeEighthesIntegrator::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.ode", "nonstiff");

          t_AdamsBashforthFieldIntegrator::initialize(module);
          t_AdamsBashforthIntegrator::initialize(module);
          t_AdamsFieldIntegrator::initialize(module);
          t_AdamsIntegrator::initialize(module);
          t_AdamsMoultonFieldIntegrator::initialize(module);
          t_AdamsMoultonIntegrator::initialize(module);
          t_AdamsNordsieckFieldTransformer::initialize(module);
          t_AdamsNordsieckTransformer::initialize(module);
          t_AdaptiveStepsizeFieldIntegrator::initialize(module);
          t_AdaptiveStepsizeIntegrator::initialize(module);
          t_ButcherArrayProvider::initialize(module);
          t_ClassicalRungeKuttaFieldIntegrator::initialize(module);
          t_ClassicalRungeKuttaIntegrator::initialize(module);
          t_DormandPrince54FieldIntegrator::initialize(module);
          t_DormandPrince54Integrator::initialize(module);
          t_DormandPrince853FieldIntegrator::initialize(module);
          t_DormandPrince853Integrator::initialize(module);
          t_EmbeddedRungeKuttaFieldIntegrator::initialize(module);
          t_EmbeddedRungeKuttaIntegrator::initialize(module);
          t_EulerFieldIntegrator::initialize(module);
          t_EulerIntegrator::initialize(module);
          t_FieldButcherArrayProvider::initialize(module);
          t_GillFieldIntegrator::initialize(module);
          t_GillIntegrator::initialize(module);
          t_GraggBulirschStoerIntegrator::initialize(module);
          t_HighamHall54FieldIntegrator::initialize(module);
          t_HighamHall54Integrator::initialize(module);
          t_LutherFieldIntegrator::initialize(module);
          t_LutherIntegrator::initialize(module);
          t_MidpointFieldIntegrator::initialize(module);
          t_MidpointIntegrator::initialize(module);
          t_RungeKuttaFieldIntegrator::initialize(module);
          t_RungeKuttaIntegrator::initialize(module);
          t_StepsizeHelper::initialize(module);
          t_ThreeEighthesFieldIntegrator::initialize(module);
          t_ThreeEighthesIntegrator::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/AbstractODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/FieldODEFixedStepHandler.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/ode/sampling/FieldStepNormalizer.h"
#include "org/hipparchus/ode/sampling/ODEFixedStepHandler.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/sampling/StepNormalizer.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.ode", "sampling");

          t_AbstractFieldODEStateInterpolator::install(module);
          t_AbstractODEStateInterpolator::install(module);
          t_FieldODEFixedStepHandler::install(module);
          t_FieldODEStateInterpolator::install(module);
          t_FieldODEStepHandler::install(module);
          t_FieldStepNormalizer::install(module);
          t_ODEFixedStepHandler::install(module);
          t_ODEStateInterpolator::install(module);
          t_ODEStepHandler::install(module);
          t_StepNormalizer::install(module);
          t_StepNormalizerBounds::install(module);
          t_StepNormalizerMode::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.ode", "sampling");

          t_AbstractFieldODEStateInterpolator::initialize(module);
          t_AbstractODEStateInterpolator::initialize(module);
          t_FieldODEFixedStepHandler::initialize(module);
          t_FieldODEStateInterpolator::initialize(module);
          t_FieldODEStepHandler::initialize(module);
          t_FieldStepNormalizer::initialize(module);
          t_ODEFixedStepHandler::initialize(module);
          t_ODEStateInterpolator::initialize(module);
          t_ODEStepHandler::initialize(module);
          t_StepNormalizer::initialize(module);
          t_StepNormalizerBounds::initialize(module);
          t_StepNormalizerMode::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/optim/AbstractConvergenceChecker.h"
#include "org/hipparchus/optim/AbstractOptimizationProblem.h"
#include "org/hipparchus/optim/BaseMultiStartMultivariateOptimizer.h"
#include "org/hipparchus/optim/BaseMultivariateOptimizer.h"
#include "org/hipparchus/optim/BaseOptimizer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/ConvergenceCheckerAndMultiplexer.h"
#include "org/hipparchus/optim/ConvergenceCheckerOrMultiplexer.h"
#include "org/hipparchus/optim/InitialGuess.h"
#include "org/hipparchus/optim/LocalizedOptimFormats.h"
#include "org/hipparchus/optim/MaxEval.h"
#include "org/hipparchus/optim/MaxIter.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/OptimizationProblem.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "org/hipparchus/optim/SimpleBounds.h"
#include "org/hipparchus/optim/SimplePointChecker.h"
#include "org/hipparchus/optim/SimpleValueChecker.h"
#include "org/hipparchus/optim/SimpleVectorValueChecker.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      namespace linear {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace nonlinear {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace univariate {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "optim");

        t_AbstractConvergenceChecker::install(module);
        t_AbstractOptimizationProblem::install(module);
        t_BaseMultiStartMultivariateOptimizer::install(module);
        t_BaseMultivariateOptimizer::install(module);
        t_BaseOptimizer::install(module);
        t_ConvergenceChecker::install(module);
        t_ConvergenceCheckerAndMultiplexer::install(module);
        t_ConvergenceCheckerOrMultiplexer::install(module);
        t_InitialGuess::install(module);
        t_LocalizedOptimFormats::install(module);
        t_MaxEval::install(module);
        t_MaxIter::install(module);
        t_OptimizationData::install(module);
        t_OptimizationProblem::install(module);
        t_PointValuePair::install(module);
        t_PointVectorValuePair::install(module);
        t_SimpleBounds::install(module);
        t_SimplePointChecker::install(module);
        t_SimpleValueChecker::install(module);
        t_SimpleVectorValueChecker::install(module);
        linear::__install__(module);
        nonlinear::__install__(module);
        univariate::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "optim");

        t_AbstractConvergenceChecker::initialize(module);
        t_AbstractOptimizationProblem::initialize(module);
        t_BaseMultiStartMultivariateOptimizer::initialize(module);
        t_BaseMultivariateOptimizer::initialize(module);
        t_BaseOptimizer::initialize(module);
        t_ConvergenceChecker::initialize(module);
        t_ConvergenceCheckerAndMultiplexer::initialize(module);
        t_ConvergenceCheckerOrMultiplexer::initialize(module);
        t_InitialGuess::initialize(module);
        t_LocalizedOptimFormats::initialize(module);
        t_MaxEval::initialize(module);
        t_MaxIter::initialize(module);
        t_OptimizationData::initialize(module);
        t_OptimizationProblem::initialize(module);
        t_PointValuePair::initialize(module);
        t_PointVectorValuePair::initialize(module);
        t_SimpleBounds::initialize(module);
        t_SimplePointChecker::initialize(module);
        t_SimpleValueChecker::initialize(module);
        t_SimpleVectorValueChecker::initialize(module);
        linear::__initialize__(module);
        nonlinear::__initialize__(module);
        univariate::__initialize__(module);
      }
    }
  }
}

#include "org/hipparchus/optim/linear/LinearConstraint.h"
#include "org/hipparchus/optim/linear/LinearConstraintSet.h"
#include "org/hipparchus/optim/linear/LinearObjectiveFunction.h"
#include "org/hipparchus/optim/linear/LinearOptimizer.h"
#include "org/hipparchus/optim/linear/NonNegativeConstraint.h"
#include "org/hipparchus/optim/linear/PivotSelectionRule.h"
#include "org/hipparchus/optim/linear/Relationship.h"
#include "org/hipparchus/optim/linear/SimplexSolver.h"
#include "org/hipparchus/optim/linear/SolutionCallback.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.optim", "linear");

          t_LinearConstraint::install(module);
          t_LinearConstraintSet::install(module);
          t_LinearObjectiveFunction::install(module);
          t_LinearOptimizer::install(module);
          t_NonNegativeConstraint::install(module);
          t_PivotSelectionRule::install(module);
          t_Relationship::install(module);
          t_SimplexSolver::install(module);
          t_SolutionCallback::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.optim", "linear");

          t_LinearConstraint::initialize(module);
          t_LinearConstraintSet::initialize(module);
          t_LinearObjectiveFunction::initialize(module);
          t_LinearOptimizer::initialize(module);
          t_NonNegativeConstraint::initialize(module);
          t_PivotSelectionRule::initialize(module);
          t_Relationship::initialize(module);
          t_SimplexSolver::initialize(module);
          t_SolutionCallback::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {

        namespace scalar {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace vector {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.optim", "nonlinear");

          scalar::__install__(module);
          vector::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.optim", "nonlinear");

          scalar::__initialize__(module);
          vector::__initialize__(module);
        }
      }
    }
  }
}

#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "org/hipparchus/optim/nonlinear/scalar/GradientMultivariateOptimizer.h"
#include "org/hipparchus/optim/nonlinear/scalar/LeastSquaresConverter.h"
#include "org/hipparchus/optim/nonlinear/scalar/LineSearch.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultiStartMultivariateOptimizer.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionMappingAdapter.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionPenaltyAdapter.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "org/hipparchus/optim/nonlinear/scalar/ObjectiveFunction.h"
#include "org/hipparchus/optim/nonlinear/scalar/ObjectiveFunctionGradient.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          namespace gradient {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace noderiv {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.optim.nonlinear", "scalar");

            t_GoalType::install(module);
            t_GradientMultivariateOptimizer::install(module);
            t_LeastSquaresConverter::install(module);
            t_LineSearch::install(module);
            t_MultiStartMultivariateOptimizer::install(module);
            t_MultivariateFunctionMappingAdapter::install(module);
            t_MultivariateFunctionPenaltyAdapter::install(module);
            t_MultivariateOptimizer::install(module);
            t_ObjectiveFunction::install(module);
            t_ObjectiveFunctionGradient::install(module);
            gradient::__install__(module);
            noderiv::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.optim.nonlinear", "scalar");

            t_GoalType::initialize(module);
            t_GradientMultivariateOptimizer::initialize(module);
            t_LeastSquaresConverter::initialize(module);
            t_LineSearch::initialize(module);
            t_MultiStartMultivariateOptimizer::initialize(module);
            t_MultivariateFunctionMappingAdapter::initialize(module);
            t_MultivariateFunctionPenaltyAdapter::initialize(module);
            t_MultivariateOptimizer::initialize(module);
            t_ObjectiveFunction::initialize(module);
            t_ObjectiveFunctionGradient::initialize(module);
            gradient::__initialize__(module);
            noderiv::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.hipparchus.optim.nonlinear.scalar", "gradient");

              t_NonLinearConjugateGradientOptimizer::install(module);
              t_NonLinearConjugateGradientOptimizer$Formula::install(module);
              t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::install(module);
              t_Preconditioner::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.hipparchus.optim.nonlinear.scalar", "gradient");

              t_NonLinearConjugateGradientOptimizer::initialize(module);
              t_NonLinearConjugateGradientOptimizer$Formula::initialize(module);
              t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initialize(module);
              t_Preconditioner::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/hipparchus/optim/nonlinear/scalar/noderiv/AbstractSimplex.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/BOBYQAOptimizer.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/MultiDirectionalSimplex.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/NelderMeadSimplex.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/PowellOptimizer.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/SimplexOptimizer.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.hipparchus.optim.nonlinear.scalar", "noderiv");

              t_AbstractSimplex::install(module);
              t_BOBYQAOptimizer::install(module);
              t_CMAESOptimizer::install(module);
              t_CMAESOptimizer$PopulationSize::install(module);
              t_CMAESOptimizer$Sigma::install(module);
              t_MultiDirectionalSimplex::install(module);
              t_NelderMeadSimplex::install(module);
              t_PowellOptimizer::install(module);
              t_SimplexOptimizer::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.hipparchus.optim.nonlinear.scalar", "noderiv");

              t_AbstractSimplex::initialize(module);
              t_BOBYQAOptimizer::initialize(module);
              t_CMAESOptimizer::initialize(module);
              t_CMAESOptimizer$PopulationSize::initialize(module);
              t_CMAESOptimizer$Sigma::initialize(module);
              t_MultiDirectionalSimplex::initialize(module);
              t_NelderMeadSimplex::initialize(module);
              t_PowellOptimizer::initialize(module);
              t_SimplexOptimizer::initialize(module);
            }
          }
        }
      }
    }
  }
}


namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {

          namespace leastsquares {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.optim.nonlinear", "vector");

            leastsquares::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.optim.nonlinear", "vector");

            leastsquares::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/optim/nonlinear/vector/leastsquares/AbstractEvaluation.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/EvaluationRmsChecker.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/GaussNewtonOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresAdapter.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresFactory.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ValueAndJacobianFunction.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.hipparchus.optim.nonlinear.vector", "leastsquares");

              t_AbstractEvaluation::install(module);
              t_EvaluationRmsChecker::install(module);
              t_GaussNewtonOptimizer::install(module);
              t_LeastSquaresAdapter::install(module);
              t_LeastSquaresBuilder::install(module);
              t_LeastSquaresFactory::install(module);
              t_LeastSquaresOptimizer::install(module);
              t_LeastSquaresOptimizer$Optimum::install(module);
              t_LeastSquaresProblem::install(module);
              t_LeastSquaresProblem$Evaluation::install(module);
              t_LevenbergMarquardtOptimizer::install(module);
              t_MultivariateJacobianFunction::install(module);
              t_ParameterValidator::install(module);
              t_SequentialGaussNewtonOptimizer::install(module);
              t_ValueAndJacobianFunction::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.hipparchus.optim.nonlinear.vector", "leastsquares");

              t_AbstractEvaluation::initialize(module);
              t_EvaluationRmsChecker::initialize(module);
              t_GaussNewtonOptimizer::initialize(module);
              t_LeastSquaresAdapter::initialize(module);
              t_LeastSquaresBuilder::initialize(module);
              t_LeastSquaresFactory::initialize(module);
              t_LeastSquaresOptimizer::initialize(module);
              t_LeastSquaresOptimizer$Optimum::initialize(module);
              t_LeastSquaresProblem::initialize(module);
              t_LeastSquaresProblem$Evaluation::initialize(module);
              t_LevenbergMarquardtOptimizer::initialize(module);
              t_MultivariateJacobianFunction::initialize(module);
              t_ParameterValidator::initialize(module);
              t_SequentialGaussNewtonOptimizer::initialize(module);
              t_ValueAndJacobianFunction::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/hipparchus/optim/univariate/BracketFinder.h"
#include "org/hipparchus/optim/univariate/BrentOptimizer.h"
#include "org/hipparchus/optim/univariate/MultiStartUnivariateOptimizer.h"
#include "org/hipparchus/optim/univariate/SearchInterval.h"
#include "org/hipparchus/optim/univariate/SimpleUnivariateValueChecker.h"
#include "org/hipparchus/optim/univariate/UnivariateObjectiveFunction.h"
#include "org/hipparchus/optim/univariate/UnivariateOptimizer.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.optim", "univariate");

          t_BracketFinder::install(module);
          t_BrentOptimizer::install(module);
          t_MultiStartUnivariateOptimizer::install(module);
          t_SearchInterval::install(module);
          t_SimpleUnivariateValueChecker::install(module);
          t_UnivariateObjectiveFunction::install(module);
          t_UnivariateOptimizer::install(module);
          t_UnivariatePointValuePair::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.optim", "univariate");

          t_BracketFinder::initialize(module);
          t_BrentOptimizer::initialize(module);
          t_MultiStartUnivariateOptimizer::initialize(module);
          t_SearchInterval::initialize(module);
          t_SimpleUnivariateValueChecker::initialize(module);
          t_UnivariateObjectiveFunction::initialize(module);
          t_UnivariateOptimizer::initialize(module);
          t_UnivariatePointValuePair::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/random/AbstractWell.h"
#include "org/hipparchus/random/BaseRandomGenerator.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/hipparchus/random/ForwardingRandomGenerator.h"
#include "org/hipparchus/random/GaussianRandomGenerator.h"
#include "org/hipparchus/random/HaltonSequenceGenerator.h"
#include "org/hipparchus/random/ISAACRandom.h"
#include "org/hipparchus/random/IntRandomGenerator.h"
#include "org/hipparchus/random/JDKRandomGenerator.h"
#include "org/hipparchus/random/MersenneTwister.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/random/RandomAdaptor.h"
#include "org/hipparchus/random/RandomDataGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "org/hipparchus/random/SobolSequenceGenerator.h"
#include "org/hipparchus/random/StableRandomGenerator.h"
#include "org/hipparchus/random/SynchronizedRandomGenerator.h"
#include "org/hipparchus/random/UncorrelatedRandomVectorGenerator.h"
#include "org/hipparchus/random/UniformRandomGenerator.h"
#include "org/hipparchus/random/UnitSphereRandomVectorGenerator.h"
#include "org/hipparchus/random/Well1024a.h"
#include "org/hipparchus/random/Well19937a.h"
#include "org/hipparchus/random/Well19937c.h"
#include "org/hipparchus/random/Well44497a.h"
#include "org/hipparchus/random/Well44497b.h"
#include "org/hipparchus/random/Well512a.h"

namespace org {
  namespace hipparchus {
    namespace random {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "random");

        t_AbstractWell::install(module);
        t_BaseRandomGenerator::install(module);
        t_CorrelatedRandomVectorGenerator::install(module);
        t_ForwardingRandomGenerator::install(module);
        t_GaussianRandomGenerator::install(module);
        t_HaltonSequenceGenerator::install(module);
        t_ISAACRandom::install(module);
        t_IntRandomGenerator::install(module);
        t_JDKRandomGenerator::install(module);
        t_MersenneTwister::install(module);
        t_NormalizedRandomGenerator::install(module);
        t_RandomAdaptor::install(module);
        t_RandomDataGenerator::install(module);
        t_RandomGenerator::install(module);
        t_RandomVectorGenerator::install(module);
        t_SobolSequenceGenerator::install(module);
        t_StableRandomGenerator::install(module);
        t_SynchronizedRandomGenerator::install(module);
        t_UncorrelatedRandomVectorGenerator::install(module);
        t_UniformRandomGenerator::install(module);
        t_UnitSphereRandomVectorGenerator::install(module);
        t_Well1024a::install(module);
        t_Well19937a::install(module);
        t_Well19937c::install(module);
        t_Well44497a::install(module);
        t_Well44497b::install(module);
        t_Well512a::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "random");

        t_AbstractWell::initialize(module);
        t_BaseRandomGenerator::initialize(module);
        t_CorrelatedRandomVectorGenerator::initialize(module);
        t_ForwardingRandomGenerator::initialize(module);
        t_GaussianRandomGenerator::initialize(module);
        t_HaltonSequenceGenerator::initialize(module);
        t_ISAACRandom::initialize(module);
        t_IntRandomGenerator::initialize(module);
        t_JDKRandomGenerator::initialize(module);
        t_MersenneTwister::initialize(module);
        t_NormalizedRandomGenerator::initialize(module);
        t_RandomAdaptor::initialize(module);
        t_RandomDataGenerator::initialize(module);
        t_RandomGenerator::initialize(module);
        t_RandomVectorGenerator::initialize(module);
        t_SobolSequenceGenerator::initialize(module);
        t_StableRandomGenerator::initialize(module);
        t_SynchronizedRandomGenerator::initialize(module);
        t_UncorrelatedRandomVectorGenerator::initialize(module);
        t_UniformRandomGenerator::initialize(module);
        t_UnitSphereRandomVectorGenerator::initialize(module);
        t_Well1024a::initialize(module);
        t_Well19937a::initialize(module);
        t_Well19937c::initialize(module);
        t_Well44497a::initialize(module);
        t_Well44497b::initialize(module);
        t_Well512a::initialize(module);
      }
    }
  }
}

#include "org/hipparchus/special/BesselJ.h"
#include "org/hipparchus/special/BesselJ$BesselJResult.h"
#include "org/hipparchus/special/Beta.h"
#include "org/hipparchus/special/Erf.h"
#include "org/hipparchus/special/Gamma.h"

namespace org {
  namespace hipparchus {
    namespace special {

      namespace elliptic {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "special");

        t_BesselJ::install(module);
        t_BesselJ$BesselJResult::install(module);
        t_Beta::install(module);
        t_Erf::install(module);
        t_Gamma::install(module);
        elliptic::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "special");

        t_BesselJ::initialize(module);
        t_BesselJ$BesselJResult::initialize(module);
        t_Beta::initialize(module);
        t_Erf::initialize(module);
        t_Gamma::initialize(module);
        elliptic::__initialize__(module);
      }
    }
  }
}


namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {

        namespace carlson {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace jacobi {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace legendre {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.special", "elliptic");

          carlson::__install__(module);
          jacobi::__install__(module);
          legendre::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.special", "elliptic");

          carlson::__initialize__(module);
          jacobi::__initialize__(module);
          legendre::__initialize__(module);
        }
      }
    }
  }
}

#include "org/hipparchus/special/elliptic/carlson/CarlsonEllipticIntegral.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace carlson {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.special.elliptic", "carlson");

            t_CarlsonEllipticIntegral::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.special.elliptic", "carlson");

            t_CarlsonEllipticIntegral::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/special/elliptic/jacobi/CopolarC.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarD.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarN.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarS.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarC.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarD.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarN.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarS.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiTheta.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldTheta.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiElliptic.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiEllipticBuilder.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiTheta.h"
#include "org/hipparchus/special/elliptic/jacobi/Theta.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.special.elliptic", "jacobi");

            t_CopolarC::install(module);
            t_CopolarD::install(module);
            t_CopolarN::install(module);
            t_CopolarS::install(module);
            t_FieldCopolarC::install(module);
            t_FieldCopolarD::install(module);
            t_FieldCopolarN::install(module);
            t_FieldCopolarS::install(module);
            t_FieldJacobiElliptic::install(module);
            t_FieldJacobiTheta::install(module);
            t_FieldTheta::install(module);
            t_JacobiElliptic::install(module);
            t_JacobiEllipticBuilder::install(module);
            t_JacobiTheta::install(module);
            t_Theta::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.special.elliptic", "jacobi");

            t_CopolarC::initialize(module);
            t_CopolarD::initialize(module);
            t_CopolarN::initialize(module);
            t_CopolarS::initialize(module);
            t_FieldCopolarC::initialize(module);
            t_FieldCopolarD::initialize(module);
            t_FieldCopolarN::initialize(module);
            t_FieldCopolarS::initialize(module);
            t_FieldJacobiElliptic::initialize(module);
            t_FieldJacobiTheta::initialize(module);
            t_FieldTheta::initialize(module);
            t_JacobiElliptic::initialize(module);
            t_JacobiEllipticBuilder::initialize(module);
            t_JacobiTheta::initialize(module);
            t_Theta::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/special/elliptic/legendre/LegendreEllipticIntegral.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace legendre {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.special.elliptic", "legendre");

            t_LegendreEllipticIntegral::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.special.elliptic", "legendre");

            t_LegendreEllipticIntegral::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/stat/Frequency.h"
#include "org/hipparchus/stat/LocalizedStatFormats.h"
#include "org/hipparchus/stat/LongFrequency.h"
#include "org/hipparchus/stat/StatUtils.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      namespace correlation {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace descriptive {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace fitting {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace inference {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace interval {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace projection {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace ranking {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace regression {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "stat");

        t_Frequency::install(module);
        t_LocalizedStatFormats::install(module);
        t_LongFrequency::install(module);
        t_StatUtils::install(module);
        correlation::__install__(module);
        descriptive::__install__(module);
        fitting::__install__(module);
        inference::__install__(module);
        interval::__install__(module);
        projection::__install__(module);
        ranking::__install__(module);
        regression::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "stat");

        t_Frequency::initialize(module);
        t_LocalizedStatFormats::initialize(module);
        t_LongFrequency::initialize(module);
        t_StatUtils::initialize(module);
        correlation::__initialize__(module);
        descriptive::__initialize__(module);
        fitting::__initialize__(module);
        inference::__initialize__(module);
        interval::__initialize__(module);
        projection::__initialize__(module);
        ranking::__initialize__(module);
        regression::__initialize__(module);
      }
    }
  }
}

#include "org/hipparchus/stat/correlation/Covariance.h"
#include "org/hipparchus/stat/correlation/KendallsCorrelation.h"
#include "org/hipparchus/stat/correlation/PearsonsCorrelation.h"
#include "org/hipparchus/stat/correlation/SpearmansCorrelation.h"
#include "org/hipparchus/stat/correlation/StorelessCovariance.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "correlation");

          t_Covariance::install(module);
          t_KendallsCorrelation::install(module);
          t_PearsonsCorrelation::install(module);
          t_SpearmansCorrelation::install(module);
          t_StorelessCovariance::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "correlation");

          t_Covariance::initialize(module);
          t_KendallsCorrelation::initialize(module);
          t_PearsonsCorrelation::initialize(module);
          t_SpearmansCorrelation::initialize(module);
          t_StorelessCovariance::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/stat/descriptive/DescriptiveStatistics.h"
#include "org/hipparchus/stat/descriptive/MultivariateSummaryStatistics.h"
#include "org/hipparchus/stat/descriptive/StatisticalMultivariateSummary.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummaryValues.h"
#include "org/hipparchus/stat/descriptive/StorelessMultivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        namespace moment {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace rank {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace summary {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace vector {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "descriptive");

          t_AbstractStorelessUnivariateStatistic::install(module);
          t_AbstractUnivariateStatistic::install(module);
          t_AggregatableStatistic::install(module);
          t_DescriptiveStatistics::install(module);
          t_MultivariateSummaryStatistics::install(module);
          t_StatisticalMultivariateSummary::install(module);
          t_StatisticalSummary::install(module);
          t_StatisticalSummaryValues::install(module);
          t_StorelessMultivariateStatistic::install(module);
          t_StorelessUnivariateStatistic::install(module);
          t_StreamingStatistics::install(module);
          t_StreamingStatistics$StreamingStatisticsBuilder::install(module);
          t_UnivariateStatistic::install(module);
          t_WeightedEvaluation::install(module);
          moment::__install__(module);
          rank::__install__(module);
          summary::__install__(module);
          vector::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "descriptive");

          t_AbstractStorelessUnivariateStatistic::initialize(module);
          t_AbstractUnivariateStatistic::initialize(module);
          t_AggregatableStatistic::initialize(module);
          t_DescriptiveStatistics::initialize(module);
          t_MultivariateSummaryStatistics::initialize(module);
          t_StatisticalMultivariateSummary::initialize(module);
          t_StatisticalSummary::initialize(module);
          t_StatisticalSummaryValues::initialize(module);
          t_StorelessMultivariateStatistic::initialize(module);
          t_StorelessUnivariateStatistic::initialize(module);
          t_StreamingStatistics::initialize(module);
          t_StreamingStatistics$StreamingStatisticsBuilder::initialize(module);
          t_UnivariateStatistic::initialize(module);
          t_WeightedEvaluation::initialize(module);
          moment::__initialize__(module);
          rank::__initialize__(module);
          summary::__initialize__(module);
          vector::__initialize__(module);
        }
      }
    }
  }
}

#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "org/hipparchus/stat/descriptive/moment/GeometricMean.h"
#include "org/hipparchus/stat/descriptive/moment/Kurtosis.h"
#include "org/hipparchus/stat/descriptive/moment/Mean.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "org/hipparchus/stat/descriptive/moment/Skewness.h"
#include "org/hipparchus/stat/descriptive/moment/StandardDeviation.h"
#include "org/hipparchus/stat/descriptive/moment/Variance.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.stat.descriptive", "moment");

            t_FirstMoment::install(module);
            t_GeometricMean::install(module);
            t_Kurtosis::install(module);
            t_Mean::install(module);
            t_SecondMoment::install(module);
            t_SemiVariance::install(module);
            t_SemiVariance$Direction::install(module);
            t_Skewness::install(module);
            t_StandardDeviation::install(module);
            t_Variance::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.stat.descriptive", "moment");

            t_FirstMoment::initialize(module);
            t_GeometricMean::initialize(module);
            t_Kurtosis::initialize(module);
            t_Mean::initialize(module);
            t_SecondMoment::initialize(module);
            t_SemiVariance::initialize(module);
            t_SemiVariance$Direction::initialize(module);
            t_Skewness::initialize(module);
            t_StandardDeviation::initialize(module);
            t_Variance::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/stat/descriptive/rank/Max.h"
#include "org/hipparchus/stat/descriptive/rank/Median.h"
#include "org/hipparchus/stat/descriptive/rank/Min.h"
#include "org/hipparchus/stat/descriptive/rank/PSquarePercentile.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "org/hipparchus/stat/descriptive/rank/RandomPercentile.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.stat.descriptive", "rank");

            t_Max::install(module);
            t_Median::install(module);
            t_Min::install(module);
            t_PSquarePercentile::install(module);
            t_Percentile::install(module);
            t_Percentile$EstimationType::install(module);
            t_RandomPercentile::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.stat.descriptive", "rank");

            t_Max::initialize(module);
            t_Median::initialize(module);
            t_Min::initialize(module);
            t_PSquarePercentile::initialize(module);
            t_Percentile::initialize(module);
            t_Percentile$EstimationType::initialize(module);
            t_RandomPercentile::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/stat/descriptive/summary/Product.h"
#include "org/hipparchus/stat/descriptive/summary/Sum.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfSquares.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.stat.descriptive", "summary");

            t_Product::install(module);
            t_Sum::install(module);
            t_SumOfLogs::install(module);
            t_SumOfSquares::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.stat.descriptive", "summary");

            t_Product::initialize(module);
            t_Sum::initialize(module);
            t_SumOfLogs::initialize(module);
            t_SumOfSquares::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/stat/descriptive/vector/VectorialCovariance.h"
#include "org/hipparchus/stat/descriptive/vector/VectorialStorelessStatistic.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.stat.descriptive", "vector");

            t_VectorialCovariance::install(module);
            t_VectorialStorelessStatistic::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.hipparchus.stat.descriptive", "vector");

            t_VectorialCovariance::initialize(module);
            t_VectorialStorelessStatistic::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/hipparchus/stat/fitting/EmpiricalDistribution.h"
#include "org/hipparchus/stat/fitting/MultivariateNormalMixtureExpectationMaximization.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace fitting {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "fitting");

          t_EmpiricalDistribution::install(module);
          t_MultivariateNormalMixtureExpectationMaximization::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "fitting");

          t_EmpiricalDistribution::initialize(module);
          t_MultivariateNormalMixtureExpectationMaximization::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "org/hipparchus/stat/inference/BinomialTest.h"
#include "org/hipparchus/stat/inference/ChiSquareTest.h"
#include "org/hipparchus/stat/inference/GTest.h"
#include "org/hipparchus/stat/inference/InferenceTestUtils.h"
#include "org/hipparchus/stat/inference/KolmogorovSmirnovTest.h"
#include "org/hipparchus/stat/inference/MannWhitneyUTest.h"
#include "org/hipparchus/stat/inference/OneWayAnova.h"
#include "org/hipparchus/stat/inference/TTest.h"
#include "org/hipparchus/stat/inference/WilcoxonSignedRankTest.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "inference");

          t_AlternativeHypothesis::install(module);
          t_BinomialTest::install(module);
          t_ChiSquareTest::install(module);
          t_GTest::install(module);
          t_InferenceTestUtils::install(module);
          t_KolmogorovSmirnovTest::install(module);
          t_MannWhitneyUTest::install(module);
          t_OneWayAnova::install(module);
          t_TTest::install(module);
          t_WilcoxonSignedRankTest::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "inference");

          t_AlternativeHypothesis::initialize(module);
          t_BinomialTest::initialize(module);
          t_ChiSquareTest::initialize(module);
          t_GTest::initialize(module);
          t_InferenceTestUtils::initialize(module);
          t_KolmogorovSmirnovTest::initialize(module);
          t_MannWhitneyUTest::initialize(module);
          t_OneWayAnova::initialize(module);
          t_TTest::initialize(module);
          t_WilcoxonSignedRankTest::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/stat/interval/BinomialProportion.h"
#include "org/hipparchus/stat/interval/ConfidenceInterval.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "interval");

          t_BinomialProportion::install(module);
          t_ConfidenceInterval::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "interval");

          t_BinomialProportion::initialize(module);
          t_ConfidenceInterval::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/stat/projection/PCA.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace projection {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "projection");

          t_PCA::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "projection");

          t_PCA::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/stat/ranking/NaturalRanking.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "ranking");

          t_NaNStrategy::install(module);
          t_NaturalRanking::install(module);
          t_RankingAlgorithm::install(module);
          t_TiesStrategy::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "ranking");

          t_NaNStrategy::initialize(module);
          t_NaturalRanking::initialize(module);
          t_RankingAlgorithm::initialize(module);
          t_TiesStrategy::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/stat/regression/AbstractMultipleLinearRegression.h"
#include "org/hipparchus/stat/regression/GLSMultipleLinearRegression.h"
#include "org/hipparchus/stat/regression/MillerUpdatingRegression.h"
#include "org/hipparchus/stat/regression/MultipleLinearRegression.h"
#include "org/hipparchus/stat/regression/OLSMultipleLinearRegression.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/stat/regression/SimpleRegression.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "regression");

          t_AbstractMultipleLinearRegression::install(module);
          t_GLSMultipleLinearRegression::install(module);
          t_MillerUpdatingRegression::install(module);
          t_MultipleLinearRegression::install(module);
          t_OLSMultipleLinearRegression::install(module);
          t_RegressionResults::install(module);
          t_SimpleRegression::install(module);
          t_UpdatingMultipleLinearRegression::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.hipparchus.stat", "regression");

          t_AbstractMultipleLinearRegression::initialize(module);
          t_GLSMultipleLinearRegression::initialize(module);
          t_MillerUpdatingRegression::initialize(module);
          t_MultipleLinearRegression::initialize(module);
          t_OLSMultipleLinearRegression::initialize(module);
          t_RegressionResults::initialize(module);
          t_SimpleRegression::initialize(module);
          t_UpdatingMultipleLinearRegression::initialize(module);
        }
      }
    }
  }
}

#include "org/hipparchus/util/AbstractUnscentedTransform.h"
#include "org/hipparchus/util/ArithmeticUtils.h"
#include "org/hipparchus/util/BigReal.h"
#include "org/hipparchus/util/BigRealField.h"
#include "org/hipparchus/util/Binary64.h"
#include "org/hipparchus/util/Binary64Field.h"
#include "org/hipparchus/util/Blendable.h"
#include "org/hipparchus/util/Combinations.h"
#include "org/hipparchus/util/CombinatoricsUtils.h"
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"
#include "org/hipparchus/util/CompositeFormat.h"
#include "org/hipparchus/util/ContinuedFraction.h"
#include "org/hipparchus/util/FastMath.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/util/FieldContinuedFraction.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldTuple.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "org/hipparchus/util/IterationListener.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/util/JulierUnscentedTransform.h"
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/util/MathArrays.h"
#include "org/hipparchus/util/MathArrays$Function.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "org/hipparchus/util/MathArrays$Position.h"
#include "org/hipparchus/util/MathUtils.h"
#include "org/hipparchus/util/MathUtils$FieldSumAndResidual.h"
#include "org/hipparchus/util/MathUtils$SumAndResidual.h"
#include "org/hipparchus/util/MerweUnscentedTransform.h"
#include "org/hipparchus/util/MultidimensionalCounter.h"
#include "org/hipparchus/util/MultidimensionalCounter$Iterator.h"
#include "org/hipparchus/util/OpenIntToDoubleHashMap.h"
#include "org/hipparchus/util/OpenIntToDoubleHashMap$Iterator.h"
#include "org/hipparchus/util/OpenIntToFieldHashMap.h"
#include "org/hipparchus/util/OpenIntToFieldHashMap$Iterator.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "org/hipparchus/util/Precision.h"
#include "org/hipparchus/util/ResizableDoubleArray.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "org/hipparchus/util/RyuDouble.h"
#include "org/hipparchus/util/SinCos.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "org/hipparchus/util/Tuple.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"

namespace org {
  namespace hipparchus {
    namespace util {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "util");

        t_AbstractUnscentedTransform::install(module);
        t_ArithmeticUtils::install(module);
        t_BigReal::install(module);
        t_BigRealField::install(module);
        t_Binary64::install(module);
        t_Binary64Field::install(module);
        t_Blendable::install(module);
        t_Combinations::install(module);
        t_CombinatoricsUtils::install(module);
        t_CombinatoricsUtils$FactorialLog::install(module);
        t_CompositeFormat::install(module);
        t_ContinuedFraction::install(module);
        t_FastMath::install(module);
        t_FieldBlendable::install(module);
        t_FieldContinuedFraction::install(module);
        t_FieldSinCos::install(module);
        t_FieldSinhCosh::install(module);
        t_FieldTuple::install(module);
        t_Incrementor::install(module);
        t_Incrementor$MaxCountExceededCallback::install(module);
        t_IterationEvent::install(module);
        t_IterationListener::install(module);
        t_IterationManager::install(module);
        t_JulierUnscentedTransform::install(module);
        t_KthSelector::install(module);
        t_MathArrays::install(module);
        t_MathArrays$Function::install(module);
        t_MathArrays$OrderDirection::install(module);
        t_MathArrays$Position::install(module);
        t_MathUtils::install(module);
        t_MathUtils$FieldSumAndResidual::install(module);
        t_MathUtils$SumAndResidual::install(module);
        t_MerweUnscentedTransform::install(module);
        t_MultidimensionalCounter::install(module);
        t_MultidimensionalCounter$Iterator::install(module);
        t_OpenIntToDoubleHashMap::install(module);
        t_OpenIntToDoubleHashMap$Iterator::install(module);
        t_OpenIntToFieldHashMap::install(module);
        t_OpenIntToFieldHashMap$Iterator::install(module);
        t_Pair::install(module);
        t_PivotingStrategy::install(module);
        t_Precision::install(module);
        t_ResizableDoubleArray::install(module);
        t_ResizableDoubleArray$ExpansionMode::install(module);
        t_RyuDouble::install(module);
        t_SinCos::install(module);
        t_SinhCosh::install(module);
        t_Tuple::install(module);
        t_UnscentedTransformProvider::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.hipparchus", "util");

        t_AbstractUnscentedTransform::initialize(module);
        t_ArithmeticUtils::initialize(module);
        t_BigReal::initialize(module);
        t_BigRealField::initialize(module);
        t_Binary64::initialize(module);
        t_Binary64Field::initialize(module);
        t_Blendable::initialize(module);
        t_Combinations::initialize(module);
        t_CombinatoricsUtils::initialize(module);
        t_CombinatoricsUtils$FactorialLog::initialize(module);
        t_CompositeFormat::initialize(module);
        t_ContinuedFraction::initialize(module);
        t_FastMath::initialize(module);
        t_FieldBlendable::initialize(module);
        t_FieldContinuedFraction::initialize(module);
        t_FieldSinCos::initialize(module);
        t_FieldSinhCosh::initialize(module);
        t_FieldTuple::initialize(module);
        t_Incrementor::initialize(module);
        t_Incrementor$MaxCountExceededCallback::initialize(module);
        t_IterationEvent::initialize(module);
        t_IterationListener::initialize(module);
        t_IterationManager::initialize(module);
        t_JulierUnscentedTransform::initialize(module);
        t_KthSelector::initialize(module);
        t_MathArrays::initialize(module);
        t_MathArrays$Function::initialize(module);
        t_MathArrays$OrderDirection::initialize(module);
        t_MathArrays$Position::initialize(module);
        t_MathUtils::initialize(module);
        t_MathUtils$FieldSumAndResidual::initialize(module);
        t_MathUtils$SumAndResidual::initialize(module);
        t_MerweUnscentedTransform::initialize(module);
        t_MultidimensionalCounter::initialize(module);
        t_MultidimensionalCounter$Iterator::initialize(module);
        t_OpenIntToDoubleHashMap::initialize(module);
        t_OpenIntToDoubleHashMap$Iterator::initialize(module);
        t_OpenIntToFieldHashMap::initialize(module);
        t_OpenIntToFieldHashMap$Iterator::initialize(module);
        t_Pair::initialize(module);
        t_PivotingStrategy::initialize(module);
        t_Precision::initialize(module);
        t_ResizableDoubleArray::initialize(module);
        t_ResizableDoubleArray$ExpansionMode::initialize(module);
        t_RyuDouble::initialize(module);
        t_SinCos::initialize(module);
        t_SinhCosh::initialize(module);
        t_Tuple::initialize(module);
        t_UnscentedTransformProvider::initialize(module);
      }
    }
  }
}


namespace org {
  namespace orekit {

    namespace annotation {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace attitudes {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace bodies {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace data {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace errors {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace estimation {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace files {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace forces {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace frames {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace geometry {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace gnss {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace models {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace orbits {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace propagation {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace python {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace rugged {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace ssa {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace time {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }
    namespace utils {
      void __install__(PyObject *module);
      void __initialize__(PyObject *module);
    }

    void __install__(PyObject *module)
    {
      module = getJavaModule(module, "org", "orekit");

      annotation::__install__(module);
      attitudes::__install__(module);
      bodies::__install__(module);
      data::__install__(module);
      errors::__install__(module);
      estimation::__install__(module);
      files::__install__(module);
      forces::__install__(module);
      frames::__install__(module);
      geometry::__install__(module);
      gnss::__install__(module);
      models::__install__(module);
      orbits::__install__(module);
      propagation::__install__(module);
      python::__install__(module);
      rugged::__install__(module);
      ssa::__install__(module);
      time::__install__(module);
      utils::__install__(module);
    }

    void __initialize__(PyObject *module)
    {
      module = getJavaModule(module, "org", "orekit");

      annotation::__initialize__(module);
      attitudes::__initialize__(module);
      bodies::__initialize__(module);
      data::__initialize__(module);
      errors::__initialize__(module);
      estimation::__initialize__(module);
      files::__initialize__(module);
      forces::__initialize__(module);
      frames::__initialize__(module);
      geometry::__initialize__(module);
      gnss::__initialize__(module);
      models::__initialize__(module);
      orbits::__initialize__(module);
      propagation::__initialize__(module);
      python::__initialize__(module);
      rugged::__initialize__(module);
      ssa::__initialize__(module);
      time::__initialize__(module);
      utils::__initialize__(module);
    }
  }
}

#include "org/orekit/annotation/DefaultDataContext.h"

namespace org {
  namespace orekit {
    namespace annotation {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "annotation");

        t_DefaultDataContext::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "annotation");

        t_DefaultDataContext::initialize(module);
      }
    }
  }
}

#include "org/orekit/attitudes/AggregateBoundedAttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/attitudes/AttitudeInterpolator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/attitudes/AttitudesSequence.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "org/orekit/attitudes/BodyCenterPointing.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/attitudes/CelestialBodyPointed.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/attitudes/FieldAttitudeInterpolator.h"
#include "org/orekit/attitudes/FieldInertia.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "org/orekit/attitudes/FixedFrameBuilder.h"
#include "org/orekit/attitudes/FixedRate.h"
#include "org/orekit/attitudes/FrameAlignedProvider.h"
#include "org/orekit/attitudes/GroundPointing.h"
#include "org/orekit/attitudes/Inertia.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "org/orekit/attitudes/LofOffset.h"
#include "org/orekit/attitudes/LofOffsetPointing.h"
#include "org/orekit/attitudes/NadirPointing.h"
#include "org/orekit/attitudes/PythonAttitudeBuilder.h"
#include "org/orekit/attitudes/PythonAttitudeProvider.h"
#include "org/orekit/attitudes/PythonAttitudeProviderModifier.h"
#include "org/orekit/attitudes/PythonBoundedAttitudeProvider.h"
#include "org/orekit/attitudes/PythonGroundPointing.h"
#include "org/orekit/attitudes/PythonSwitchHandler.h"
#include "org/orekit/attitudes/SpinStabilized.h"
#include "org/orekit/attitudes/TabulatedLofOffset.h"
#include "org/orekit/attitudes/TabulatedProvider.h"
#include "org/orekit/attitudes/TargetPointing.h"
#include "org/orekit/attitudes/TorqueFree.h"
#include "org/orekit/attitudes/YawCompensation.h"
#include "org/orekit/attitudes/YawSteering.h"

namespace org {
  namespace orekit {
    namespace attitudes {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "attitudes");

        t_AggregateBoundedAttitudeProvider::install(module);
        t_Attitude::install(module);
        t_AttitudeBuilder::install(module);
        t_AttitudeInterpolator::install(module);
        t_AttitudeProvider::install(module);
        t_AttitudeProviderModifier::install(module);
        t_AttitudesSequence::install(module);
        t_AttitudesSequence$SwitchHandler::install(module);
        t_BodyCenterPointing::install(module);
        t_BoundedAttitudeProvider::install(module);
        t_CelestialBodyPointed::install(module);
        t_FieldAttitude::install(module);
        t_FieldAttitudeInterpolator::install(module);
        t_FieldInertia::install(module);
        t_FieldInertiaAxis::install(module);
        t_FixedFrameBuilder::install(module);
        t_FixedRate::install(module);
        t_FrameAlignedProvider::install(module);
        t_GroundPointing::install(module);
        t_Inertia::install(module);
        t_InertiaAxis::install(module);
        t_LofOffset::install(module);
        t_LofOffsetPointing::install(module);
        t_NadirPointing::install(module);
        t_PythonAttitudeBuilder::install(module);
        t_PythonAttitudeProvider::install(module);
        t_PythonAttitudeProviderModifier::install(module);
        t_PythonBoundedAttitudeProvider::install(module);
        t_PythonGroundPointing::install(module);
        t_PythonSwitchHandler::install(module);
        t_SpinStabilized::install(module);
        t_TabulatedLofOffset::install(module);
        t_TabulatedProvider::install(module);
        t_TargetPointing::install(module);
        t_TorqueFree::install(module);
        t_YawCompensation::install(module);
        t_YawSteering::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "attitudes");

        t_AggregateBoundedAttitudeProvider::initialize(module);
        t_Attitude::initialize(module);
        t_AttitudeBuilder::initialize(module);
        t_AttitudeInterpolator::initialize(module);
        t_AttitudeProvider::initialize(module);
        t_AttitudeProviderModifier::initialize(module);
        t_AttitudesSequence::initialize(module);
        t_AttitudesSequence$SwitchHandler::initialize(module);
        t_BodyCenterPointing::initialize(module);
        t_BoundedAttitudeProvider::initialize(module);
        t_CelestialBodyPointed::initialize(module);
        t_FieldAttitude::initialize(module);
        t_FieldAttitudeInterpolator::initialize(module);
        t_FieldInertia::initialize(module);
        t_FieldInertiaAxis::initialize(module);
        t_FixedFrameBuilder::initialize(module);
        t_FixedRate::initialize(module);
        t_FrameAlignedProvider::initialize(module);
        t_GroundPointing::initialize(module);
        t_Inertia::initialize(module);
        t_InertiaAxis::initialize(module);
        t_LofOffset::initialize(module);
        t_LofOffsetPointing::initialize(module);
        t_NadirPointing::initialize(module);
        t_PythonAttitudeBuilder::initialize(module);
        t_PythonAttitudeProvider::initialize(module);
        t_PythonAttitudeProviderModifier::initialize(module);
        t_PythonBoundedAttitudeProvider::initialize(module);
        t_PythonGroundPointing::initialize(module);
        t_PythonSwitchHandler::initialize(module);
        t_SpinStabilized::initialize(module);
        t_TabulatedLofOffset::initialize(module);
        t_TabulatedProvider::initialize(module);
        t_TargetPointing::initialize(module);
        t_TorqueFree::initialize(module);
        t_YawCompensation::initialize(module);
        t_YawSteering::initialize(module);
      }
    }
  }
}

#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/bodies/CR3BPFactory.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/bodies/CelestialBodyFactory.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "org/orekit/bodies/Ellipse.h"
#include "org/orekit/bodies/Ellipsoid.h"
#include "org/orekit/bodies/FieldEllipse.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/IAUPole.h"
#include "org/orekit/bodies/JPLEphemeridesLoader.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/bodies/Loxodrome.h"
#include "org/orekit/bodies/LoxodromeArc.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/PythonBodyShape.h"
#include "org/orekit/bodies/PythonCelestialBodies.h"
#include "org/orekit/bodies/PythonCelestialBody.h"
#include "org/orekit/bodies/PythonCelestialBodyLoader.h"
#include "org/orekit/bodies/PythonIAUPole.h"

namespace org {
  namespace orekit {
    namespace bodies {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "bodies");

        t_BodyShape::install(module);
        t_CR3BPFactory::install(module);
        t_CR3BPSystem::install(module);
        t_CelestialBodies::install(module);
        t_CelestialBody::install(module);
        t_CelestialBodyFactory::install(module);
        t_CelestialBodyLoader::install(module);
        t_Ellipse::install(module);
        t_Ellipsoid::install(module);
        t_FieldEllipse::install(module);
        t_FieldGeodeticPoint::install(module);
        t_GeodeticPoint::install(module);
        t_IAUPole::install(module);
        t_JPLEphemeridesLoader::install(module);
        t_JPLEphemeridesLoader$EphemerisType::install(module);
        t_JPLEphemeridesLoader$RawPVProvider::install(module);
        t_LazyLoadedCelestialBodies::install(module);
        t_Loxodrome::install(module);
        t_LoxodromeArc::install(module);
        t_OneAxisEllipsoid::install(module);
        t_PythonBodyShape::install(module);
        t_PythonCelestialBodies::install(module);
        t_PythonCelestialBody::install(module);
        t_PythonCelestialBodyLoader::install(module);
        t_PythonIAUPole::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "bodies");

        t_BodyShape::initialize(module);
        t_CR3BPFactory::initialize(module);
        t_CR3BPSystem::initialize(module);
        t_CelestialBodies::initialize(module);
        t_CelestialBody::initialize(module);
        t_CelestialBodyFactory::initialize(module);
        t_CelestialBodyLoader::initialize(module);
        t_Ellipse::initialize(module);
        t_Ellipsoid::initialize(module);
        t_FieldEllipse::initialize(module);
        t_FieldGeodeticPoint::initialize(module);
        t_GeodeticPoint::initialize(module);
        t_IAUPole::initialize(module);
        t_JPLEphemeridesLoader::initialize(module);
        t_JPLEphemeridesLoader$EphemerisType::initialize(module);
        t_JPLEphemeridesLoader$RawPVProvider::initialize(module);
        t_LazyLoadedCelestialBodies::initialize(module);
        t_Loxodrome::initialize(module);
        t_LoxodromeArc::initialize(module);
        t_OneAxisEllipsoid::initialize(module);
        t_PythonBodyShape::initialize(module);
        t_PythonCelestialBodies::initialize(module);
        t_PythonCelestialBody::initialize(module);
        t_PythonCelestialBodyLoader::initialize(module);
        t_PythonIAUPole::initialize(module);
      }
    }
  }
}

#include "org/orekit/data/AbstractListCrawler.h"
#include "org/orekit/data/AbstractSelfFeedingLoader.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/data/ClasspathCrawler.h"
#include "org/orekit/data/CompositeDataContext.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/data/DataFilter.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/data/DataProvider.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataSource$Opener.h"
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "org/orekit/data/DelaunayArguments.h"
#include "org/orekit/data/DirectoryCrawler.h"
#include "org/orekit/data/ExceptionalDataContext.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/FieldDelaunayArguments.h"
#include "org/orekit/data/FilesListCrawler.h"
#include "org/orekit/data/FiltersManager.h"
#include "org/orekit/data/FundamentalNutationArguments.h"
#include "org/orekit/data/GzipFilter.h"
#include "org/orekit/data/LazyLoadedDataContext.h"
#include "org/orekit/data/NetworkCrawler.h"
#include "org/orekit/data/PoissonSeries.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "org/orekit/data/PoissonSeriesParser.h"
#include "org/orekit/data/PolynomialNutation.h"
#include "org/orekit/data/PolynomialParser.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "org/orekit/data/PythonAbstractListCrawler.h"
#include "org/orekit/data/PythonAbstractSelfFeedingLoader.h"
#include "org/orekit/data/PythonDataContext.h"
#include "org/orekit/data/PythonDataFilter.h"
#include "org/orekit/data/PythonDataLoader.h"
#include "org/orekit/data/PythonDataProvider.h"
#include "org/orekit/data/PythonReaderOpener.h"
#include "org/orekit/data/PythonSeriesTerm.h"
#include "org/orekit/data/PythonStreamOpener.h"
#include "org/orekit/data/SeriesTerm.h"
#include "org/orekit/data/SimpleTimeStampedTableParser.h"
#include "org/orekit/data/SimpleTimeStampedTableParser$RowConverter.h"
#include "org/orekit/data/TruncatingFilter.h"
#include "org/orekit/data/UnixCompressFilter.h"
#include "org/orekit/data/ZipJarCrawler.h"
#include "org/orekit/data/ZipJarCrawler$Archive$EntryStream.h"

namespace org {
  namespace orekit {
    namespace data {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "data");

        t_AbstractListCrawler::install(module);
        t_AbstractSelfFeedingLoader::install(module);
        t_BodiesElements::install(module);
        t_ClasspathCrawler::install(module);
        t_CompositeDataContext::install(module);
        t_DataContext::install(module);
        t_DataFilter::install(module);
        t_DataLoader::install(module);
        t_DataProvider::install(module);
        t_DataProvidersManager::install(module);
        t_DataSource::install(module);
        t_DataSource$Opener::install(module);
        t_DataSource$ReaderOpener::install(module);
        t_DataSource$StreamOpener::install(module);
        t_DelaunayArguments::install(module);
        t_DirectoryCrawler::install(module);
        t_ExceptionalDataContext::install(module);
        t_FieldBodiesElements::install(module);
        t_FieldDelaunayArguments::install(module);
        t_FilesListCrawler::install(module);
        t_FiltersManager::install(module);
        t_FundamentalNutationArguments::install(module);
        t_GzipFilter::install(module);
        t_LazyLoadedDataContext::install(module);
        t_NetworkCrawler::install(module);
        t_PoissonSeries::install(module);
        t_PoissonSeries$CompiledSeries::install(module);
        t_PoissonSeriesParser::install(module);
        t_PolynomialNutation::install(module);
        t_PolynomialParser::install(module);
        t_PolynomialParser$Unit::install(module);
        t_PythonAbstractListCrawler::install(module);
        t_PythonAbstractSelfFeedingLoader::install(module);
        t_PythonDataContext::install(module);
        t_PythonDataFilter::install(module);
        t_PythonDataLoader::install(module);
        t_PythonDataProvider::install(module);
        t_PythonReaderOpener::install(module);
        t_PythonSeriesTerm::install(module);
        t_PythonStreamOpener::install(module);
        t_SeriesTerm::install(module);
        t_SimpleTimeStampedTableParser::install(module);
        t_SimpleTimeStampedTableParser$RowConverter::install(module);
        t_TruncatingFilter::install(module);
        t_UnixCompressFilter::install(module);
        t_ZipJarCrawler::install(module);
        t_ZipJarCrawler$Archive$EntryStream::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "data");

        t_AbstractListCrawler::initialize(module);
        t_AbstractSelfFeedingLoader::initialize(module);
        t_BodiesElements::initialize(module);
        t_ClasspathCrawler::initialize(module);
        t_CompositeDataContext::initialize(module);
        t_DataContext::initialize(module);
        t_DataFilter::initialize(module);
        t_DataLoader::initialize(module);
        t_DataProvider::initialize(module);
        t_DataProvidersManager::initialize(module);
        t_DataSource::initialize(module);
        t_DataSource$Opener::initialize(module);
        t_DataSource$ReaderOpener::initialize(module);
        t_DataSource$StreamOpener::initialize(module);
        t_DelaunayArguments::initialize(module);
        t_DirectoryCrawler::initialize(module);
        t_ExceptionalDataContext::initialize(module);
        t_FieldBodiesElements::initialize(module);
        t_FieldDelaunayArguments::initialize(module);
        t_FilesListCrawler::initialize(module);
        t_FiltersManager::initialize(module);
        t_FundamentalNutationArguments::initialize(module);
        t_GzipFilter::initialize(module);
        t_LazyLoadedDataContext::initialize(module);
        t_NetworkCrawler::initialize(module);
        t_PoissonSeries::initialize(module);
        t_PoissonSeries$CompiledSeries::initialize(module);
        t_PoissonSeriesParser::initialize(module);
        t_PolynomialNutation::initialize(module);
        t_PolynomialParser::initialize(module);
        t_PolynomialParser$Unit::initialize(module);
        t_PythonAbstractListCrawler::initialize(module);
        t_PythonAbstractSelfFeedingLoader::initialize(module);
        t_PythonDataContext::initialize(module);
        t_PythonDataFilter::initialize(module);
        t_PythonDataLoader::initialize(module);
        t_PythonDataProvider::initialize(module);
        t_PythonReaderOpener::initialize(module);
        t_PythonSeriesTerm::initialize(module);
        t_PythonStreamOpener::initialize(module);
        t_SeriesTerm::initialize(module);
        t_SimpleTimeStampedTableParser::initialize(module);
        t_SimpleTimeStampedTableParser$RowConverter::initialize(module);
        t_TruncatingFilter::initialize(module);
        t_UnixCompressFilter::initialize(module);
        t_ZipJarCrawler::initialize(module);
        t_ZipJarCrawler$Archive$EntryStream::initialize(module);
      }
    }
  }
}

#include "org/orekit/errors/FrameAncestorException.h"
#include "org/orekit/errors/LocalizedException.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/errors/OrekitIOException.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "org/orekit/errors/OrekitInternalError.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "org/orekit/errors/OrekitMessages$UTF8Control.h"
#include "org/orekit/errors/OrekitParseException.h"
#include "org/orekit/errors/PythonLocalizedException.h"
#include "org/orekit/errors/TimeStampedCacheException.h"
#include "org/orekit/errors/UnsupportedParameterException.h"

namespace org {
  namespace orekit {
    namespace errors {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "errors");

        t_FrameAncestorException::install(module);
        t_LocalizedException::install(module);
        t_OrekitException::install(module);
        t_OrekitIOException::install(module);
        t_OrekitIllegalArgumentException::install(module);
        t_OrekitIllegalStateException::install(module);
        t_OrekitInternalError::install(module);
        t_OrekitMessages::install(module);
        t_OrekitMessages$UTF8Control::install(module);
        t_OrekitParseException::install(module);
        t_PythonLocalizedException::install(module);
        t_TimeStampedCacheException::install(module);
        t_UnsupportedParameterException::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "errors");

        t_FrameAncestorException::initialize(module);
        t_LocalizedException::initialize(module);
        t_OrekitException::initialize(module);
        t_OrekitIOException::initialize(module);
        t_OrekitIllegalArgumentException::initialize(module);
        t_OrekitIllegalStateException::initialize(module);
        t_OrekitInternalError::initialize(module);
        t_OrekitMessages::initialize(module);
        t_OrekitMessages$UTF8Control::initialize(module);
        t_OrekitParseException::initialize(module);
        t_PythonLocalizedException::initialize(module);
        t_TimeStampedCacheException::initialize(module);
        t_UnsupportedParameterException::initialize(module);
      }
    }
  }
}


namespace org {
  namespace orekit {
    namespace estimation {

      namespace iod {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace leastsquares {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace measurements {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace sequential {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "estimation");

        iod::__install__(module);
        leastsquares::__install__(module);
        measurements::__install__(module);
        sequential::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "estimation");

        iod::__initialize__(module);
        leastsquares::__initialize__(module);
        measurements::__initialize__(module);
        sequential::__initialize__(module);
      }
    }
  }
}

#include "org/orekit/estimation/iod/IodGauss.h"
#include "org/orekit/estimation/iod/IodGibbs.h"
#include "org/orekit/estimation/iod/IodGooding.h"
#include "org/orekit/estimation/iod/IodLambert.h"
#include "org/orekit/estimation/iod/IodLaplace.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.estimation", "iod");

          t_IodGauss::install(module);
          t_IodGibbs::install(module);
          t_IodGooding::install(module);
          t_IodLambert::install(module);
          t_IodLaplace::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.estimation", "iod");

          t_IodGauss::initialize(module);
          t_IodGibbs::initialize(module);
          t_IodGooding::initialize(module);
          t_IodLambert::initialize(module);
          t_IodLaplace::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/leastsquares/BatchLSEstimator.h"
#include "org/orekit/estimation/leastsquares/BatchLSModel.h"
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/orekit/estimation/leastsquares/DSSTBatchLSModel.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/leastsquares/PythonAbstractBatchLSModel.h"
#include "org/orekit/estimation/leastsquares/PythonBatchLSObserver.h"
#include "org/orekit/estimation/leastsquares/PythonModelObserver.h"
#include "org/orekit/estimation/leastsquares/SequentialBatchLSEstimator.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.estimation", "leastsquares");

          t_AbstractBatchLSModel::install(module);
          t_BatchLSEstimator::install(module);
          t_BatchLSModel::install(module);
          t_BatchLSObserver::install(module);
          t_DSSTBatchLSModel::install(module);
          t_ModelObserver::install(module);
          t_PythonAbstractBatchLSModel::install(module);
          t_PythonBatchLSObserver::install(module);
          t_PythonModelObserver::install(module);
          t_SequentialBatchLSEstimator::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.estimation", "leastsquares");

          t_AbstractBatchLSModel::initialize(module);
          t_BatchLSEstimator::initialize(module);
          t_BatchLSModel::initialize(module);
          t_BatchLSObserver::initialize(module);
          t_DSSTBatchLSModel::initialize(module);
          t_ModelObserver::initialize(module);
          t_PythonAbstractBatchLSModel::initialize(module);
          t_PythonBatchLSObserver::initialize(module);
          t_PythonModelObserver::initialize(module);
          t_SequentialBatchLSEstimator::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/estimation/measurements/AbstractMeasurement.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedEarthFrameProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "org/orekit/estimation/measurements/GroundReceiverCommonParametersWithDerivatives.h"
#include "org/orekit/estimation/measurements/GroundReceiverCommonParametersWithoutDerivatives.h"
#include "org/orekit/estimation/measurements/GroundReceiverMeasurement.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "org/orekit/estimation/measurements/PythonAbstractMeasurement.h"
#include "org/orekit/estimation/measurements/PythonComparableMeasurement.h"
#include "org/orekit/estimation/measurements/PythonEstimationModifier.h"
#include "org/orekit/estimation/measurements/PythonEstimationsProvider.h"
#include "org/orekit/estimation/measurements/PythonGroundReceiverMeasurement.h"
#include "org/orekit/estimation/measurements/PythonObservedMeasurement.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        namespace filtering {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace generation {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace gnss {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace modifiers {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.estimation", "measurements");

          t_AbstractMeasurement::install(module);
          t_AngularAzEl::install(module);
          t_AngularRaDec::install(module);
          t_BistaticRange::install(module);
          t_BistaticRangeRate::install(module);
          t_ComparableMeasurement::install(module);
          t_EstimatedEarthFrameProvider::install(module);
          t_EstimatedMeasurement::install(module);
          t_EstimatedMeasurementBase::install(module);
          t_EstimatedMeasurementBase$Status::install(module);
          t_EstimationModifier::install(module);
          t_EstimationsProvider::install(module);
          t_FDOA::install(module);
          t_GroundReceiverCommonParametersWithDerivatives::install(module);
          t_GroundReceiverCommonParametersWithoutDerivatives::install(module);
          t_GroundReceiverMeasurement::install(module);
          t_GroundStation::install(module);
          t_InterSatellitesRange::install(module);
          t_MultiplexedMeasurement::install(module);
          t_ObservableSatellite::install(module);
          t_ObservedMeasurement::install(module);
          t_PV::install(module);
          t_Position::install(module);
          t_PythonAbstractMeasurement::install(module);
          t_PythonComparableMeasurement::install(module);
          t_PythonEstimationModifier::install(module);
          t_PythonEstimationsProvider::install(module);
          t_PythonGroundReceiverMeasurement::install(module);
          t_PythonObservedMeasurement::install(module);
          t_Range::install(module);
          t_RangeRate::install(module);
          t_TDOA::install(module);
          t_TurnAroundRange::install(module);
          filtering::__install__(module);
          generation::__install__(module);
          gnss::__install__(module);
          modifiers::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.estimation", "measurements");

          t_AbstractMeasurement::initialize(module);
          t_AngularAzEl::initialize(module);
          t_AngularRaDec::initialize(module);
          t_BistaticRange::initialize(module);
          t_BistaticRangeRate::initialize(module);
          t_ComparableMeasurement::initialize(module);
          t_EstimatedEarthFrameProvider::initialize(module);
          t_EstimatedMeasurement::initialize(module);
          t_EstimatedMeasurementBase::initialize(module);
          t_EstimatedMeasurementBase$Status::initialize(module);
          t_EstimationModifier::initialize(module);
          t_EstimationsProvider::initialize(module);
          t_FDOA::initialize(module);
          t_GroundReceiverCommonParametersWithDerivatives::initialize(module);
          t_GroundReceiverCommonParametersWithoutDerivatives::initialize(module);
          t_GroundReceiverMeasurement::initialize(module);
          t_GroundStation::initialize(module);
          t_InterSatellitesRange::initialize(module);
          t_MultiplexedMeasurement::initialize(module);
          t_ObservableSatellite::initialize(module);
          t_ObservedMeasurement::initialize(module);
          t_PV::initialize(module);
          t_Position::initialize(module);
          t_PythonAbstractMeasurement::initialize(module);
          t_PythonComparableMeasurement::initialize(module);
          t_PythonEstimationModifier::initialize(module);
          t_PythonEstimationsProvider::initialize(module);
          t_PythonGroundReceiverMeasurement::initialize(module);
          t_PythonObservedMeasurement::initialize(module);
          t_Range::initialize(module);
          t_RangeRate::initialize(module);
          t_TDOA::initialize(module);
          t_TurnAroundRange::initialize(module);
          filtering::__initialize__(module);
          generation::__initialize__(module);
          gnss::__initialize__(module);
          modifiers::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter.h"
#include "org/orekit/estimation/measurements/filtering/DualFrequencySmoother.h"
#include "org/orekit/estimation/measurements/filtering/ElevationFilter.h"
#include "org/orekit/estimation/measurements/filtering/HatchFilter.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "org/orekit/estimation/measurements/filtering/PythonHatchFilter.h"
#include "org/orekit/estimation/measurements/filtering/PythonMeasurementFilter.h"
#include "org/orekit/estimation/measurements/filtering/ResidualFilter.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencySmoother.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.estimation.measurements", "filtering");

            t_DualFrequencyHatchFilter::install(module);
            t_DualFrequencySmoother::install(module);
            t_ElevationFilter::install(module);
            t_HatchFilter::install(module);
            t_MeasurementFilter::install(module);
            t_PythonHatchFilter::install(module);
            t_PythonMeasurementFilter::install(module);
            t_ResidualFilter::install(module);
            t_SingleFrequencyHatchFilter::install(module);
            t_SingleFrequencySmoother::install(module);
            t_SmoothedObservationDataSet::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.estimation.measurements", "filtering");

            t_DualFrequencyHatchFilter::initialize(module);
            t_DualFrequencySmoother::initialize(module);
            t_ElevationFilter::initialize(module);
            t_HatchFilter::initialize(module);
            t_MeasurementFilter::initialize(module);
            t_PythonHatchFilter::initialize(module);
            t_PythonMeasurementFilter::initialize(module);
            t_ResidualFilter::initialize(module);
            t_SingleFrequencyHatchFilter::initialize(module);
            t_SingleFrequencySmoother::initialize(module);
            t_SmoothedObservationDataSet::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder.h"
#include "org/orekit/estimation/measurements/generation/AbstractScheduler.h"
#include "org/orekit/estimation/measurements/generation/AngularAzElBuilder.h"
#include "org/orekit/estimation/measurements/generation/AngularRaDecBuilder.h"
#include "org/orekit/estimation/measurements/generation/BistaticRangeBuilder.h"
#include "org/orekit/estimation/measurements/generation/BistaticRangeRateBuilder.h"
#include "org/orekit/estimation/measurements/generation/ContinuousScheduler.h"
#include "org/orekit/estimation/measurements/generation/EventBasedScheduler.h"
#include "org/orekit/estimation/measurements/generation/FDOABuilder.h"
#include "org/orekit/estimation/measurements/generation/GatheringSubscriber.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/estimation/measurements/generation/Generator.h"
#include "org/orekit/estimation/measurements/generation/InterSatellitesPhaseBuilder.h"
#include "org/orekit/estimation/measurements/generation/InterSatellitesRangeBuilder.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/estimation/measurements/generation/MultiplexedMeasurementBuilder.h"
#include "org/orekit/estimation/measurements/generation/OneWayGNSSPhaseBuilder.h"
#include "org/orekit/estimation/measurements/generation/OneWayGNSSRangeBuilder.h"
#include "org/orekit/estimation/measurements/generation/PVBuilder.h"
#include "org/orekit/estimation/measurements/generation/PositionBuilder.h"
#include "org/orekit/estimation/measurements/generation/PythonAbstractMeasurementBuilder.h"
#include "org/orekit/estimation/measurements/generation/PythonAbstractScheduler.h"
#include "org/orekit/estimation/measurements/generation/PythonGeneratedMeasurementSubscriber.h"
#include "org/orekit/estimation/measurements/generation/PythonMeasurementBuilder.h"
#include "org/orekit/estimation/measurements/generation/PythonScheduler.h"
#include "org/orekit/estimation/measurements/generation/RangeBuilder.h"
#include "org/orekit/estimation/measurements/generation/RangeRateBuilder.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "org/orekit/estimation/measurements/generation/TDOABuilder.h"
#include "org/orekit/estimation/measurements/generation/TurnAroundRangeBuilder.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.estimation.measurements", "generation");

            t_AbstractMeasurementBuilder::install(module);
            t_AbstractScheduler::install(module);
            t_AngularAzElBuilder::install(module);
            t_AngularRaDecBuilder::install(module);
            t_BistaticRangeBuilder::install(module);
            t_BistaticRangeRateBuilder::install(module);
            t_ContinuousScheduler::install(module);
            t_EventBasedScheduler::install(module);
            t_FDOABuilder::install(module);
            t_GatheringSubscriber::install(module);
            t_GeneratedMeasurementSubscriber::install(module);
            t_Generator::install(module);
            t_InterSatellitesPhaseBuilder::install(module);
            t_InterSatellitesRangeBuilder::install(module);
            t_MeasurementBuilder::install(module);
            t_MultiplexedMeasurementBuilder::install(module);
            t_OneWayGNSSPhaseBuilder::install(module);
            t_OneWayGNSSRangeBuilder::install(module);
            t_PVBuilder::install(module);
            t_PositionBuilder::install(module);
            t_PythonAbstractMeasurementBuilder::install(module);
            t_PythonAbstractScheduler::install(module);
            t_PythonGeneratedMeasurementSubscriber::install(module);
            t_PythonMeasurementBuilder::install(module);
            t_PythonScheduler::install(module);
            t_RangeBuilder::install(module);
            t_RangeRateBuilder::install(module);
            t_Scheduler::install(module);
            t_SignSemantic::install(module);
            t_TDOABuilder::install(module);
            t_TurnAroundRangeBuilder::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.estimation.measurements", "generation");

            t_AbstractMeasurementBuilder::initialize(module);
            t_AbstractScheduler::initialize(module);
            t_AngularAzElBuilder::initialize(module);
            t_AngularRaDecBuilder::initialize(module);
            t_BistaticRangeBuilder::initialize(module);
            t_BistaticRangeRateBuilder::initialize(module);
            t_ContinuousScheduler::initialize(module);
            t_EventBasedScheduler::initialize(module);
            t_FDOABuilder::initialize(module);
            t_GatheringSubscriber::initialize(module);
            t_GeneratedMeasurementSubscriber::initialize(module);
            t_Generator::initialize(module);
            t_InterSatellitesPhaseBuilder::initialize(module);
            t_InterSatellitesRangeBuilder::initialize(module);
            t_MeasurementBuilder::initialize(module);
            t_MultiplexedMeasurementBuilder::initialize(module);
            t_OneWayGNSSPhaseBuilder::initialize(module);
            t_OneWayGNSSRangeBuilder::initialize(module);
            t_PVBuilder::initialize(module);
            t_PositionBuilder::initialize(module);
            t_PythonAbstractMeasurementBuilder::initialize(module);
            t_PythonAbstractScheduler::initialize(module);
            t_PythonGeneratedMeasurementSubscriber::initialize(module);
            t_PythonMeasurementBuilder::initialize(module);
            t_PythonScheduler::initialize(module);
            t_RangeBuilder::initialize(module);
            t_RangeRateBuilder::initialize(module);
            t_Scheduler::initialize(module);
            t_SignSemantic::initialize(module);
            t_TDOABuilder::initialize(module);
            t_TurnAroundRangeBuilder::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector.h"
#include "org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/AbstractLambdaMethod.h"
#include "org/orekit/estimation/measurements/gnss/AbstractSingleFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/AbstractWindUp.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguitySolver.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/orekit/estimation/measurements/gnss/GRAPHICCombination.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCombination.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCycleSlipDetector.h"
#include "org/orekit/estimation/measurements/gnss/IntegerBootstrapping.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareComparator.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUp.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUpFactory.h"
#include "org/orekit/estimation/measurements/gnss/IonosphereFreeCombination.h"
#include "org/orekit/estimation/measurements/gnss/LambdaMethod.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombinationFactory.h"
#include "org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination.h"
#include "org/orekit/estimation/measurements/gnss/ModifiedLambdaMethod.h"
#include "org/orekit/estimation/measurements/gnss/NarrowLaneCombination.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/gnss/PhaseBuilder.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCycleSlipDetector.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractCycleSlipDetector.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractDualFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractLambdaMethod.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractSingleFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractWindUp.h"
#include "org/orekit/estimation/measurements/gnss/PythonAmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/PythonCycleSlipDetectors.h"
#include "org/orekit/estimation/measurements/gnss/PythonIntegerLeastSquareSolver.h"
#include "org/orekit/estimation/measurements/gnss/PythonMeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/SimpleRatioAmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/WideLaneCombination.h"
#include "org/orekit/estimation/measurements/gnss/WindUp.h"
#include "org/orekit/estimation/measurements/gnss/WindUpFactory.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.estimation.measurements", "gnss");

            t_AbstractCycleSlipDetector::install(module);
            t_AbstractDualFrequencyCombination::install(module);
            t_AbstractLambdaMethod::install(module);
            t_AbstractSingleFrequencyCombination::install(module);
            t_AbstractWindUp::install(module);
            t_AmbiguityAcceptance::install(module);
            t_AmbiguitySolver::install(module);
            t_CombinationType::install(module);
            t_CombinedObservationData::install(module);
            t_CombinedObservationDataSet::install(module);
            t_CycleSlipDetectorResults::install(module);
            t_CycleSlipDetectors::install(module);
            t_Dipole::install(module);
            t_GRAPHICCombination::install(module);
            t_GeometryFreeCombination::install(module);
            t_GeometryFreeCycleSlipDetector::install(module);
            t_IntegerBootstrapping::install(module);
            t_IntegerLeastSquareComparator::install(module);
            t_IntegerLeastSquareSolution::install(module);
            t_IntegerLeastSquareSolver::install(module);
            t_InterSatellitesPhase::install(module);
            t_InterSatellitesWindUp::install(module);
            t_InterSatellitesWindUpFactory::install(module);
            t_IonosphereFreeCombination::install(module);
            t_LambdaMethod::install(module);
            t_MeasurementCombination::install(module);
            t_MeasurementCombinationFactory::install(module);
            t_MelbourneWubbenaCombination::install(module);
            t_ModifiedLambdaMethod::install(module);
            t_NarrowLaneCombination::install(module);
            t_OneWayGNSSPhase::install(module);
            t_OneWayGNSSRange::install(module);
            t_Phase::install(module);
            t_PhaseBuilder::install(module);
            t_PhaseMinusCodeCombination::install(module);
            t_PhaseMinusCodeCycleSlipDetector::install(module);
            t_PythonAbstractCycleSlipDetector::install(module);
            t_PythonAbstractDualFrequencyCombination::install(module);
            t_PythonAbstractLambdaMethod::install(module);
            t_PythonAbstractSingleFrequencyCombination::install(module);
            t_PythonAbstractWindUp::install(module);
            t_PythonAmbiguityAcceptance::install(module);
            t_PythonCycleSlipDetectors::install(module);
            t_PythonIntegerLeastSquareSolver::install(module);
            t_PythonMeasurementCombination::install(module);
            t_SimpleRatioAmbiguityAcceptance::install(module);
            t_WideLaneCombination::install(module);
            t_WindUp::install(module);
            t_WindUpFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.estimation.measurements", "gnss");

            t_AbstractCycleSlipDetector::initialize(module);
            t_AbstractDualFrequencyCombination::initialize(module);
            t_AbstractLambdaMethod::initialize(module);
            t_AbstractSingleFrequencyCombination::initialize(module);
            t_AbstractWindUp::initialize(module);
            t_AmbiguityAcceptance::initialize(module);
            t_AmbiguitySolver::initialize(module);
            t_CombinationType::initialize(module);
            t_CombinedObservationData::initialize(module);
            t_CombinedObservationDataSet::initialize(module);
            t_CycleSlipDetectorResults::initialize(module);
            t_CycleSlipDetectors::initialize(module);
            t_Dipole::initialize(module);
            t_GRAPHICCombination::initialize(module);
            t_GeometryFreeCombination::initialize(module);
            t_GeometryFreeCycleSlipDetector::initialize(module);
            t_IntegerBootstrapping::initialize(module);
            t_IntegerLeastSquareComparator::initialize(module);
            t_IntegerLeastSquareSolution::initialize(module);
            t_IntegerLeastSquareSolver::initialize(module);
            t_InterSatellitesPhase::initialize(module);
            t_InterSatellitesWindUp::initialize(module);
            t_InterSatellitesWindUpFactory::initialize(module);
            t_IonosphereFreeCombination::initialize(module);
            t_LambdaMethod::initialize(module);
            t_MeasurementCombination::initialize(module);
            t_MeasurementCombinationFactory::initialize(module);
            t_MelbourneWubbenaCombination::initialize(module);
            t_ModifiedLambdaMethod::initialize(module);
            t_NarrowLaneCombination::initialize(module);
            t_OneWayGNSSPhase::initialize(module);
            t_OneWayGNSSRange::initialize(module);
            t_Phase::initialize(module);
            t_PhaseBuilder::initialize(module);
            t_PhaseMinusCodeCombination::initialize(module);
            t_PhaseMinusCodeCycleSlipDetector::initialize(module);
            t_PythonAbstractCycleSlipDetector::initialize(module);
            t_PythonAbstractDualFrequencyCombination::initialize(module);
            t_PythonAbstractLambdaMethod::initialize(module);
            t_PythonAbstractSingleFrequencyCombination::initialize(module);
            t_PythonAbstractWindUp::initialize(module);
            t_PythonAmbiguityAcceptance::initialize(module);
            t_PythonCycleSlipDetectors::initialize(module);
            t_PythonIntegerLeastSquareSolver::initialize(module);
            t_PythonMeasurementCombination::initialize(module);
            t_SimpleRatioAmbiguityAcceptance::initialize(module);
            t_WideLaneCombination::initialize(module);
            t_WindUp::initialize(module);
            t_WindUpFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/estimation/measurements/modifiers/AberrationModifier.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticClockModifier.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/AngularIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/AngularRadioRefractionModifier.h"
#include "org/orekit/estimation/measurements/modifiers/AngularTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/Bias.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeRateIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeRateTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/DynamicOutlierFilter.h"
#include "org/orekit/estimation/measurements/modifiers/InterSatellitesPhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/modifiers/ModifierGradientConverter.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesPhaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesRangeModifier.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSPhaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSRangeModifier.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaTurnAroundRangeModifier.h"
#include "org/orekit/estimation/measurements/modifiers/OneWayGNSSPhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/modifiers/OutlierFilter.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersGroundReceiverBaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersOffsetComputer.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersPhaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersRangeModifier.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/PythonParametricModelEffect.h"
#include "org/orekit/estimation/measurements/modifiers/PythonParametricModelEffectGradient.h"
#include "org/orekit/estimation/measurements/modifiers/RangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RangeModifierUtil.h"
#include "org/orekit/estimation/measurements/modifiers/RangeRateIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RangeRateModifierUtil.h"
#include "org/orekit/estimation/measurements/modifiers/RangeRateTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RangeTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesPhaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockInterSatellitesRangeModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSPhaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockOneWayGNSSRangeModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockPhaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockRangeModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockRangeRateModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesPhaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesRangeModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSPhaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSRangeModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockPhaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockRangeModifier.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroInterSatellitePhaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroInterSatelliteRangeModifier.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSPhaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSRangeModifier.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroPhaseModifier.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroRangeModifier.h"
#include "org/orekit/estimation/measurements/modifiers/TDOAIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/TDOATroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/TurnAroundRangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/modifiers/TurnAroundRangeTroposphericDelayModifier.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.estimation.measurements", "modifiers");

            t_AberrationModifier::install(module);
            t_AbstractAmbiguityModifier::install(module);
            t_AbstractRelativisticClockModifier::install(module);
            t_AbstractRelativisticJ2ClockModifier::install(module);
            t_AbstractShapiroBaseModifier::install(module);
            t_AngularIonosphericDelayModifier::install(module);
            t_AngularRadioRefractionModifier::install(module);
            t_AngularTroposphericDelayModifier::install(module);
            t_BaseRangeIonosphericDelayModifier::install(module);
            t_BaseRangeRateIonosphericDelayModifier::install(module);
            t_BaseRangeRateTroposphericDelayModifier::install(module);
            t_BaseRangeTroposphericDelayModifier::install(module);
            t_Bias::install(module);
            t_BistaticRangeIonosphericDelayModifier::install(module);
            t_BistaticRangeRateIonosphericDelayModifier::install(module);
            t_BistaticRangeRateTroposphericDelayModifier::install(module);
            t_BistaticRangeTroposphericDelayModifier::install(module);
            t_DynamicOutlierFilter::install(module);
            t_InterSatellitesPhaseAmbiguityModifier::install(module);
            t_ModifierGradientConverter::install(module);
            t_OnBoardAntennaInterSatellitesPhaseModifier::install(module);
            t_OnBoardAntennaInterSatellitesRangeModifier::install(module);
            t_OnBoardAntennaOneWayGNSSPhaseModifier::install(module);
            t_OnBoardAntennaOneWayGNSSRangeModifier::install(module);
            t_OnBoardAntennaTurnAroundRangeModifier::install(module);
            t_OneWayGNSSPhaseAmbiguityModifier::install(module);
            t_OutlierFilter::install(module);
            t_PhaseAmbiguityModifier::install(module);
            t_PhaseCentersGroundReceiverBaseModifier::install(module);
            t_PhaseCentersOffsetComputer::install(module);
            t_PhaseCentersPhaseModifier::install(module);
            t_PhaseCentersRangeModifier::install(module);
            t_PhaseIonosphericDelayModifier::install(module);
            t_PhaseTroposphericDelayModifier::install(module);
            t_PythonParametricModelEffect::install(module);
            t_PythonParametricModelEffectGradient::install(module);
            t_RangeIonosphericDelayModifier::install(module);
            t_RangeModifierUtil::install(module);
            t_RangeRateIonosphericDelayModifier::install(module);
            t_RangeRateModifierUtil::install(module);
            t_RangeRateTroposphericDelayModifier::install(module);
            t_RangeTroposphericDelayModifier::install(module);
            t_RelativisticClockInterSatellitesPhaseModifier::install(module);
            t_RelativisticClockInterSatellitesRangeModifier::install(module);
            t_RelativisticClockOneWayGNSSPhaseModifier::install(module);
            t_RelativisticClockOneWayGNSSRangeModifier::install(module);
            t_RelativisticClockPhaseModifier::install(module);
            t_RelativisticClockRangeModifier::install(module);
            t_RelativisticClockRangeRateModifier::install(module);
            t_RelativisticJ2ClockInterSatellitesPhaseModifier::install(module);
            t_RelativisticJ2ClockInterSatellitesRangeModifier::install(module);
            t_RelativisticJ2ClockOneWayGNSSPhaseModifier::install(module);
            t_RelativisticJ2ClockOneWayGNSSRangeModifier::install(module);
            t_RelativisticJ2ClockPhaseModifier::install(module);
            t_RelativisticJ2ClockRangeModifier::install(module);
            t_ShapiroInterSatellitePhaseModifier::install(module);
            t_ShapiroInterSatelliteRangeModifier::install(module);
            t_ShapiroOneWayGNSSPhaseModifier::install(module);
            t_ShapiroOneWayGNSSRangeModifier::install(module);
            t_ShapiroPhaseModifier::install(module);
            t_ShapiroRangeModifier::install(module);
            t_TDOAIonosphericDelayModifier::install(module);
            t_TDOATroposphericDelayModifier::install(module);
            t_TurnAroundRangeIonosphericDelayModifier::install(module);
            t_TurnAroundRangeTroposphericDelayModifier::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.estimation.measurements", "modifiers");

            t_AberrationModifier::initialize(module);
            t_AbstractAmbiguityModifier::initialize(module);
            t_AbstractRelativisticClockModifier::initialize(module);
            t_AbstractRelativisticJ2ClockModifier::initialize(module);
            t_AbstractShapiroBaseModifier::initialize(module);
            t_AngularIonosphericDelayModifier::initialize(module);
            t_AngularRadioRefractionModifier::initialize(module);
            t_AngularTroposphericDelayModifier::initialize(module);
            t_BaseRangeIonosphericDelayModifier::initialize(module);
            t_BaseRangeRateIonosphericDelayModifier::initialize(module);
            t_BaseRangeRateTroposphericDelayModifier::initialize(module);
            t_BaseRangeTroposphericDelayModifier::initialize(module);
            t_Bias::initialize(module);
            t_BistaticRangeIonosphericDelayModifier::initialize(module);
            t_BistaticRangeRateIonosphericDelayModifier::initialize(module);
            t_BistaticRangeRateTroposphericDelayModifier::initialize(module);
            t_BistaticRangeTroposphericDelayModifier::initialize(module);
            t_DynamicOutlierFilter::initialize(module);
            t_InterSatellitesPhaseAmbiguityModifier::initialize(module);
            t_ModifierGradientConverter::initialize(module);
            t_OnBoardAntennaInterSatellitesPhaseModifier::initialize(module);
            t_OnBoardAntennaInterSatellitesRangeModifier::initialize(module);
            t_OnBoardAntennaOneWayGNSSPhaseModifier::initialize(module);
            t_OnBoardAntennaOneWayGNSSRangeModifier::initialize(module);
            t_OnBoardAntennaTurnAroundRangeModifier::initialize(module);
            t_OneWayGNSSPhaseAmbiguityModifier::initialize(module);
            t_OutlierFilter::initialize(module);
            t_PhaseAmbiguityModifier::initialize(module);
            t_PhaseCentersGroundReceiverBaseModifier::initialize(module);
            t_PhaseCentersOffsetComputer::initialize(module);
            t_PhaseCentersPhaseModifier::initialize(module);
            t_PhaseCentersRangeModifier::initialize(module);
            t_PhaseIonosphericDelayModifier::initialize(module);
            t_PhaseTroposphericDelayModifier::initialize(module);
            t_PythonParametricModelEffect::initialize(module);
            t_PythonParametricModelEffectGradient::initialize(module);
            t_RangeIonosphericDelayModifier::initialize(module);
            t_RangeModifierUtil::initialize(module);
            t_RangeRateIonosphericDelayModifier::initialize(module);
            t_RangeRateModifierUtil::initialize(module);
            t_RangeRateTroposphericDelayModifier::initialize(module);
            t_RangeTroposphericDelayModifier::initialize(module);
            t_RelativisticClockInterSatellitesPhaseModifier::initialize(module);
            t_RelativisticClockInterSatellitesRangeModifier::initialize(module);
            t_RelativisticClockOneWayGNSSPhaseModifier::initialize(module);
            t_RelativisticClockOneWayGNSSRangeModifier::initialize(module);
            t_RelativisticClockPhaseModifier::initialize(module);
            t_RelativisticClockRangeModifier::initialize(module);
            t_RelativisticClockRangeRateModifier::initialize(module);
            t_RelativisticJ2ClockInterSatellitesPhaseModifier::initialize(module);
            t_RelativisticJ2ClockInterSatellitesRangeModifier::initialize(module);
            t_RelativisticJ2ClockOneWayGNSSPhaseModifier::initialize(module);
            t_RelativisticJ2ClockOneWayGNSSRangeModifier::initialize(module);
            t_RelativisticJ2ClockPhaseModifier::initialize(module);
            t_RelativisticJ2ClockRangeModifier::initialize(module);
            t_ShapiroInterSatellitePhaseModifier::initialize(module);
            t_ShapiroInterSatelliteRangeModifier::initialize(module);
            t_ShapiroOneWayGNSSPhaseModifier::initialize(module);
            t_ShapiroOneWayGNSSRangeModifier::initialize(module);
            t_ShapiroPhaseModifier::initialize(module);
            t_ShapiroRangeModifier::initialize(module);
            t_TDOAIonosphericDelayModifier::initialize(module);
            t_TDOATroposphericDelayModifier::initialize(module);
            t_TurnAroundRangeIonosphericDelayModifier::initialize(module);
            t_TurnAroundRangeTroposphericDelayModifier::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/estimation/sequential/AbstractCovarianceMatrixProvider.h"
#include "org/orekit/estimation/sequential/AbstractKalmanEstimator.h"
#include "org/orekit/estimation/sequential/ConstantProcessNoise.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/estimation/sequential/KalmanEstimator.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorBuilder.h"
#include "org/orekit/estimation/sequential/KalmanEstimatorUtil.h"
#include "org/orekit/estimation/sequential/KalmanModel.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/estimation/sequential/PythonAbstractCovarianceMatrixProvider.h"
#include "org/orekit/estimation/sequential/PythonAbstractKalmanEstimator.h"
#include "org/orekit/estimation/sequential/PythonCovarianceMatrixProvider.h"
#include "org/orekit/estimation/sequential/PythonKalmanEstimation.h"
#include "org/orekit/estimation/sequential/PythonKalmanObserver.h"
#include "org/orekit/estimation/sequential/PythonSemiAnalyticalProcess.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanModel.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalMeasurementHandler.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimatorBuilder.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanModel.h"
#include "org/orekit/estimation/sequential/UnivariateProcessNoise.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimator.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanModel.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.estimation", "sequential");

          t_AbstractCovarianceMatrixProvider::install(module);
          t_AbstractKalmanEstimator::install(module);
          t_ConstantProcessNoise::install(module);
          t_CovarianceMatrixProvider::install(module);
          t_KalmanEstimation::install(module);
          t_KalmanEstimator::install(module);
          t_KalmanEstimatorBuilder::install(module);
          t_KalmanEstimatorUtil::install(module);
          t_KalmanModel::install(module);
          t_KalmanObserver::install(module);
          t_MeasurementDecorator::install(module);
          t_PythonAbstractCovarianceMatrixProvider::install(module);
          t_PythonAbstractKalmanEstimator::install(module);
          t_PythonCovarianceMatrixProvider::install(module);
          t_PythonKalmanEstimation::install(module);
          t_PythonKalmanObserver::install(module);
          t_PythonSemiAnalyticalProcess::install(module);
          t_SemiAnalyticalKalmanEstimator::install(module);
          t_SemiAnalyticalKalmanEstimatorBuilder::install(module);
          t_SemiAnalyticalKalmanModel::install(module);
          t_SemiAnalyticalMeasurementHandler::install(module);
          t_SemiAnalyticalProcess::install(module);
          t_SemiAnalyticalUnscentedKalmanEstimator::install(module);
          t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::install(module);
          t_SemiAnalyticalUnscentedKalmanModel::install(module);
          t_UnivariateProcessNoise::install(module);
          t_UnscentedKalmanEstimator::install(module);
          t_UnscentedKalmanEstimatorBuilder::install(module);
          t_UnscentedKalmanModel::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.estimation", "sequential");

          t_AbstractCovarianceMatrixProvider::initialize(module);
          t_AbstractKalmanEstimator::initialize(module);
          t_ConstantProcessNoise::initialize(module);
          t_CovarianceMatrixProvider::initialize(module);
          t_KalmanEstimation::initialize(module);
          t_KalmanEstimator::initialize(module);
          t_KalmanEstimatorBuilder::initialize(module);
          t_KalmanEstimatorUtil::initialize(module);
          t_KalmanModel::initialize(module);
          t_KalmanObserver::initialize(module);
          t_MeasurementDecorator::initialize(module);
          t_PythonAbstractCovarianceMatrixProvider::initialize(module);
          t_PythonAbstractKalmanEstimator::initialize(module);
          t_PythonCovarianceMatrixProvider::initialize(module);
          t_PythonKalmanEstimation::initialize(module);
          t_PythonKalmanObserver::initialize(module);
          t_PythonSemiAnalyticalProcess::initialize(module);
          t_SemiAnalyticalKalmanEstimator::initialize(module);
          t_SemiAnalyticalKalmanEstimatorBuilder::initialize(module);
          t_SemiAnalyticalKalmanModel::initialize(module);
          t_SemiAnalyticalMeasurementHandler::initialize(module);
          t_SemiAnalyticalProcess::initialize(module);
          t_SemiAnalyticalUnscentedKalmanEstimator::initialize(module);
          t_SemiAnalyticalUnscentedKalmanEstimatorBuilder::initialize(module);
          t_SemiAnalyticalUnscentedKalmanModel::initialize(module);
          t_UnivariateProcessNoise::initialize(module);
          t_UnscentedKalmanEstimator::initialize(module);
          t_UnscentedKalmanEstimatorBuilder::initialize(module);
          t_UnscentedKalmanModel::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace orekit {
    namespace files {

      namespace ccsds {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace general {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace ilrs {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace rinex {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace sinex {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace sp3 {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace stk {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "files");

        ccsds::__install__(module);
        general::__install__(module);
        ilrs::__install__(module);
        rinex::__install__(module);
        sinex::__install__(module);
        sp3::__install__(module);
        stk::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "files");

        ccsds::__initialize__(module);
        general::__initialize__(module);
        ilrs::__initialize__(module);
        rinex::__initialize__(module);
        sinex::__initialize__(module);
        sp3::__initialize__(module);
        stk::__initialize__(module);
      }
    }
  }
}


namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {

        namespace definitions {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ndm {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace section {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace utils {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "ccsds");

          definitions::__install__(module);
          ndm::__install__(module);
          section::__install__(module);
          utils::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "ccsds");

          definitions::__initialize__(module);
          ndm::__initialize__(module);
          section::__initialize__(module);
          utils::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/CenterName.h"
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/definitions/ModifiedFrame.h"
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/definitions/Units.h"
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.ccsds", "definitions");

            t_AdMethodType::install(module);
            t_BodyFacade::install(module);
            t_CelestialBodyFrame::install(module);
            t_CenterName::install(module);
            t_DutyCycleType::install(module);
            t_FrameFacade::install(module);
            t_ModifiedFrame::install(module);
            t_OdMethodFacade::install(module);
            t_OdMethodType::install(module);
            t_OnOff::install(module);
            t_OrbitRelativeFrame::install(module);
            t_PocMethodFacade::install(module);
            t_PocMethodType::install(module);
            t_SpacecraftBodyFrame::install(module);
            t_SpacecraftBodyFrame$BaseEquipment::install(module);
            t_TimeConverter::install(module);
            t_TimeSystem::install(module);
            t_Units::install(module);
            t_YesNoUnknown::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.ccsds", "definitions");

            t_AdMethodType::initialize(module);
            t_BodyFacade::initialize(module);
            t_CelestialBodyFrame::initialize(module);
            t_CenterName::initialize(module);
            t_DutyCycleType::initialize(module);
            t_FrameFacade::initialize(module);
            t_ModifiedFrame::initialize(module);
            t_OdMethodFacade::initialize(module);
            t_OdMethodType::initialize(module);
            t_OnOff::initialize(module);
            t_OrbitRelativeFrame::initialize(module);
            t_PocMethodFacade::initialize(module);
            t_PocMethodType::initialize(module);
            t_SpacecraftBodyFrame::initialize(module);
            t_SpacecraftBodyFrame$BaseEquipment::initialize(module);
            t_TimeConverter::initialize(module);
            t_TimeSystem::initialize(module);
            t_Units::initialize(module);
            t_YesNoUnknown::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/ndm/AbstractBuilder.h"
#include "org/orekit/files/ccsds/ndm/CommonPhysicalProperties.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/ndm/NdmParser.h"
#include "org/orekit/files/ccsds/ndm/NdmWriter.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/ndm/PythonAbstractBuilder.h"
#include "org/orekit/files/ccsds/ndm/PythonNdmConstituent.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          namespace adm {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace cdm {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace odm {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace tdm {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.ccsds", "ndm");

            t_AbstractBuilder::install(module);
            t_CommonPhysicalProperties::install(module);
            t_Ndm::install(module);
            t_NdmConstituent::install(module);
            t_NdmParser::install(module);
            t_NdmWriter::install(module);
            t_ParsedUnitsBehavior::install(module);
            t_ParserBuilder::install(module);
            t_PythonAbstractBuilder::install(module);
            t_PythonNdmConstituent::install(module);
            t_WriterBuilder::install(module);
            adm::__install__(module);
            cdm::__install__(module);
            odm::__install__(module);
            tdm::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.ccsds", "ndm");

            t_AbstractBuilder::initialize(module);
            t_CommonPhysicalProperties::initialize(module);
            t_Ndm::initialize(module);
            t_NdmConstituent::initialize(module);
            t_NdmParser::initialize(module);
            t_NdmWriter::initialize(module);
            t_ParsedUnitsBehavior::initialize(module);
            t_ParserBuilder::initialize(module);
            t_PythonAbstractBuilder::initialize(module);
            t_PythonNdmConstituent::initialize(module);
            t_WriterBuilder::initialize(module);
            adm::__initialize__(module);
            cdm::__initialize__(module);
            odm::__initialize__(module);
            tdm::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/orekit/files/ccsds/ndm/adm/PythonAdmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/RotationXmlTokenBuilder.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            namespace acm {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace aem {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace apm {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }

            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.ndm", "adm");

              t_AdmCommonMetadataKey::install(module);
              t_AdmCommonMetadataWriter::install(module);
              t_AdmHeader::install(module);
              t_AdmMetadata::install(module);
              t_AdmMetadataKey::install(module);
              t_AdmParser::install(module);
              t_AttitudeEndpoints::install(module);
              t_AttitudeType::install(module);
              t_PythonAdmParser::install(module);
              t_RotationXmlTokenBuilder::install(module);
              acm::__install__(module);
              aem::__install__(module);
              apm::__install__(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.ndm", "adm");

              t_AdmCommonMetadataKey::initialize(module);
              t_AdmCommonMetadataWriter::initialize(module);
              t_AdmHeader::initialize(module);
              t_AdmMetadata::initialize(module);
              t_AdmMetadataKey::initialize(module);
              t_AdmParser::initialize(module);
              t_AttitudeEndpoints::initialize(module);
              t_AttitudeType::initialize(module);
              t_PythonAdmParser::initialize(module);
              t_RotationXmlTokenBuilder::initialize(module);
              acm::__initialize__(module);
              aem::__initialize__(module);
              apm::__initialize__(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmData.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmSatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeState.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.adm", "acm");

                t_Acm::install(module);
                t_AcmData::install(module);
                t_AcmDataSubStructureKey::install(module);
                t_AcmElements::install(module);
                t_AcmMetadata::install(module);
                t_AcmMetadataKey::install(module);
                t_AcmParser::install(module);
                t_AcmSatelliteEphemeris::install(module);
                t_AcmWriter::install(module);
                t_AttitudeCovariance::install(module);
                t_AttitudeCovarianceHistory::install(module);
                t_AttitudeCovarianceHistoryMetadata::install(module);
                t_AttitudeCovarianceHistoryMetadataKey::install(module);
                t_AttitudeCovarianceType::install(module);
                t_AttitudeDetermination::install(module);
                t_AttitudeDeterminationKey::install(module);
                t_AttitudeDeterminationSensor::install(module);
                t_AttitudeDeterminationSensorKey::install(module);
                t_AttitudeElementsType::install(module);
                t_AttitudeManeuver::install(module);
                t_AttitudeManeuverKey::install(module);
                t_AttitudePhysicalProperties::install(module);
                t_AttitudePhysicalPropertiesKey::install(module);
                t_AttitudeState::install(module);
                t_AttitudeStateHistory::install(module);
                t_AttitudeStateHistoryMetadata::install(module);
                t_AttitudeStateHistoryMetadataKey::install(module);
                t_RateElementsType::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.adm", "acm");

                t_Acm::initialize(module);
                t_AcmData::initialize(module);
                t_AcmDataSubStructureKey::initialize(module);
                t_AcmElements::initialize(module);
                t_AcmMetadata::initialize(module);
                t_AcmMetadataKey::initialize(module);
                t_AcmParser::initialize(module);
                t_AcmSatelliteEphemeris::initialize(module);
                t_AcmWriter::initialize(module);
                t_AttitudeCovariance::initialize(module);
                t_AttitudeCovarianceHistory::initialize(module);
                t_AttitudeCovarianceHistoryMetadata::initialize(module);
                t_AttitudeCovarianceHistoryMetadataKey::initialize(module);
                t_AttitudeCovarianceType::initialize(module);
                t_AttitudeDetermination::initialize(module);
                t_AttitudeDeterminationKey::initialize(module);
                t_AttitudeDeterminationSensor::initialize(module);
                t_AttitudeDeterminationSensorKey::initialize(module);
                t_AttitudeElementsType::initialize(module);
                t_AttitudeManeuver::initialize(module);
                t_AttitudeManeuverKey::initialize(module);
                t_AttitudePhysicalProperties::initialize(module);
                t_AttitudePhysicalPropertiesKey::initialize(module);
                t_AttitudeState::initialize(module);
                t_AttitudeStateHistory::initialize(module);
                t_AttitudeStateHistoryMetadata::initialize(module);
                t_AttitudeStateHistoryMetadataKey::initialize(module);
                t_RateElementsType::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemData.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeEntryKey.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.adm", "aem");

                t_Aem::install(module);
                t_AemData::install(module);
                t_AemMetadata::install(module);
                t_AemMetadataKey::install(module);
                t_AemParser::install(module);
                t_AemSatelliteEphemeris::install(module);
                t_AemSegment::install(module);
                t_AemWriter::install(module);
                t_AttitudeEntryKey::install(module);
                t_AttitudeWriter::install(module);
                t_StreamingAemWriter::install(module);
                t_StreamingAemWriter$SegmentWriter::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.adm", "aem");

                t_Aem::initialize(module);
                t_AemData::initialize(module);
                t_AemMetadata::initialize(module);
                t_AemMetadataKey::initialize(module);
                t_AemParser::initialize(module);
                t_AemSatelliteEphemeris::initialize(module);
                t_AemSegment::initialize(module);
                t_AemWriter::initialize(module);
                t_AttitudeEntryKey::initialize(module);
                t_AttitudeWriter::initialize(module);
                t_StreamingAemWriter::initialize(module);
                t_StreamingAemWriter$SegmentWriter::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocity.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/AngularVelocityKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmData.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/EulerKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/InertiaKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ManeuverKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.adm", "apm");

                t_AngularVelocity::install(module);
                t_AngularVelocityKey::install(module);
                t_Apm::install(module);
                t_ApmData::install(module);
                t_ApmParser::install(module);
                t_ApmQuaternion::install(module);
                t_ApmQuaternionKey::install(module);
                t_ApmWriter::install(module);
                t_Euler::install(module);
                t_EulerKey::install(module);
                t_Inertia::install(module);
                t_InertiaKey::install(module);
                t_Maneuver::install(module);
                t_ManeuverKey::install(module);
                t_SpinStabilized::install(module);
                t_SpinStabilizedKey::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.adm", "apm");

                t_AngularVelocity::initialize(module);
                t_AngularVelocityKey::initialize(module);
                t_Apm::initialize(module);
                t_ApmData::initialize(module);
                t_ApmParser::initialize(module);
                t_ApmQuaternion::initialize(module);
                t_ApmQuaternionKey::initialize(module);
                t_ApmWriter::initialize(module);
                t_Euler::initialize(module);
                t_EulerKey::initialize(module);
                t_Inertia::initialize(module);
                t_InertiaKey::initialize(module);
                t_Maneuver::initialize(module);
                t_ManeuverKey::initialize(module);
                t_SpinStabilized::initialize(module);
                t_SpinStabilizedKey::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderProcessingState.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMessageWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.ndm", "cdm");

              t_AdditionalCovarianceMetadata::install(module);
              t_AdditionalCovarianceMetadataKey::install(module);
              t_AdditionalParameters::install(module);
              t_AdditionalParametersKey::install(module);
              t_AdditionalParametersWriter::install(module);
              t_AltCovarianceType::install(module);
              t_Cdm::install(module);
              t_CdmData::install(module);
              t_CdmHeader::install(module);
              t_CdmHeaderKey::install(module);
              t_CdmHeaderProcessingState::install(module);
              t_CdmMessageWriter::install(module);
              t_CdmMetadata::install(module);
              t_CdmMetadataKey::install(module);
              t_CdmMetadataWriter::install(module);
              t_CdmParser::install(module);
              t_CdmRelativeMetadata::install(module);
              t_CdmRelativeMetadataKey::install(module);
              t_CdmSegment::install(module);
              t_CdmWriter::install(module);
              t_CovarianceMethod::install(module);
              t_Maneuvrable::install(module);
              t_ODParameters::install(module);
              t_ODParametersKey::install(module);
              t_ODParametersWriter::install(module);
              t_RTNCovariance::install(module);
              t_RTNCovarianceKey::install(module);
              t_RTNCovarianceWriter::install(module);
              t_ScreenType::install(module);
              t_ScreenVolumeFrame::install(module);
              t_ScreenVolumeShape::install(module);
              t_SigmaEigenvectorsCovariance::install(module);
              t_SigmaEigenvectorsCovarianceKey::install(module);
              t_StateVector::install(module);
              t_StateVectorKey::install(module);
              t_StateVectorWriter::install(module);
              t_XYZCovariance::install(module);
              t_XYZCovarianceKey::install(module);
              t_XmlSubStructureKey::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.ndm", "cdm");

              t_AdditionalCovarianceMetadata::initialize(module);
              t_AdditionalCovarianceMetadataKey::initialize(module);
              t_AdditionalParameters::initialize(module);
              t_AdditionalParametersKey::initialize(module);
              t_AdditionalParametersWriter::initialize(module);
              t_AltCovarianceType::initialize(module);
              t_Cdm::initialize(module);
              t_CdmData::initialize(module);
              t_CdmHeader::initialize(module);
              t_CdmHeaderKey::initialize(module);
              t_CdmHeaderProcessingState::initialize(module);
              t_CdmMessageWriter::initialize(module);
              t_CdmMetadata::initialize(module);
              t_CdmMetadataKey::initialize(module);
              t_CdmMetadataWriter::initialize(module);
              t_CdmParser::initialize(module);
              t_CdmRelativeMetadata::initialize(module);
              t_CdmRelativeMetadataKey::initialize(module);
              t_CdmSegment::initialize(module);
              t_CdmWriter::initialize(module);
              t_CovarianceMethod::initialize(module);
              t_Maneuvrable::initialize(module);
              t_ODParameters::initialize(module);
              t_ODParametersKey::initialize(module);
              t_ODParametersWriter::initialize(module);
              t_RTNCovariance::initialize(module);
              t_RTNCovarianceKey::initialize(module);
              t_RTNCovarianceWriter::initialize(module);
              t_ScreenType::initialize(module);
              t_ScreenVolumeFrame::initialize(module);
              t_ScreenVolumeShape::initialize(module);
              t_SigmaEigenvectorsCovariance::initialize(module);
              t_SigmaEigenvectorsCovarianceKey::initialize(module);
              t_StateVector::initialize(module);
              t_StateVectorKey::initialize(module);
              t_StateVectorWriter::initialize(module);
              t_XYZCovariance::initialize(module);
              t_XYZCovarianceKey::initialize(module);
              t_XmlSubStructureKey::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/PythonOdmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorKey.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefinedWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            namespace ocm {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace oem {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace omm {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace opm {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }

            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.ndm", "odm");

              t_CartesianCovariance::install(module);
              t_CartesianCovarianceKey::install(module);
              t_CartesianCovarianceWriter::install(module);
              t_CommonMetadataKey::install(module);
              t_CommonMetadataWriter::install(module);
              t_KeplerianElements::install(module);
              t_KeplerianElementsKey::install(module);
              t_OdmCommonMetadata::install(module);
              t_OdmHeader::install(module);
              t_OdmMetadata::install(module);
              t_OdmMetadataKey::install(module);
              t_OdmParser::install(module);
              t_PythonOdmParser::install(module);
              t_SpacecraftParameters::install(module);
              t_SpacecraftParametersKey::install(module);
              t_SpacecraftParametersWriter::install(module);
              t_StateVector::install(module);
              t_StateVectorKey::install(module);
              t_StateVectorWriter::install(module);
              t_UserDefined::install(module);
              t_UserDefinedWriter::install(module);
              ocm::__install__(module);
              oem::__install__(module);
              omm::__install__(module);
              opm::__install__(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.ndm", "odm");

              t_CartesianCovariance::initialize(module);
              t_CartesianCovarianceKey::initialize(module);
              t_CartesianCovarianceWriter::initialize(module);
              t_CommonMetadataKey::initialize(module);
              t_CommonMetadataWriter::initialize(module);
              t_KeplerianElements::initialize(module);
              t_KeplerianElementsKey::initialize(module);
              t_OdmCommonMetadata::initialize(module);
              t_OdmHeader::initialize(module);
              t_OdmMetadata::initialize(module);
              t_OdmMetadataKey::initialize(module);
              t_OdmParser::initialize(module);
              t_PythonOdmParser::initialize(module);
              t_SpacecraftParameters::initialize(module);
              t_SpacecraftParametersKey::initialize(module);
              t_SpacecraftParametersWriter::initialize(module);
              t_StateVector::initialize(module);
              t_StateVectorKey::initialize(module);
              t_StateVectorWriter::initialize(module);
              t_UserDefined::initialize(module);
              t_UserDefinedWriter::initialize(module);
              ocm::__initialize__(module);
              oem::__initialize__(module);
              omm::__initialize__(module);
              opm::__initialize__(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/ndm/odm/ocm/EphemerisOcmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmData.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OpsStatus.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitElementsType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/StreamingOcmWriter$BlockWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryState.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.odm", "ocm");

                t_EphemerisOcmWriter::install(module);
                t_ManBasis::install(module);
                t_ManeuverFieldType::install(module);
                t_ObjectType::install(module);
                t_Ocm::install(module);
                t_OcmData::install(module);
                t_OcmDataSubStructureKey::install(module);
                t_OcmElements::install(module);
                t_OcmMetadata::install(module);
                t_OcmMetadataKey::install(module);
                t_OcmParser::install(module);
                t_OcmSatelliteEphemeris::install(module);
                t_OcmWriter::install(module);
                t_OpsStatus::install(module);
                t_OrbitCategory::install(module);
                t_OrbitCovariance::install(module);
                t_OrbitCovarianceHistory::install(module);
                t_OrbitCovarianceHistoryMetadata::install(module);
                t_OrbitCovarianceHistoryMetadataKey::install(module);
                t_OrbitDetermination::install(module);
                t_OrbitDeterminationKey::install(module);
                t_OrbitElementsType::install(module);
                t_OrbitManeuver::install(module);
                t_OrbitManeuverHistory::install(module);
                t_OrbitManeuverHistoryMetadata::install(module);
                t_OrbitManeuverHistoryMetadataKey::install(module);
                t_OrbitPhysicalProperties::install(module);
                t_OrbitPhysicalPropertiesKey::install(module);
                t_Ordering::install(module);
                t_Perturbations::install(module);
                t_PerturbationsKey::install(module);
                t_ShadowModel::install(module);
                t_StreamingOcmWriter::install(module);
                t_StreamingOcmWriter$BlockWriter::install(module);
                t_TrajectoryState::install(module);
                t_TrajectoryStateHistory::install(module);
                t_TrajectoryStateHistoryMetadata::install(module);
                t_TrajectoryStateHistoryMetadataKey::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.odm", "ocm");

                t_EphemerisOcmWriter::initialize(module);
                t_ManBasis::initialize(module);
                t_ManeuverFieldType::initialize(module);
                t_ObjectType::initialize(module);
                t_Ocm::initialize(module);
                t_OcmData::initialize(module);
                t_OcmDataSubStructureKey::initialize(module);
                t_OcmElements::initialize(module);
                t_OcmMetadata::initialize(module);
                t_OcmMetadataKey::initialize(module);
                t_OcmParser::initialize(module);
                t_OcmSatelliteEphemeris::initialize(module);
                t_OcmWriter::initialize(module);
                t_OpsStatus::initialize(module);
                t_OrbitCategory::initialize(module);
                t_OrbitCovariance::initialize(module);
                t_OrbitCovarianceHistory::initialize(module);
                t_OrbitCovarianceHistoryMetadata::initialize(module);
                t_OrbitCovarianceHistoryMetadataKey::initialize(module);
                t_OrbitDetermination::initialize(module);
                t_OrbitDeterminationKey::initialize(module);
                t_OrbitElementsType::initialize(module);
                t_OrbitManeuver::initialize(module);
                t_OrbitManeuverHistory::initialize(module);
                t_OrbitManeuverHistoryMetadata::initialize(module);
                t_OrbitManeuverHistoryMetadataKey::initialize(module);
                t_OrbitPhysicalProperties::initialize(module);
                t_OrbitPhysicalPropertiesKey::initialize(module);
                t_Ordering::initialize(module);
                t_Perturbations::initialize(module);
                t_PerturbationsKey::initialize(module);
                t_ShadowModel::initialize(module);
                t_StreamingOcmWriter::initialize(module);
                t_StreamingOcmWriter$BlockWriter::initialize(module);
                t_TrajectoryState::initialize(module);
                t_TrajectoryStateHistory::initialize(module);
                t_TrajectoryStateHistoryMetadata::initialize(module);
                t_TrajectoryStateHistoryMetadataKey::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/ndm/odm/oem/EphemerisOemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemData.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.odm", "oem");

                t_EphemerisOemWriter::install(module);
                t_InterpolationMethod::install(module);
                t_Oem::install(module);
                t_OemData::install(module);
                t_OemMetadata::install(module);
                t_OemMetadataKey::install(module);
                t_OemParser::install(module);
                t_OemSatelliteEphemeris::install(module);
                t_OemSegment::install(module);
                t_OemWriter::install(module);
                t_StreamingOemWriter::install(module);
                t_StreamingOemWriter$SegmentWriter::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.odm", "oem");

                t_EphemerisOemWriter::initialize(module);
                t_InterpolationMethod::initialize(module);
                t_Oem::initialize(module);
                t_OemData::initialize(module);
                t_OemMetadata::initialize(module);
                t_OemMetadataKey::initialize(module);
                t_OemParser::initialize(module);
                t_OemSatelliteEphemeris::initialize(module);
                t_OemSegment::initialize(module);
                t_OemWriter::initialize(module);
                t_StreamingOemWriter::initialize(module);
                t_StreamingOemWriter$SegmentWriter::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmData.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.odm", "omm");

                t_Omm::install(module);
                t_OmmData::install(module);
                t_OmmMetadata::install(module);
                t_OmmMetadataKey::install(module);
                t_OmmParser::install(module);
                t_OmmTle::install(module);
                t_OmmTleKey::install(module);
                t_OmmWriter::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.odm", "omm");

                t_Omm::initialize(module);
                t_OmmData::initialize(module);
                t_OmmMetadata::initialize(module);
                t_OmmMetadataKey::initialize(module);
                t_OmmParser::initialize(module);
                t_OmmTle::initialize(module);
                t_OmmTleKey::initialize(module);
                t_OmmWriter::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/ManeuverKey.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmData.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmParser.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.odm", "opm");

                t_Maneuver::install(module);
                t_ManeuverKey::install(module);
                t_Opm::install(module);
                t_OpmData::install(module);
                t_OpmParser::install(module);
                t_OpmWriter::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.files.ccsds.ndm.odm", "opm");

                t_Maneuver::initialize(module);
                t_ManeuverKey::initialize(module);
                t_Opm::initialize(module);
                t_OpmData::initialize(module);
                t_OpmParser::initialize(module);
                t_OpmWriter::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/ndm/tdm/AngleType.h"
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "org/orekit/files/ccsds/ndm/tdm/IdentityConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "org/orekit/files/ccsds/ndm/tdm/Observation.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/files/ccsds/ndm/tdm/PythonRangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnits.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmDataKey.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmWriter.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.ndm", "tdm");

              t_AngleType::install(module);
              t_CorrectionApplied::install(module);
              t_DataQuality::install(module);
              t_IdentityConverter::install(module);
              t_IntegrationReference::install(module);
              t_Observation::install(module);
              t_ObservationType::install(module);
              t_ObservationsBlock::install(module);
              t_PythonRangeUnitsConverter::install(module);
              t_RangeMode::install(module);
              t_RangeUnits::install(module);
              t_RangeUnitsConverter::install(module);
              t_Tdm::install(module);
              t_TdmDataKey::install(module);
              t_TdmHeader::install(module);
              t_TdmMetadata::install(module);
              t_TdmMetadataKey::install(module);
              t_TdmParser::install(module);
              t_TdmWriter::install(module);
              t_TimetagReference::install(module);
              t_TrackingMode::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.ndm", "tdm");

              t_AngleType::initialize(module);
              t_CorrectionApplied::initialize(module);
              t_DataQuality::initialize(module);
              t_IdentityConverter::initialize(module);
              t_IntegrationReference::initialize(module);
              t_Observation::initialize(module);
              t_ObservationType::initialize(module);
              t_ObservationsBlock::initialize(module);
              t_PythonRangeUnitsConverter::initialize(module);
              t_RangeMode::initialize(module);
              t_RangeUnits::initialize(module);
              t_RangeUnitsConverter::initialize(module);
              t_Tdm::initialize(module);
              t_TdmDataKey::initialize(module);
              t_TdmHeader::initialize(module);
              t_TdmMetadata::initialize(module);
              t_TdmMetadataKey::initialize(module);
              t_TdmParser::initialize(module);
              t_TdmWriter::initialize(module);
              t_TimetagReference::initialize(module);
              t_TrackingMode::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/section/AbstractWriter.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/section/HeaderKey.h"
#include "org/orekit/files/ccsds/section/HeaderProcessingState.h"
#include "org/orekit/files/ccsds/section/KvnStructureKey.h"
#include "org/orekit/files/ccsds/section/KvnStructureProcessingState.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "org/orekit/files/ccsds/section/MetadataKey.h"
#include "org/orekit/files/ccsds/section/PyhonData.h"
#include "org/orekit/files/ccsds/section/PythonAbstractWriter.h"
#include "org/orekit/files/ccsds/section/PythonSection.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/section/XmlStructureKey.h"
#include "org/orekit/files/ccsds/section/XmlStructureProcessingState.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.ccsds", "section");

            t_AbstractWriter::install(module);
            t_CommentsContainer::install(module);
            t_Data::install(module);
            t_Header::install(module);
            t_HeaderKey::install(module);
            t_HeaderProcessingState::install(module);
            t_KvnStructureKey::install(module);
            t_KvnStructureProcessingState::install(module);
            t_Metadata::install(module);
            t_MetadataKey::install(module);
            t_PyhonData::install(module);
            t_PythonAbstractWriter::install(module);
            t_PythonSection::install(module);
            t_Section::install(module);
            t_Segment::install(module);
            t_XmlStructureKey::install(module);
            t_XmlStructureProcessingState::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.ccsds", "section");

            t_AbstractWriter::initialize(module);
            t_CommentsContainer::initialize(module);
            t_Data::initialize(module);
            t_Header::initialize(module);
            t_HeaderKey::initialize(module);
            t_HeaderProcessingState::initialize(module);
            t_KvnStructureKey::initialize(module);
            t_KvnStructureProcessingState::initialize(module);
            t_Metadata::initialize(module);
            t_MetadataKey::initialize(module);
            t_PyhonData::initialize(module);
            t_PythonAbstractWriter::initialize(module);
            t_PythonSection::initialize(module);
            t_Section::initialize(module);
            t_Segment::initialize(module);
            t_XmlStructureKey::initialize(module);
            t_XmlStructureProcessingState::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {

          namespace generation {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace lexical {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace parsing {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.ccsds", "utils");

            t_ContextBinding::install(module);
            t_FileFormat::install(module);
            generation::__install__(module);
            lexical::__install__(module);
            parsing::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.ccsds", "utils");

            t_ContextBinding::initialize(module);
            t_FileFormat::initialize(module);
            generation::__initialize__(module);
            lexical::__initialize__(module);
            parsing::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/utils/generation/AbstractGenerator.h"
#include "org/orekit/files/ccsds/utils/generation/AbstractMessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/utils/generation/KvnGenerator.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/PythonAbstractGenerator.h"
#include "org/orekit/files/ccsds/utils/generation/PythonAbstractMessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/PythonGenerator.h"
#include "org/orekit/files/ccsds/utils/generation/PythonMessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/XmlGenerator.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.utils", "generation");

              t_AbstractGenerator::install(module);
              t_AbstractMessageWriter::install(module);
              t_Generator::install(module);
              t_KvnGenerator::install(module);
              t_MessageWriter::install(module);
              t_PythonAbstractGenerator::install(module);
              t_PythonAbstractMessageWriter::install(module);
              t_PythonGenerator::install(module);
              t_PythonMessageWriter::install(module);
              t_XmlGenerator::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.utils", "generation");

              t_AbstractGenerator::initialize(module);
              t_AbstractMessageWriter::initialize(module);
              t_Generator::initialize(module);
              t_KvnGenerator::initialize(module);
              t_MessageWriter::initialize(module);
              t_PythonAbstractGenerator::initialize(module);
              t_PythonAbstractMessageWriter::initialize(module);
              t_PythonGenerator::initialize(module);
              t_PythonMessageWriter::initialize(module);
              t_XmlGenerator::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/utils/lexical/KvnLexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzerSelector.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageVersionXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$BooleanConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$FrameConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleArrayConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedStringConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonLexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonMessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/RegularXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "org/orekit/files/ccsds/utils/lexical/UserDefinedXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlLexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.utils", "lexical");

              t_KvnLexicalAnalyzer::install(module);
              t_LexicalAnalyzer::install(module);
              t_LexicalAnalyzerSelector::install(module);
              t_MessageParser::install(module);
              t_MessageVersionXmlTokenBuilder::install(module);
              t_ParseToken::install(module);
              t_ParseToken$BooleanConsumer::install(module);
              t_ParseToken$CenterConsumer::install(module);
              t_ParseToken$CenterListConsumer::install(module);
              t_ParseToken$CharConsumer::install(module);
              t_ParseToken$DateConsumer::install(module);
              t_ParseToken$DoubleArrayConsumer::install(module);
              t_ParseToken$DoubleConsumer::install(module);
              t_ParseToken$DoublyIndexedDoubleConsumer::install(module);
              t_ParseToken$EnumConsumer::install(module);
              t_ParseToken$EnumListConsumer::install(module);
              t_ParseToken$FrameConsumer::install(module);
              t_ParseToken$IndexedDoubleArrayConsumer::install(module);
              t_ParseToken$IndexedDoubleConsumer::install(module);
              t_ParseToken$IndexedIntConsumer::install(module);
              t_ParseToken$IndexedStringConsumer::install(module);
              t_ParseToken$IntConsumer::install(module);
              t_ParseToken$IntegerArrayConsumer::install(module);
              t_ParseToken$LabeledDoubleConsumer::install(module);
              t_ParseToken$ManeuvrableConsumer::install(module);
              t_ParseToken$RotationOrderConsumer::install(module);
              t_ParseToken$StringConsumer::install(module);
              t_ParseToken$StringListConsumer::install(module);
              t_ParseToken$TimeSystemConsumer::install(module);
              t_ParseToken$UnitListConsumer::install(module);
              t_ParseToken$VectorConsumer::install(module);
              t_PythonLexicalAnalyzer::install(module);
              t_PythonMessageParser::install(module);
              t_PythonXmlTokenBuilder::install(module);
              t_RegularXmlTokenBuilder::install(module);
              t_TokenType::install(module);
              t_UserDefinedXmlTokenBuilder::install(module);
              t_XmlLexicalAnalyzer::install(module);
              t_XmlTokenBuilder::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.utils", "lexical");

              t_KvnLexicalAnalyzer::initialize(module);
              t_LexicalAnalyzer::initialize(module);
              t_LexicalAnalyzerSelector::initialize(module);
              t_MessageParser::initialize(module);
              t_MessageVersionXmlTokenBuilder::initialize(module);
              t_ParseToken::initialize(module);
              t_ParseToken$BooleanConsumer::initialize(module);
              t_ParseToken$CenterConsumer::initialize(module);
              t_ParseToken$CenterListConsumer::initialize(module);
              t_ParseToken$CharConsumer::initialize(module);
              t_ParseToken$DateConsumer::initialize(module);
              t_ParseToken$DoubleArrayConsumer::initialize(module);
              t_ParseToken$DoubleConsumer::initialize(module);
              t_ParseToken$DoublyIndexedDoubleConsumer::initialize(module);
              t_ParseToken$EnumConsumer::initialize(module);
              t_ParseToken$EnumListConsumer::initialize(module);
              t_ParseToken$FrameConsumer::initialize(module);
              t_ParseToken$IndexedDoubleArrayConsumer::initialize(module);
              t_ParseToken$IndexedDoubleConsumer::initialize(module);
              t_ParseToken$IndexedIntConsumer::initialize(module);
              t_ParseToken$IndexedStringConsumer::initialize(module);
              t_ParseToken$IntConsumer::initialize(module);
              t_ParseToken$IntegerArrayConsumer::initialize(module);
              t_ParseToken$LabeledDoubleConsumer::initialize(module);
              t_ParseToken$ManeuvrableConsumer::initialize(module);
              t_ParseToken$RotationOrderConsumer::initialize(module);
              t_ParseToken$StringConsumer::initialize(module);
              t_ParseToken$StringListConsumer::initialize(module);
              t_ParseToken$TimeSystemConsumer::initialize(module);
              t_ParseToken$UnitListConsumer::initialize(module);
              t_ParseToken$VectorConsumer::initialize(module);
              t_PythonLexicalAnalyzer::initialize(module);
              t_PythonMessageParser::initialize(module);
              t_PythonXmlTokenBuilder::initialize(module);
              t_RegularXmlTokenBuilder::initialize(module);
              t_TokenType::initialize(module);
              t_UserDefinedXmlTokenBuilder::initialize(module);
              t_XmlLexicalAnalyzer::initialize(module);
              t_XmlTokenBuilder::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractMessageParser.h"
#include "org/orekit/files/ccsds/utils/parsing/ErrorState.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/parsing/PythonAbstractConstituentParser.h"
#include "org/orekit/files/ccsds/utils/parsing/PythonAbstractMessageParser.h"
#include "org/orekit/files/ccsds/utils/parsing/PythonProcessingState.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.utils", "parsing");

              t_AbstractConstituentParser::install(module);
              t_AbstractMessageParser::install(module);
              t_ErrorState::install(module);
              t_ProcessingState::install(module);
              t_PythonAbstractConstituentParser::install(module);
              t_PythonAbstractMessageParser::install(module);
              t_PythonProcessingState::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.ccsds.utils", "parsing");

              t_AbstractConstituentParser::initialize(module);
              t_AbstractMessageParser::initialize(module);
              t_ErrorState::initialize(module);
              t_ProcessingState::initialize(module);
              t_PythonAbstractConstituentParser::initialize(module);
              t_PythonAbstractMessageParser::initialize(module);
              t_PythonProcessingState::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris.h"
#include "org/orekit/files/general/OrekitEphemerisFile.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisFile.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisFileParser.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisFileWriter.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisSegment.h"
#include "org/orekit/files/general/PythonEphemerisFile.h"
#include "org/orekit/files/general/PythonEphemerisFileParser.h"
#include "org/orekit/files/general/PythonEphemerisFileWriter.h"
#include "org/orekit/files/general/PythonSatelliteAttitudeEphemeris.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "general");

          t_AttitudeEphemerisFile::install(module);
          t_AttitudeEphemerisFile$AttitudeEphemerisSegment::install(module);
          t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::install(module);
          t_AttitudeEphemerisFileParser::install(module);
          t_AttitudeEphemerisFileWriter::install(module);
          t_EphemerisFile::install(module);
          t_EphemerisFile$EphemerisSegment::install(module);
          t_EphemerisFile$SatelliteEphemeris::install(module);
          t_EphemerisFileParser::install(module);
          t_EphemerisFileWriter::install(module);
          t_OrekitAttitudeEphemerisFile::install(module);
          t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::install(module);
          t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::install(module);
          t_OrekitEphemerisFile::install(module);
          t_OrekitEphemerisFile$OrekitEphemerisSegment::install(module);
          t_OrekitEphemerisFile$OrekitSatelliteEphemeris::install(module);
          t_PythonAttitudeEphemerisFile::install(module);
          t_PythonAttitudeEphemerisFileParser::install(module);
          t_PythonAttitudeEphemerisFileWriter::install(module);
          t_PythonAttitudeEphemerisSegment::install(module);
          t_PythonEphemerisFile::install(module);
          t_PythonEphemerisFileParser::install(module);
          t_PythonEphemerisFileWriter::install(module);
          t_PythonSatelliteAttitudeEphemeris::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "general");

          t_AttitudeEphemerisFile::initialize(module);
          t_AttitudeEphemerisFile$AttitudeEphemerisSegment::initialize(module);
          t_AttitudeEphemerisFile$SatelliteAttitudeEphemeris::initialize(module);
          t_AttitudeEphemerisFileParser::initialize(module);
          t_AttitudeEphemerisFileWriter::initialize(module);
          t_EphemerisFile::initialize(module);
          t_EphemerisFile$EphemerisSegment::initialize(module);
          t_EphemerisFile$SatelliteEphemeris::initialize(module);
          t_EphemerisFileParser::initialize(module);
          t_EphemerisFileWriter::initialize(module);
          t_OrekitAttitudeEphemerisFile::initialize(module);
          t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initialize(module);
          t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initialize(module);
          t_OrekitEphemerisFile::initialize(module);
          t_OrekitEphemerisFile$OrekitEphemerisSegment::initialize(module);
          t_OrekitEphemerisFile$OrekitSatelliteEphemeris::initialize(module);
          t_PythonAttitudeEphemerisFile::initialize(module);
          t_PythonAttitudeEphemerisFileParser::initialize(module);
          t_PythonAttitudeEphemerisFileWriter::initialize(module);
          t_PythonAttitudeEphemerisSegment::initialize(module);
          t_PythonEphemerisFile::initialize(module);
          t_PythonEphemerisFileParser::initialize(module);
          t_PythonEphemerisFileWriter::initialize(module);
          t_PythonSatelliteAttitudeEphemeris::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/files/ilrs/CPF.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/orekit/files/ilrs/CPFParser.h"
#include "org/orekit/files/ilrs/CPFWriter.h"
#include "org/orekit/files/ilrs/CRD.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "org/orekit/files/ilrs/CRD$CRDDataBlock.h"
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "org/orekit/files/ilrs/CRD$FrRangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/files/ilrs/CRD$NptRangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "org/orekit/files/ilrs/CRDConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$LaserConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SoftwareConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$SystemConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TimingSystemConfiguration.h"
#include "org/orekit/files/ilrs/CRDConfiguration$TransponderConfiguration.h"
#include "org/orekit/files/ilrs/CRDHeader.h"
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"
#include "org/orekit/files/ilrs/CRDHeader$RangeType.h"
#include "org/orekit/files/ilrs/CRDParser.h"
#include "org/orekit/files/ilrs/ILRSHeader.h"
#include "org/orekit/files/ilrs/PythonILRSHeader.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$Segment.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "ilrs");

          t_CPF::install(module);
          t_CPF$CPFCoordinate::install(module);
          t_CPF$CPFEphemeris::install(module);
          t_CPFHeader::install(module);
          t_CPFParser::install(module);
          t_CPFWriter::install(module);
          t_CRD::install(module);
          t_CRD$AnglesMeasurement::install(module);
          t_CRD$CRDDataBlock::install(module);
          t_CRD$Calibration::install(module);
          t_CRD$CalibrationDetail::install(module);
          t_CRD$FrRangeMeasurement::install(module);
          t_CRD$Meteo::install(module);
          t_CRD$MeteorologicalMeasurement::install(module);
          t_CRD$NptRangeMeasurement::install(module);
          t_CRD$RangeMeasurement::install(module);
          t_CRD$RangeSupplement::install(module);
          t_CRD$SessionStatistics::install(module);
          t_CRDConfiguration::install(module);
          t_CRDConfiguration$BaseConfiguration::install(module);
          t_CRDConfiguration$CalibrationTargetConfiguration::install(module);
          t_CRDConfiguration$DetectorConfiguration::install(module);
          t_CRDConfiguration$LaserConfiguration::install(module);
          t_CRDConfiguration$MeteorologicalConfiguration::install(module);
          t_CRDConfiguration$SoftwareConfiguration::install(module);
          t_CRDConfiguration$SystemConfiguration::install(module);
          t_CRDConfiguration$TimingSystemConfiguration::install(module);
          t_CRDConfiguration$TransponderConfiguration::install(module);
          t_CRDHeader::install(module);
          t_CRDHeader$DataType::install(module);
          t_CRDHeader$RangeType::install(module);
          t_CRDParser::install(module);
          t_ILRSHeader::install(module);
          t_PythonILRSHeader::install(module);
          t_StreamingCpfWriter::install(module);
          t_StreamingCpfWriter$HeaderLineWriter::install(module);
          t_StreamingCpfWriter$Segment::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "ilrs");

          t_CPF::initialize(module);
          t_CPF$CPFCoordinate::initialize(module);
          t_CPF$CPFEphemeris::initialize(module);
          t_CPFHeader::initialize(module);
          t_CPFParser::initialize(module);
          t_CPFWriter::initialize(module);
          t_CRD::initialize(module);
          t_CRD$AnglesMeasurement::initialize(module);
          t_CRD$CRDDataBlock::initialize(module);
          t_CRD$Calibration::initialize(module);
          t_CRD$CalibrationDetail::initialize(module);
          t_CRD$FrRangeMeasurement::initialize(module);
          t_CRD$Meteo::initialize(module);
          t_CRD$MeteorologicalMeasurement::initialize(module);
          t_CRD$NptRangeMeasurement::initialize(module);
          t_CRD$RangeMeasurement::initialize(module);
          t_CRD$RangeSupplement::initialize(module);
          t_CRD$SessionStatistics::initialize(module);
          t_CRDConfiguration::initialize(module);
          t_CRDConfiguration$BaseConfiguration::initialize(module);
          t_CRDConfiguration$CalibrationTargetConfiguration::initialize(module);
          t_CRDConfiguration$DetectorConfiguration::initialize(module);
          t_CRDConfiguration$LaserConfiguration::initialize(module);
          t_CRDConfiguration$MeteorologicalConfiguration::initialize(module);
          t_CRDConfiguration$SoftwareConfiguration::initialize(module);
          t_CRDConfiguration$SystemConfiguration::initialize(module);
          t_CRDConfiguration$TimingSystemConfiguration::initialize(module);
          t_CRDConfiguration$TransponderConfiguration::initialize(module);
          t_CRDHeader::initialize(module);
          t_CRDHeader$DataType::initialize(module);
          t_CRDHeader$RangeType::initialize(module);
          t_CRDParser::initialize(module);
          t_ILRSHeader::initialize(module);
          t_PythonILRSHeader::initialize(module);
          t_StreamingCpfWriter::initialize(module);
          t_StreamingCpfWriter$HeaderLineWriter::initialize(module);
          t_StreamingCpfWriter$Segment::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "org/orekit/files/rinex/HatanakaCompressFilter.h"
#include "org/orekit/files/rinex/RinexFile.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        namespace clock {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace navigation {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace observation {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace section {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace utils {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "rinex");

          t_AppliedDCBS::install(module);
          t_AppliedPCVS::install(module);
          t_HatanakaCompressFilter::install(module);
          t_RinexFile::install(module);
          clock::__install__(module);
          navigation::__install__(module);
          observation::__install__(module);
          section::__install__(module);
          utils::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "rinex");

          t_AppliedDCBS::initialize(module);
          t_AppliedPCVS::initialize(module);
          t_HatanakaCompressFilter::initialize(module);
          t_RinexFile::initialize(module);
          clock::__initialize__(module);
          navigation::__initialize__(module);
          observation::__initialize__(module);
          section::__initialize__(module);
          utils::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataLine.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "org/orekit/files/rinex/clock/RinexClock$Receiver.h"
#include "org/orekit/files/rinex/clock/RinexClock$ReferenceClock.h"
#include "org/orekit/files/rinex/clock/RinexClockParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.rinex", "clock");

            t_RinexClock::install(module);
            t_RinexClock$ClockDataLine::install(module);
            t_RinexClock$ClockDataType::install(module);
            t_RinexClock$Receiver::install(module);
            t_RinexClock$ReferenceClock::install(module);
            t_RinexClockParser::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.rinex", "clock");

            t_RinexClock::initialize(module);
            t_RinexClock$ClockDataLine::initialize(module);
            t_RinexClock$ClockDataType::initialize(module);
            t_RinexClock$Receiver::initialize(module);
            t_RinexClock$ReferenceClock::initialize(module);
            t_RinexClockParser::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/files/rinex/navigation/EarthOrientationParameterMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphereBDGIMMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphereBaseMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphereKlobucharMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphereNequickGMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "org/orekit/files/rinex/navigation/RinexNavigation.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationHeader.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationParser.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "org/orekit/files/rinex/navigation/SystemTimeOffsetMessage.h"
#include "org/orekit/files/rinex/navigation/TimeSystemCorrection.h"
#include "org/orekit/files/rinex/navigation/TypeSvMessage.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.rinex", "navigation");

            t_EarthOrientationParameterMessage::install(module);
            t_IonosphereBDGIMMessage::install(module);
            t_IonosphereBaseMessage::install(module);
            t_IonosphereKlobucharMessage::install(module);
            t_IonosphereNequickGMessage::install(module);
            t_IonosphericCorrectionType::install(module);
            t_RegionCode::install(module);
            t_RinexNavigation::install(module);
            t_RinexNavigationHeader::install(module);
            t_RinexNavigationParser::install(module);
            t_SbasId::install(module);
            t_SystemTimeOffsetMessage::install(module);
            t_TimeSystemCorrection::install(module);
            t_TypeSvMessage::install(module);
            t_UtcId::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.rinex", "navigation");

            t_EarthOrientationParameterMessage::initialize(module);
            t_IonosphereBDGIMMessage::initialize(module);
            t_IonosphereBaseMessage::initialize(module);
            t_IonosphereKlobucharMessage::initialize(module);
            t_IonosphereNequickGMessage::initialize(module);
            t_IonosphericCorrectionType::initialize(module);
            t_RegionCode::initialize(module);
            t_RinexNavigation::initialize(module);
            t_RinexNavigationHeader::initialize(module);
            t_RinexNavigationParser::initialize(module);
            t_SbasId::initialize(module);
            t_SystemTimeOffsetMessage::initialize(module);
            t_TimeSystemCorrection::initialize(module);
            t_TypeSvMessage::initialize(module);
            t_UtcId::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/files/rinex/observation/GlonassSatelliteChannel.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/files/rinex/observation/PhaseShiftCorrection.h"
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "org/orekit/files/rinex/observation/RinexObservationParser.h"
#include "org/orekit/files/rinex/observation/RinexObservationWriter.h"
#include "org/orekit/files/rinex/observation/ScaleFactorCorrection.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.rinex", "observation");

            t_GlonassSatelliteChannel::install(module);
            t_ObservationData::install(module);
            t_ObservationDataSet::install(module);
            t_PhaseShiftCorrection::install(module);
            t_RinexObservation::install(module);
            t_RinexObservationHeader::install(module);
            t_RinexObservationParser::install(module);
            t_RinexObservationWriter::install(module);
            t_ScaleFactorCorrection::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.rinex", "observation");

            t_GlonassSatelliteChannel::initialize(module);
            t_ObservationData::initialize(module);
            t_ObservationDataSet::initialize(module);
            t_PhaseShiftCorrection::initialize(module);
            t_RinexObservation::initialize(module);
            t_RinexObservationHeader::initialize(module);
            t_RinexObservationParser::initialize(module);
            t_RinexObservationWriter::initialize(module);
            t_ScaleFactorCorrection::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "org/orekit/files/rinex/section/RinexLabels.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.rinex", "section");

            t_RinexBaseHeader::install(module);
            t_RinexComment::install(module);
            t_RinexLabels::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.rinex", "section");

            t_RinexBaseHeader::initialize(module);
            t_RinexComment::initialize(module);
            t_RinexLabels::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/files/rinex/utils/RinexFileType.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {

          namespace parsing {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.rinex", "utils");

            t_RinexFileType::install(module);
            parsing::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.files.rinex", "utils");

            t_RinexFileType::initialize(module);
            parsing::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/files/rinex/utils/parsing/RinexUtils.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {
          namespace parsing {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.rinex.utils", "parsing");

              t_RinexUtils::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.files.rinex.utils", "parsing");

              t_RinexUtils::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/files/sinex/Dcb.h"
#include "org/orekit/files/sinex/DcbDescription.h"
#include "org/orekit/files/sinex/DcbSatellite.h"
#include "org/orekit/files/sinex/DcbStation.h"
#include "org/orekit/files/sinex/SinexEopEntry.h"
#include "org/orekit/files/sinex/SinexLoader.h"
#include "org/orekit/files/sinex/Station.h"
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "sinex");

          t_Dcb::install(module);
          t_DcbDescription::install(module);
          t_DcbSatellite::install(module);
          t_DcbStation::install(module);
          t_SinexEopEntry::install(module);
          t_SinexLoader::install(module);
          t_Station::install(module);
          t_Station$ReferenceSystem::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "sinex");

          t_Dcb::initialize(module);
          t_DcbDescription::initialize(module);
          t_DcbSatellite::initialize(module);
          t_DcbStation::initialize(module);
          t_SinexEopEntry::initialize(module);
          t_SinexLoader::initialize(module);
          t_Station::initialize(module);
          t_Station$ReferenceSystem::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/files/sp3/DataUsed.h"
#include "org/orekit/files/sp3/SP3.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/files/sp3/SP3CoordinateHermiteInterpolator.h"
#include "org/orekit/files/sp3/SP3Ephemeris.h"
#include "org/orekit/files/sp3/SP3FileType.h"
#include "org/orekit/files/sp3/SP3Header.h"
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "org/orekit/files/sp3/SP3Parser.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "org/orekit/files/sp3/SP3Utils.h"
#include "org/orekit/files/sp3/SP3Writer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "sp3");

          t_DataUsed::install(module);
          t_SP3::install(module);
          t_SP3Coordinate::install(module);
          t_SP3CoordinateHermiteInterpolator::install(module);
          t_SP3Ephemeris::install(module);
          t_SP3FileType::install(module);
          t_SP3Header::install(module);
          t_SP3OrbitType::install(module);
          t_SP3Parser::install(module);
          t_SP3Segment::install(module);
          t_SP3Utils::install(module);
          t_SP3Writer::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "sp3");

          t_DataUsed::initialize(module);
          t_SP3::initialize(module);
          t_SP3Coordinate::initialize(module);
          t_SP3CoordinateHermiteInterpolator::initialize(module);
          t_SP3Ephemeris::initialize(module);
          t_SP3FileType::initialize(module);
          t_SP3Header::initialize(module);
          t_SP3OrbitType::initialize(module);
          t_SP3Parser::initialize(module);
          t_SP3Segment::initialize(module);
          t_SP3Utils::initialize(module);
          t_SP3Writer::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/files/stk/STKEphemerisFile.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemeris.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "org/orekit/files/stk/STKEphemerisFileParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "stk");

          t_STKEphemerisFile::install(module);
          t_STKEphemerisFile$STKCoordinateSystem::install(module);
          t_STKEphemerisFile$STKEphemeris::install(module);
          t_STKEphemerisFile$STKEphemerisSegment::install(module);
          t_STKEphemerisFileParser::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.files", "stk");

          t_STKEphemerisFile::initialize(module);
          t_STKEphemerisFile$STKCoordinateSystem::initialize(module);
          t_STKEphemerisFile$STKEphemeris::initialize(module);
          t_STKEphemerisFile$STKEphemerisSegment::initialize(module);
          t_STKEphemerisFileParser::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/forces/BoxAndSolarArraySpacecraft.h"
#include "org/orekit/forces/FixedPanel.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/forces/Panel.h"
#include "org/orekit/forces/PointingPanel.h"
#include "org/orekit/forces/PythonForceModel.h"
#include "org/orekit/forces/SlewingPanel.h"

namespace org {
  namespace orekit {
    namespace forces {

      namespace drag {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace empirical {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace gravity {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace inertia {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace maneuvers {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace radiation {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "forces");

        t_BoxAndSolarArraySpacecraft::install(module);
        t_FixedPanel::install(module);
        t_ForceModel::install(module);
        t_Panel::install(module);
        t_PointingPanel::install(module);
        t_PythonForceModel::install(module);
        t_SlewingPanel::install(module);
        drag::__install__(module);
        empirical::__install__(module);
        gravity::__install__(module);
        inertia::__install__(module);
        maneuvers::__install__(module);
        radiation::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "forces");

        t_BoxAndSolarArraySpacecraft::initialize(module);
        t_FixedPanel::initialize(module);
        t_ForceModel::initialize(module);
        t_Panel::initialize(module);
        t_PointingPanel::initialize(module);
        t_PythonForceModel::initialize(module);
        t_SlewingPanel::initialize(module);
        drag::__initialize__(module);
        empirical::__initialize__(module);
        gravity::__initialize__(module);
        inertia::__initialize__(module);
        maneuvers::__initialize__(module);
        radiation::__initialize__(module);
      }
    }
  }
}

#include "org/orekit/forces/drag/AbstractDragForceModel.h"
#include "org/orekit/forces/drag/DragForce.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/orekit/forces/drag/IsotropicDrag.h"
#include "org/orekit/forces/drag/PythonAbstractDragForceModel.h"
#include "org/orekit/forces/drag/PythonDragSensitive.h"
#include "org/orekit/forces/drag/TimeSpanDragForce.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.forces", "drag");

          t_AbstractDragForceModel::install(module);
          t_DragForce::install(module);
          t_DragSensitive::install(module);
          t_IsotropicDrag::install(module);
          t_PythonAbstractDragForceModel::install(module);
          t_PythonDragSensitive::install(module);
          t_TimeSpanDragForce::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.forces", "drag");

          t_AbstractDragForceModel::initialize(module);
          t_DragForce::initialize(module);
          t_DragSensitive::initialize(module);
          t_IsotropicDrag::initialize(module);
          t_PythonAbstractDragForceModel::initialize(module);
          t_PythonDragSensitive::initialize(module);
          t_TimeSpanDragForce::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/orekit/forces/empirical/HarmonicAccelerationModel.h"
#include "org/orekit/forces/empirical/ParametricAcceleration.h"
#include "org/orekit/forces/empirical/PolynomialAccelerationModel.h"
#include "org/orekit/forces/empirical/PythonAccelerationModel.h"
#include "org/orekit/forces/empirical/TimeSpanParametricAcceleration.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.forces", "empirical");

          t_AccelerationModel::install(module);
          t_HarmonicAccelerationModel::install(module);
          t_ParametricAcceleration::install(module);
          t_PolynomialAccelerationModel::install(module);
          t_PythonAccelerationModel::install(module);
          t_TimeSpanParametricAcceleration::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.forces", "empirical");

          t_AccelerationModel::initialize(module);
          t_HarmonicAccelerationModel::initialize(module);
          t_ParametricAcceleration::initialize(module);
          t_PolynomialAccelerationModel::initialize(module);
          t_PythonAccelerationModel::initialize(module);
          t_TimeSpanParametricAcceleration::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/forces/gravity/DeSitterRelativity.h"
#include "org/orekit/forces/gravity/HolmesFeatherstoneAttractionModel.h"
#include "org/orekit/forces/gravity/LenseThirringRelativity.h"
#include "org/orekit/forces/gravity/NewtonianAttraction.h"
#include "org/orekit/forces/gravity/OceanTides.h"
#include "org/orekit/forces/gravity/Relativity.h"
#include "org/orekit/forces/gravity/SingleBodyAbsoluteAttraction.h"
#include "org/orekit/forces/gravity/SingleBodyRelativeAttraction.h"
#include "org/orekit/forces/gravity/SolidTides.h"
#include "org/orekit/forces/gravity/ThirdBodyAttraction.h"
#include "org/orekit/forces/gravity/ThirdBodyAttractionEpoch.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        namespace potential {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.forces", "gravity");

          t_DeSitterRelativity::install(module);
          t_HolmesFeatherstoneAttractionModel::install(module);
          t_LenseThirringRelativity::install(module);
          t_NewtonianAttraction::install(module);
          t_OceanTides::install(module);
          t_Relativity::install(module);
          t_SingleBodyAbsoluteAttraction::install(module);
          t_SingleBodyRelativeAttraction::install(module);
          t_SolidTides::install(module);
          t_ThirdBodyAttraction::install(module);
          t_ThirdBodyAttractionEpoch::install(module);
          potential::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.forces", "gravity");

          t_DeSitterRelativity::initialize(module);
          t_HolmesFeatherstoneAttractionModel::initialize(module);
          t_LenseThirringRelativity::initialize(module);
          t_NewtonianAttraction::initialize(module);
          t_OceanTides::initialize(module);
          t_Relativity::initialize(module);
          t_SingleBodyAbsoluteAttraction::initialize(module);
          t_SingleBodyRelativeAttraction::initialize(module);
          t_SolidTides::initialize(module);
          t_ThirdBodyAttraction::initialize(module);
          t_ThirdBodyAttractionEpoch::initialize(module);
          potential::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/forces/gravity/potential/AstronomicalAmplitudeReader.h"
#include "org/orekit/forces/gravity/potential/CachedNormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/EGMFormatReader.h"
#include "org/orekit/forces/gravity/potential/FESCHatEpsilonReader.h"
#include "org/orekit/forces/gravity/potential/FESCnmSnmReader.h"
#include "org/orekit/forces/gravity/potential/GRGSFormatReader.h"
#include "org/orekit/forces/gravity/potential/GravityFieldFactory.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/forces/gravity/potential/ICGEMFormatReader.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "org/orekit/forces/gravity/potential/PythonGravityFields.h"
#include "org/orekit/forces/gravity/potential/PythonNormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/PythonPotentialCoefficientsReader.h"
#include "org/orekit/forces/gravity/potential/PythonRawSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/PythonSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/PythonTideSystemProvider.h"
#include "org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonics.h"
#include "org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "org/orekit/forces/gravity/potential/SHMFormatReader.h"
#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.forces.gravity", "potential");

            t_AstronomicalAmplitudeReader::install(module);
            t_CachedNormalizedSphericalHarmonicsProvider::install(module);
            t_EGMFormatReader::install(module);
            t_FESCHatEpsilonReader::install(module);
            t_FESCnmSnmReader::install(module);
            t_GRGSFormatReader::install(module);
            t_GravityFieldFactory::install(module);
            t_GravityFields::install(module);
            t_ICGEMFormatReader::install(module);
            t_LazyLoadedGravityFields::install(module);
            t_NormalizedSphericalHarmonicsProvider::install(module);
            t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::install(module);
            t_OceanLoadDeformationCoefficients::install(module);
            t_OceanTidesReader::install(module);
            t_OceanTidesWave::install(module);
            t_PotentialCoefficientsReader::install(module);
            t_PythonGravityFields::install(module);
            t_PythonNormalizedSphericalHarmonicsProvider::install(module);
            t_PythonPotentialCoefficientsReader::install(module);
            t_PythonRawSphericalHarmonicsProvider::install(module);
            t_PythonSphericalHarmonicsProvider::install(module);
            t_PythonTideSystemProvider::install(module);
            t_PythonUnnormalizedSphericalHarmonics::install(module);
            t_PythonUnnormalizedSphericalHarmonicsProvider::install(module);
            t_RawSphericalHarmonicsProvider::install(module);
            t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::install(module);
            t_SHMFormatReader::install(module);
            t_SphericalHarmonicsProvider::install(module);
            t_TideSystem::install(module);
            t_TideSystemProvider::install(module);
            t_UnnormalizedSphericalHarmonicsProvider::install(module);
            t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.forces.gravity", "potential");

            t_AstronomicalAmplitudeReader::initialize(module);
            t_CachedNormalizedSphericalHarmonicsProvider::initialize(module);
            t_EGMFormatReader::initialize(module);
            t_FESCHatEpsilonReader::initialize(module);
            t_FESCnmSnmReader::initialize(module);
            t_GRGSFormatReader::initialize(module);
            t_GravityFieldFactory::initialize(module);
            t_GravityFields::initialize(module);
            t_ICGEMFormatReader::initialize(module);
            t_LazyLoadedGravityFields::initialize(module);
            t_NormalizedSphericalHarmonicsProvider::initialize(module);
            t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initialize(module);
            t_OceanLoadDeformationCoefficients::initialize(module);
            t_OceanTidesReader::initialize(module);
            t_OceanTidesWave::initialize(module);
            t_PotentialCoefficientsReader::initialize(module);
            t_PythonGravityFields::initialize(module);
            t_PythonNormalizedSphericalHarmonicsProvider::initialize(module);
            t_PythonPotentialCoefficientsReader::initialize(module);
            t_PythonRawSphericalHarmonicsProvider::initialize(module);
            t_PythonSphericalHarmonicsProvider::initialize(module);
            t_PythonTideSystemProvider::initialize(module);
            t_PythonUnnormalizedSphericalHarmonics::initialize(module);
            t_PythonUnnormalizedSphericalHarmonicsProvider::initialize(module);
            t_RawSphericalHarmonicsProvider::initialize(module);
            t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::initialize(module);
            t_SHMFormatReader::initialize(module);
            t_SphericalHarmonicsProvider::initialize(module);
            t_TideSystem::initialize(module);
            t_TideSystemProvider::initialize(module);
            t_UnnormalizedSphericalHarmonicsProvider::initialize(module);
            t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/forces/inertia/InertialForces.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace inertia {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.forces", "inertia");

          t_InertialForces::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.forces", "inertia");

          t_InertialForces::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/forces/maneuvers/ConfigurableLowThrustManeuver.h"
#include "org/orekit/forces/maneuvers/ConstantThrustManeuver.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/forces/maneuvers/FieldImpulseManeuver.h"
#include "org/orekit/forces/maneuvers/ImpulseManeuver.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "org/orekit/forces/maneuvers/SmallManeuverAnalyticalModel.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        namespace jacobians {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace propulsion {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace trigger {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.forces", "maneuvers");

          t_ConfigurableLowThrustManeuver::install(module);
          t_ConstantThrustManeuver::install(module);
          t_Control3DVectorCostType::install(module);
          t_FieldImpulseManeuver::install(module);
          t_ImpulseManeuver::install(module);
          t_Maneuver::install(module);
          t_SmallManeuverAnalyticalModel::install(module);
          jacobians::__install__(module);
          propulsion::__install__(module);
          trigger::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.forces", "maneuvers");

          t_ConfigurableLowThrustManeuver::initialize(module);
          t_ConstantThrustManeuver::initialize(module);
          t_Control3DVectorCostType::initialize(module);
          t_FieldImpulseManeuver::initialize(module);
          t_ImpulseManeuver::initialize(module);
          t_Maneuver::initialize(module);
          t_SmallManeuverAnalyticalModel::initialize(module);
          jacobians::__initialize__(module);
          propulsion::__initialize__(module);
          trigger::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/forces/maneuvers/jacobians/Duration.h"
#include "org/orekit/forces/maneuvers/jacobians/MassDepletionDelay.h"
#include "org/orekit/forces/maneuvers/jacobians/MedianDate.h"
#include "org/orekit/forces/maneuvers/jacobians/TriggerDate.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.forces.maneuvers", "jacobians");

            t_Duration::install(module);
            t_MassDepletionDelay::install(module);
            t_MedianDate::install(module);
            t_TriggerDate::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.forces.maneuvers", "jacobians");

            t_Duration::initialize(module);
            t_MassDepletionDelay::initialize(module);
            t_MedianDate::initialize(module);
            t_TriggerDate::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"
#include "org/orekit/forces/maneuvers/propulsion/BasicConstantThrustPropulsionModel.h"
#include "org/orekit/forces/maneuvers/propulsion/ConstantThrustDirectionProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment.h"
#include "org/orekit/forces/maneuvers/propulsion/ProfileThrustPropulsionModel.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonAbstractConstantThrustPropulsionModel.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonPropulsionModel.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonThrustDirectionProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonThrustPropulsionModel.h"
#include "org/orekit/forces/maneuvers/propulsion/ScaledConstantThrustPropulsionModel.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.forces.maneuvers", "propulsion");

            t_AbstractConstantThrustPropulsionModel::install(module);
            t_BasicConstantThrustPropulsionModel::install(module);
            t_ConstantThrustDirectionProvider::install(module);
            t_PolynomialThrustSegment::install(module);
            t_ProfileThrustPropulsionModel::install(module);
            t_PropulsionModel::install(module);
            t_PythonAbstractConstantThrustPropulsionModel::install(module);
            t_PythonPropulsionModel::install(module);
            t_PythonThrustDirectionProvider::install(module);
            t_PythonThrustPropulsionModel::install(module);
            t_ScaledConstantThrustPropulsionModel::install(module);
            t_ThrustDirectionAndAttitudeProvider::install(module);
            t_ThrustDirectionProvider::install(module);
            t_ThrustPropulsionModel::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.forces.maneuvers", "propulsion");

            t_AbstractConstantThrustPropulsionModel::initialize(module);
            t_BasicConstantThrustPropulsionModel::initialize(module);
            t_ConstantThrustDirectionProvider::initialize(module);
            t_PolynomialThrustSegment::initialize(module);
            t_ProfileThrustPropulsionModel::initialize(module);
            t_PropulsionModel::initialize(module);
            t_PythonAbstractConstantThrustPropulsionModel::initialize(module);
            t_PythonPropulsionModel::initialize(module);
            t_PythonThrustDirectionProvider::initialize(module);
            t_PythonThrustPropulsionModel::initialize(module);
            t_ScaledConstantThrustPropulsionModel::initialize(module);
            t_ThrustDirectionAndAttitudeProvider::initialize(module);
            t_ThrustDirectionProvider::initialize(module);
            t_ThrustPropulsionModel::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/forces/maneuvers/trigger/AbstractManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/DateBasedManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/IntervalEventTrigger.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/PythonAbstractManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/PythonFieldManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/PythonIntervalEventTrigger.h"
#include "org/orekit/forces/maneuvers/trigger/PythonManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/PythonManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/PythonStartStopEventsTrigger.h"
#include "org/orekit/forces/maneuvers/trigger/StartStopEventsTrigger.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.forces.maneuvers", "trigger");

            t_AbstractManeuverTriggers::install(module);
            t_DateBasedManeuverTriggers::install(module);
            t_FieldManeuverTriggersResetter::install(module);
            t_IntervalEventTrigger::install(module);
            t_ManeuverTriggers::install(module);
            t_ManeuverTriggersResetter::install(module);
            t_PythonAbstractManeuverTriggers::install(module);
            t_PythonFieldManeuverTriggersResetter::install(module);
            t_PythonIntervalEventTrigger::install(module);
            t_PythonManeuverTriggers::install(module);
            t_PythonManeuverTriggersResetter::install(module);
            t_PythonStartStopEventsTrigger::install(module);
            t_StartStopEventsTrigger::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.forces.maneuvers", "trigger");

            t_AbstractManeuverTriggers::initialize(module);
            t_DateBasedManeuverTriggers::initialize(module);
            t_FieldManeuverTriggersResetter::initialize(module);
            t_IntervalEventTrigger::initialize(module);
            t_ManeuverTriggers::initialize(module);
            t_ManeuverTriggersResetter::initialize(module);
            t_PythonAbstractManeuverTriggers::initialize(module);
            t_PythonFieldManeuverTriggersResetter::initialize(module);
            t_PythonIntervalEventTrigger::initialize(module);
            t_PythonManeuverTriggers::initialize(module);
            t_PythonManeuverTriggersResetter::initialize(module);
            t_PythonStartStopEventsTrigger::initialize(module);
            t_StartStopEventsTrigger::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/forces/radiation/AbstractRadiationForceModel.h"
#include "org/orekit/forces/radiation/ECOM2.h"
#include "org/orekit/forces/radiation/IsotropicRadiationCNES95Convention.h"
#include "org/orekit/forces/radiation/IsotropicRadiationClassicalConvention.h"
#include "org/orekit/forces/radiation/IsotropicRadiationSingleCoefficient.h"
#include "org/orekit/forces/radiation/KnockeRediffusedForceModel.h"
#include "org/orekit/forces/radiation/PythonAbstractRadiationForceModel.h"
#include "org/orekit/forces/radiation/PythonRadiationSensitive.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/orekit/forces/radiation/SolarRadiationPressure.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.forces", "radiation");

          t_AbstractRadiationForceModel::install(module);
          t_ECOM2::install(module);
          t_IsotropicRadiationCNES95Convention::install(module);
          t_IsotropicRadiationClassicalConvention::install(module);
          t_IsotropicRadiationSingleCoefficient::install(module);
          t_KnockeRediffusedForceModel::install(module);
          t_PythonAbstractRadiationForceModel::install(module);
          t_PythonRadiationSensitive::install(module);
          t_RadiationSensitive::install(module);
          t_SolarRadiationPressure::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.forces", "radiation");

          t_AbstractRadiationForceModel::initialize(module);
          t_ECOM2::initialize(module);
          t_IsotropicRadiationCNES95Convention::initialize(module);
          t_IsotropicRadiationClassicalConvention::initialize(module);
          t_IsotropicRadiationSingleCoefficient::initialize(module);
          t_KnockeRediffusedForceModel::initialize(module);
          t_PythonAbstractRadiationForceModel::initialize(module);
          t_PythonRadiationSensitive::initialize(module);
          t_RadiationSensitive::initialize(module);
          t_SolarRadiationPressure::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/frames/AbstractEopLoader.h"
#include "org/orekit/frames/AbstractEopParser.h"
#include "org/orekit/frames/AbstractFrames.h"
#include "org/orekit/frames/CR3BPRotatingFrame.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/frames/EOPFittedModel.h"
#include "org/orekit/frames/EOPFitter.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/EclipticProvider.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/FieldPoleCorrection.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/FieldTransformGenerator.h"
#include "org/orekit/frames/FixedTransformProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/frames/FramesFactory.h"
#include "org/orekit/frames/GTODProvider.h"
#include "org/orekit/frames/HelmertTransformation.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/ITRFVersion$Converter.h"
#include "org/orekit/frames/ITRFVersionLoader.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "org/orekit/frames/InterpolatingTransformProvider.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "org/orekit/frames/L1Frame.h"
#include "org/orekit/frames/L1TransformProvider.h"
#include "org/orekit/frames/L2Frame.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/frames/LazyLoadedEop.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/frames/LocalMagneticFieldFrame.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "org/orekit/frames/LocalOrbitalFrame.h"
#include "org/orekit/frames/OrphanFrame.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/frames/PredictedEOPHistory.h"
#include "org/orekit/frames/PythonAbstractEopParser.h"
#include "org/orekit/frames/PythonAbstractFrames.h"
#include "org/orekit/frames/PythonEOPBasedTransformProvider.h"
#include "org/orekit/frames/PythonEOPHistoryLoader.h"
#include "org/orekit/frames/PythonFieldStaticTransform.h"
#include "org/orekit/frames/PythonFrames.h"
#include "org/orekit/frames/PythonItrfVersionProvider.h"
#include "org/orekit/frames/PythonLOF.h"
#include "org/orekit/frames/PythonStaticTransform.h"
#include "org/orekit/frames/PythonTransformProvider.h"
#include "org/orekit/frames/ShiftingTransformProvider.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/TransformGenerator.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/TransformProviderUtils.h"
#include "org/orekit/frames/TwoBodiesBaryFrame.h"
#include "org/orekit/frames/UpdatableFrame.h"
#include "org/orekit/frames/VersionedITRF.h"

namespace org {
  namespace orekit {
    namespace frames {

      namespace encounter {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "frames");

        t_AbstractEopLoader::install(module);
        t_AbstractEopParser::install(module);
        t_AbstractFrames::install(module);
        t_CR3BPRotatingFrame::install(module);
        t_EOPBasedTransformProvider::install(module);
        t_EOPEntry::install(module);
        t_EOPFittedModel::install(module);
        t_EOPFitter::install(module);
        t_EOPHistory::install(module);
        t_EclipticProvider::install(module);
        t_EopHistoryLoader::install(module);
        t_EopHistoryLoader$Parser::install(module);
        t_FactoryManagedFrame::install(module);
        t_FieldPoleCorrection::install(module);
        t_FieldStaticTransform::install(module);
        t_FieldTransform::install(module);
        t_FieldTransformGenerator::install(module);
        t_FixedTransformProvider::install(module);
        t_Frame::install(module);
        t_Frames::install(module);
        t_FramesFactory::install(module);
        t_GTODProvider::install(module);
        t_HelmertTransformation::install(module);
        t_HelmertTransformation$Predefined::install(module);
        t_ITRFVersion::install(module);
        t_ITRFVersion$Converter::install(module);
        t_ITRFVersionLoader::install(module);
        t_ITRFVersionLoader$ITRFVersionConfiguration::install(module);
        t_InterpolatingTransformProvider::install(module);
        t_ItrfVersionProvider::install(module);
        t_L1Frame::install(module);
        t_L1TransformProvider::install(module);
        t_L2Frame::install(module);
        t_LOF::install(module);
        t_LOFType::install(module);
        t_LazyLoadedEop::install(module);
        t_LazyLoadedFrames::install(module);
        t_LocalMagneticFieldFrame::install(module);
        t_LocalMagneticFieldFrame$LOFBuilderVector::install(module);
        t_LocalOrbitalFrame::install(module);
        t_OrphanFrame::install(module);
        t_PoleCorrection::install(module);
        t_Predefined::install(module);
        t_PredictedEOPHistory::install(module);
        t_PythonAbstractEopParser::install(module);
        t_PythonAbstractFrames::install(module);
        t_PythonEOPBasedTransformProvider::install(module);
        t_PythonEOPHistoryLoader::install(module);
        t_PythonFieldStaticTransform::install(module);
        t_PythonFrames::install(module);
        t_PythonItrfVersionProvider::install(module);
        t_PythonLOF::install(module);
        t_PythonStaticTransform::install(module);
        t_PythonTransformProvider::install(module);
        t_ShiftingTransformProvider::install(module);
        t_SingleParameterFitter::install(module);
        t_StaticTransform::install(module);
        t_TopocentricFrame::install(module);
        t_Transform::install(module);
        t_TransformGenerator::install(module);
        t_TransformProvider::install(module);
        t_TransformProviderUtils::install(module);
        t_TwoBodiesBaryFrame::install(module);
        t_UpdatableFrame::install(module);
        t_VersionedITRF::install(module);
        encounter::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "frames");

        t_AbstractEopLoader::initialize(module);
        t_AbstractEopParser::initialize(module);
        t_AbstractFrames::initialize(module);
        t_CR3BPRotatingFrame::initialize(module);
        t_EOPBasedTransformProvider::initialize(module);
        t_EOPEntry::initialize(module);
        t_EOPFittedModel::initialize(module);
        t_EOPFitter::initialize(module);
        t_EOPHistory::initialize(module);
        t_EclipticProvider::initialize(module);
        t_EopHistoryLoader::initialize(module);
        t_EopHistoryLoader$Parser::initialize(module);
        t_FactoryManagedFrame::initialize(module);
        t_FieldPoleCorrection::initialize(module);
        t_FieldStaticTransform::initialize(module);
        t_FieldTransform::initialize(module);
        t_FieldTransformGenerator::initialize(module);
        t_FixedTransformProvider::initialize(module);
        t_Frame::initialize(module);
        t_Frames::initialize(module);
        t_FramesFactory::initialize(module);
        t_GTODProvider::initialize(module);
        t_HelmertTransformation::initialize(module);
        t_HelmertTransformation$Predefined::initialize(module);
        t_ITRFVersion::initialize(module);
        t_ITRFVersion$Converter::initialize(module);
        t_ITRFVersionLoader::initialize(module);
        t_ITRFVersionLoader$ITRFVersionConfiguration::initialize(module);
        t_InterpolatingTransformProvider::initialize(module);
        t_ItrfVersionProvider::initialize(module);
        t_L1Frame::initialize(module);
        t_L1TransformProvider::initialize(module);
        t_L2Frame::initialize(module);
        t_LOF::initialize(module);
        t_LOFType::initialize(module);
        t_LazyLoadedEop::initialize(module);
        t_LazyLoadedFrames::initialize(module);
        t_LocalMagneticFieldFrame::initialize(module);
        t_LocalMagneticFieldFrame$LOFBuilderVector::initialize(module);
        t_LocalOrbitalFrame::initialize(module);
        t_OrphanFrame::initialize(module);
        t_PoleCorrection::initialize(module);
        t_Predefined::initialize(module);
        t_PredictedEOPHistory::initialize(module);
        t_PythonAbstractEopParser::initialize(module);
        t_PythonAbstractFrames::initialize(module);
        t_PythonEOPBasedTransformProvider::initialize(module);
        t_PythonEOPHistoryLoader::initialize(module);
        t_PythonFieldStaticTransform::initialize(module);
        t_PythonFrames::initialize(module);
        t_PythonItrfVersionProvider::initialize(module);
        t_PythonLOF::initialize(module);
        t_PythonStaticTransform::initialize(module);
        t_PythonTransformProvider::initialize(module);
        t_ShiftingTransformProvider::initialize(module);
        t_SingleParameterFitter::initialize(module);
        t_StaticTransform::initialize(module);
        t_TopocentricFrame::initialize(module);
        t_Transform::initialize(module);
        t_TransformGenerator::initialize(module);
        t_TransformProvider::initialize(module);
        t_TransformProviderUtils::initialize(module);
        t_TwoBodiesBaryFrame::initialize(module);
        t_UpdatableFrame::initialize(module);
        t_VersionedITRF::initialize(module);
        encounter::__initialize__(module);
      }
    }
  }
}

#include "org/orekit/frames/encounter/AbstractEncounterLOF.h"
#include "org/orekit/frames/encounter/DefaultEncounterLOF.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/orekit/frames/encounter/PythonAbstractEncounterLOF.h"
#include "org/orekit/frames/encounter/PythonEncounterLOF.h"
#include "org/orekit/frames/encounter/ValsecchiEncounterFrame.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.frames", "encounter");

          t_AbstractEncounterLOF::install(module);
          t_DefaultEncounterLOF::install(module);
          t_EncounterLOF::install(module);
          t_EncounterLOFType::install(module);
          t_PythonAbstractEncounterLOF::install(module);
          t_PythonEncounterLOF::install(module);
          t_ValsecchiEncounterFrame::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.frames", "encounter");

          t_AbstractEncounterLOF::initialize(module);
          t_DefaultEncounterLOF::initialize(module);
          t_EncounterLOF::initialize(module);
          t_EncounterLOFType::initialize(module);
          t_PythonAbstractEncounterLOF::initialize(module);
          t_PythonEncounterLOF::initialize(module);
          t_ValsecchiEncounterFrame::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace orekit {
    namespace geometry {

      namespace fov {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "geometry");

        fov::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "geometry");

        fov::__initialize__(module);
      }
    }
  }
}

#include "org/orekit/geometry/fov/AbstractFieldOfView.h"
#include "org/orekit/geometry/fov/CircularFieldOfView.h"
#include "org/orekit/geometry/fov/DoubleDihedraFieldOfView.h"
#include "org/orekit/geometry/fov/EllipticalFieldOfView.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView.h"
#include "org/orekit/geometry/fov/PolygonalFieldOfView$DefiningConeType.h"
#include "org/orekit/geometry/fov/PythonAbstractFieldOfView.h"
#include "org/orekit/geometry/fov/PythonFieldOfView.h"
#include "org/orekit/geometry/fov/PythonSmoothFieldOfView.h"
#include "org/orekit/geometry/fov/SmoothFieldOfView.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.geometry", "fov");

          t_AbstractFieldOfView::install(module);
          t_CircularFieldOfView::install(module);
          t_DoubleDihedraFieldOfView::install(module);
          t_EllipticalFieldOfView::install(module);
          t_FieldOfView::install(module);
          t_PolygonalFieldOfView::install(module);
          t_PolygonalFieldOfView$DefiningConeType::install(module);
          t_PythonAbstractFieldOfView::install(module);
          t_PythonFieldOfView::install(module);
          t_PythonSmoothFieldOfView::install(module);
          t_SmoothFieldOfView::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.geometry", "fov");

          t_AbstractFieldOfView::initialize(module);
          t_CircularFieldOfView::initialize(module);
          t_DoubleDihedraFieldOfView::initialize(module);
          t_EllipticalFieldOfView::initialize(module);
          t_FieldOfView::initialize(module);
          t_PolygonalFieldOfView::initialize(module);
          t_PolygonalFieldOfView$DefiningConeType::initialize(module);
          t_PythonAbstractFieldOfView::initialize(module);
          t_PythonFieldOfView::initialize(module);
          t_PythonSmoothFieldOfView::initialize(module);
          t_SmoothFieldOfView::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/gnss/DOP.h"
#include "org/orekit/gnss/DOPComputer.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/SEMParser.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/SignalCode.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/gnss/YUMAParser.h"

namespace org {
  namespace orekit {
    namespace gnss {

      namespace antenna {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace attitude {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace metric {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace rflink {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "gnss");

        t_DOP::install(module);
        t_DOPComputer::install(module);
        t_Frequency::install(module);
        t_MeasurementType::install(module);
        t_ObservationTimeScale::install(module);
        t_ObservationType::install(module);
        t_SEMParser::install(module);
        t_SatInSystem::install(module);
        t_SatelliteSystem::install(module);
        t_SignalCode::install(module);
        t_TimeSystem::install(module);
        t_YUMAParser::install(module);
        antenna::__install__(module);
        attitude::__install__(module);
        metric::__install__(module);
        rflink::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "gnss");

        t_DOP::initialize(module);
        t_DOPComputer::initialize(module);
        t_Frequency::initialize(module);
        t_MeasurementType::initialize(module);
        t_ObservationTimeScale::initialize(module);
        t_ObservationType::initialize(module);
        t_SEMParser::initialize(module);
        t_SatInSystem::initialize(module);
        t_SatelliteSystem::initialize(module);
        t_SignalCode::initialize(module);
        t_TimeSystem::initialize(module);
        t_YUMAParser::initialize(module);
        antenna::__initialize__(module);
        attitude::__initialize__(module);
        metric::__initialize__(module);
        rflink::__initialize__(module);
      }
    }
  }
}

#include "org/orekit/gnss/antenna/Antenna.h"
#include "org/orekit/gnss/antenna/AntexLoader.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/gnss/antenna/OneDVariation.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "org/orekit/gnss/antenna/PythonPhaseCenterVariationFunction.h"
#include "org/orekit/gnss/antenna/ReceiverAntenna.h"
#include "org/orekit/gnss/antenna/SatelliteAntenna.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "org/orekit/gnss/antenna/TwoDVariation.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.gnss", "antenna");

          t_Antenna::install(module);
          t_AntexLoader::install(module);
          t_FrequencyPattern::install(module);
          t_OneDVariation::install(module);
          t_PhaseCenterVariationFunction::install(module);
          t_PythonPhaseCenterVariationFunction::install(module);
          t_ReceiverAntenna::install(module);
          t_SatelliteAntenna::install(module);
          t_SatelliteType::install(module);
          t_TwoDVariation::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.gnss", "antenna");

          t_Antenna::initialize(module);
          t_AntexLoader::initialize(module);
          t_FrequencyPattern::initialize(module);
          t_OneDVariation::initialize(module);
          t_PhaseCenterVariationFunction::initialize(module);
          t_PythonPhaseCenterVariationFunction::initialize(module);
          t_ReceiverAntenna::initialize(module);
          t_SatelliteAntenna::initialize(module);
          t_SatelliteType::initialize(module);
          t_TwoDVariation::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider.h"
#include "org/orekit/gnss/attitude/BeidouGeo.h"
#include "org/orekit/gnss/attitude/BeidouIGSO.h"
#include "org/orekit/gnss/attitude/BeidouMeo.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "org/orekit/gnss/attitude/GPSBlockIIA.h"
#include "org/orekit/gnss/attitude/GPSBlockIIF.h"
#include "org/orekit/gnss/attitude/GPSBlockIIR.h"
#include "org/orekit/gnss/attitude/Galileo.h"
#include "org/orekit/gnss/attitude/GenericGNSS.h"
#include "org/orekit/gnss/attitude/Glonass.h"
#include "org/orekit/gnss/attitude/PythonAbstractGNSSAttitudeProvider.h"
#include "org/orekit/gnss/attitude/PythonGNSSAttitudeProvider.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.gnss", "attitude");

          t_AbstractGNSSAttitudeProvider::install(module);
          t_BeidouGeo::install(module);
          t_BeidouIGSO::install(module);
          t_BeidouMeo::install(module);
          t_GNSSAttitudeProvider::install(module);
          t_GPSBlockIIA::install(module);
          t_GPSBlockIIF::install(module);
          t_GPSBlockIIR::install(module);
          t_Galileo::install(module);
          t_GenericGNSS::install(module);
          t_Glonass::install(module);
          t_PythonAbstractGNSSAttitudeProvider::install(module);
          t_PythonGNSSAttitudeProvider::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.gnss", "attitude");

          t_AbstractGNSSAttitudeProvider::initialize(module);
          t_BeidouGeo::initialize(module);
          t_BeidouIGSO::initialize(module);
          t_BeidouMeo::initialize(module);
          t_GNSSAttitudeProvider::initialize(module);
          t_GPSBlockIIA::initialize(module);
          t_GPSBlockIIF::initialize(module);
          t_GPSBlockIIR::initialize(module);
          t_Galileo::initialize(module);
          t_GenericGNSS::initialize(module);
          t_Glonass::initialize(module);
          t_PythonAbstractGNSSAttitudeProvider::initialize(module);
          t_PythonGNSSAttitudeProvider::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {

        namespace messages {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ntrip {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace parser {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.gnss", "metric");

          messages::__install__(module);
          ntrip::__install__(module);
          parser::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.gnss", "metric");

          messages::__initialize__(module);
          ntrip::__initialize__(module);
          parser::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/gnss/metric/messages/ParsedMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {

          namespace common {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace rtcm {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace ssr {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.gnss.metric", "messages");

            t_ParsedMessage::install(module);
            common::__install__(module);
            rtcm::__install__(module);
            ssr::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.gnss.metric", "messages");

            t_ParsedMessage::initialize(module);
            common::__initialize__(module);
            rtcm::__initialize__(module);
            ssr::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "org/orekit/gnss/metric/messages/common/CodeBias.h"
#include "org/orekit/gnss/metric/messages/common/GlonassUserRangeAccuracy.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "org/orekit/gnss/metric/messages/common/PhaseBias.h"
#include "org/orekit/gnss/metric/messages/common/PythonAccuracyProvider.h"
#include "org/orekit/gnss/metric/messages/common/SignalInSpaceAccuracy.h"
#include "org/orekit/gnss/metric/messages/common/SsrUpdateInterval.h"
#include "org/orekit/gnss/metric/messages/common/UserRangeAccuracy.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.gnss.metric.messages", "common");

              t_AccuracyProvider::install(module);
              t_ClockCorrection::install(module);
              t_CodeBias::install(module);
              t_GlonassUserRangeAccuracy::install(module);
              t_OrbitCorrection::install(module);
              t_PhaseBias::install(module);
              t_PythonAccuracyProvider::install(module);
              t_SignalInSpaceAccuracy::install(module);
              t_SsrUpdateInterval::install(module);
              t_UserRangeAccuracy::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.gnss.metric.messages", "common");

              t_AccuracyProvider::initialize(module);
              t_ClockCorrection::initialize(module);
              t_CodeBias::initialize(module);
              t_GlonassUserRangeAccuracy::initialize(module);
              t_OrbitCorrection::initialize(module);
              t_PhaseBias::initialize(module);
              t_PythonAccuracyProvider::initialize(module);
              t_SignalInSpaceAccuracy::initialize(module);
              t_SsrUpdateInterval::initialize(module);
              t_UserRangeAccuracy::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/gnss/metric/messages/rtcm/RtcmData.h"
#include "org/orekit/gnss/metric/messages/rtcm/RtcmMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {

            namespace correction {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace ephemeris {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }

            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.gnss.metric.messages", "rtcm");

              t_RtcmData::install(module);
              t_RtcmMessage::install(module);
              correction::__install__(module);
              ephemeris::__install__(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.gnss.metric.messages", "rtcm");

              t_RtcmData::initialize(module);
              t_RtcmMessage::initialize(module);
              correction::__initialize__(module);
              ephemeris::__initialize__(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1057.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1058.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1060.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1063.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1064.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1066.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1240.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1241.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1243.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionMessage.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.gnss.metric.messages.rtcm", "correction");

                t_Rtcm1057::install(module);
                t_Rtcm1058::install(module);
                t_Rtcm1060::install(module);
                t_Rtcm1063::install(module);
                t_Rtcm1064::install(module);
                t_Rtcm1066::install(module);
                t_Rtcm1240::install(module);
                t_Rtcm1241::install(module);
                t_Rtcm1243::install(module);
                t_RtcmClockCorrectionData::install(module);
                t_RtcmCombinedCorrectionData::install(module);
                t_RtcmCorrectionData::install(module);
                t_RtcmCorrectionHeader::install(module);
                t_RtcmCorrectionMessage::install(module);
                t_RtcmOrbitCorrectionData::install(module);
                t_RtcmOrbitCorrectionHeader::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.gnss.metric.messages.rtcm", "correction");

                t_Rtcm1057::initialize(module);
                t_Rtcm1058::initialize(module);
                t_Rtcm1060::initialize(module);
                t_Rtcm1063::initialize(module);
                t_Rtcm1064::initialize(module);
                t_Rtcm1066::initialize(module);
                t_Rtcm1240::initialize(module);
                t_Rtcm1241::initialize(module);
                t_Rtcm1243::initialize(module);
                t_RtcmClockCorrectionData::initialize(module);
                t_RtcmCombinedCorrectionData::initialize(module);
                t_RtcmCorrectionData::initialize(module);
                t_RtcmCorrectionHeader::initialize(module);
                t_RtcmCorrectionMessage::initialize(module);
                t_RtcmOrbitCorrectionData::initialize(module);
                t_RtcmOrbitCorrectionHeader::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.gnss.metric.messages.rtcm", "ephemeris");

                t_Rtcm1019::install(module);
                t_Rtcm1019Data::install(module);
                t_Rtcm1020::install(module);
                t_Rtcm1020Data::install(module);
                t_Rtcm1042::install(module);
                t_Rtcm1042Data::install(module);
                t_Rtcm1044::install(module);
                t_Rtcm1044Data::install(module);
                t_Rtcm1045::install(module);
                t_Rtcm1045Data::install(module);
                t_RtcmEphemerisData::install(module);
                t_RtcmEphemerisMessage::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.gnss.metric.messages.rtcm", "ephemeris");

                t_Rtcm1019::initialize(module);
                t_Rtcm1019Data::initialize(module);
                t_Rtcm1020::initialize(module);
                t_Rtcm1020Data::initialize(module);
                t_Rtcm1042::initialize(module);
                t_Rtcm1042Data::initialize(module);
                t_Rtcm1044::initialize(module);
                t_Rtcm1044Data::initialize(module);
                t_Rtcm1045::initialize(module);
                t_Rtcm1045Data::initialize(module);
                t_RtcmEphemerisData::initialize(module);
                t_RtcmEphemerisMessage::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/gnss/metric/messages/ssr/SsrData.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrHeader.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            namespace igm {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }
            namespace subtype {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }

            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.gnss.metric.messages", "ssr");

              t_SsrData::install(module);
              t_SsrHeader::install(module);
              t_SsrMessage::install(module);
              igm::__install__(module);
              subtype::__install__(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.gnss.metric.messages", "ssr");

              t_SsrData::initialize(module);
              t_SsrHeader::initialize(module);
              t_SsrMessage::initialize(module);
              igm::__initialize__(module);
              subtype::__initialize__(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Data.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmData.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmMessage.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.gnss.metric.messages.ssr", "igm");

                t_SsrIgm01::install(module);
                t_SsrIgm01Data::install(module);
                t_SsrIgm01Header::install(module);
                t_SsrIgm02::install(module);
                t_SsrIgm02Data::install(module);
                t_SsrIgm02Header::install(module);
                t_SsrIgm03::install(module);
                t_SsrIgm03Data::install(module);
                t_SsrIgm03Header::install(module);
                t_SsrIgm04::install(module);
                t_SsrIgm04Data::install(module);
                t_SsrIgm04Header::install(module);
                t_SsrIgm05::install(module);
                t_SsrIgm05Data::install(module);
                t_SsrIgm05Header::install(module);
                t_SsrIgm06::install(module);
                t_SsrIgm06Data::install(module);
                t_SsrIgm06Header::install(module);
                t_SsrIgm07::install(module);
                t_SsrIgm07Data::install(module);
                t_SsrIgm07Header::install(module);
                t_SsrIgmData::install(module);
                t_SsrIgmHeader::install(module);
                t_SsrIgmMessage::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.gnss.metric.messages.ssr", "igm");

                t_SsrIgm01::initialize(module);
                t_SsrIgm01Data::initialize(module);
                t_SsrIgm01Header::initialize(module);
                t_SsrIgm02::initialize(module);
                t_SsrIgm02Data::initialize(module);
                t_SsrIgm02Header::initialize(module);
                t_SsrIgm03::initialize(module);
                t_SsrIgm03Data::initialize(module);
                t_SsrIgm03Header::initialize(module);
                t_SsrIgm04::initialize(module);
                t_SsrIgm04Data::initialize(module);
                t_SsrIgm04Header::initialize(module);
                t_SsrIgm05::initialize(module);
                t_SsrIgm05Data::initialize(module);
                t_SsrIgm05Header::initialize(module);
                t_SsrIgm06::initialize(module);
                t_SsrIgm06Data::initialize(module);
                t_SsrIgm06Header::initialize(module);
                t_SsrIgm07::initialize(module);
                t_SsrIgm07Data::initialize(module);
                t_SsrIgm07Header::initialize(module);
                t_SsrIgmData::initialize(module);
                t_SsrIgmHeader::initialize(module);
                t_SsrIgmMessage::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.gnss.metric.messages.ssr", "subtype");

                t_SsrIm201::install(module);
                t_SsrIm201Data::install(module);
                t_SsrIm201Header::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.gnss.metric.messages.ssr", "subtype");

                t_SsrIm201::initialize(module);
                t_SsrIm201Data::initialize(module);
                t_SsrIm201Header::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "org/orekit/gnss/metric/ntrip/CasterRecord.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "org/orekit/gnss/metric/ntrip/DataStreamRecord.h"
#include "org/orekit/gnss/metric/ntrip/GnssData.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "org/orekit/gnss/metric/ntrip/NetworkRecord.h"
#include "org/orekit/gnss/metric/ntrip/NtripClient.h"
#include "org/orekit/gnss/metric/ntrip/PythonMessageObserver.h"
#include "org/orekit/gnss/metric/ntrip/Record.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "org/orekit/gnss/metric/ntrip/SourceTable.h"
#include "org/orekit/gnss/metric/ntrip/StreamMonitor.h"
#include "org/orekit/gnss/metric/ntrip/StreamedMessage.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.gnss.metric", "ntrip");

            t_Authentication::install(module);
            t_CarrierPhase::install(module);
            t_CasterRecord::install(module);
            t_DataFormat::install(module);
            t_DataStreamRecord::install(module);
            t_GnssData::install(module);
            t_MessageObserver::install(module);
            t_NavigationSystem::install(module);
            t_NetworkRecord::install(module);
            t_NtripClient::install(module);
            t_PythonMessageObserver::install(module);
            t_Record::install(module);
            t_RecordType::install(module);
            t_SourceTable::install(module);
            t_StreamMonitor::install(module);
            t_StreamedMessage::install(module);
            t_Type::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.gnss.metric", "ntrip");

            t_Authentication::initialize(module);
            t_CarrierPhase::initialize(module);
            t_CasterRecord::initialize(module);
            t_DataFormat::initialize(module);
            t_DataStreamRecord::initialize(module);
            t_GnssData::initialize(module);
            t_MessageObserver::initialize(module);
            t_NavigationSystem::initialize(module);
            t_NetworkRecord::initialize(module);
            t_NtripClient::initialize(module);
            t_PythonMessageObserver::initialize(module);
            t_Record::initialize(module);
            t_RecordType::initialize(module);
            t_SourceTable::initialize(module);
            t_StreamMonitor::initialize(module);
            t_StreamedMessage::initialize(module);
            t_Type::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/gnss/metric/parser/AbstractEncodedMessage.h"
#include "org/orekit/gnss/metric/parser/ByteArrayEncodedMessage.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "org/orekit/gnss/metric/parser/DataType.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "org/orekit/gnss/metric/parser/HexadecimalSequenceEncodedMessage.h"
#include "org/orekit/gnss/metric/parser/IgsSsrDataField.h"
#include "org/orekit/gnss/metric/parser/IgsSsrMessageType.h"
#include "org/orekit/gnss/metric/parser/IgsSsrMessagesParser.h"
#include "org/orekit/gnss/metric/parser/InputStreamEncodedMessage.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "org/orekit/gnss/metric/parser/MessagesParser.h"
#include "org/orekit/gnss/metric/parser/PythonAbstractEncodedMessage.h"
#include "org/orekit/gnss/metric/parser/PythonDataField.h"
#include "org/orekit/gnss/metric/parser/PythonEncodedMessage.h"
#include "org/orekit/gnss/metric/parser/PythonMessageType.h"
#include "org/orekit/gnss/metric/parser/RtcmDataField.h"
#include "org/orekit/gnss/metric/parser/RtcmMessageType.h"
#include "org/orekit/gnss/metric/parser/RtcmMessagesParser.h"
#include "org/orekit/gnss/metric/parser/Units.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.gnss.metric", "parser");

            t_AbstractEncodedMessage::install(module);
            t_ByteArrayEncodedMessage::install(module);
            t_DataField::install(module);
            t_DataType::install(module);
            t_EncodedMessage::install(module);
            t_HexadecimalSequenceEncodedMessage::install(module);
            t_IgsSsrDataField::install(module);
            t_IgsSsrMessageType::install(module);
            t_IgsSsrMessagesParser::install(module);
            t_InputStreamEncodedMessage::install(module);
            t_MessageType::install(module);
            t_MessagesParser::install(module);
            t_PythonAbstractEncodedMessage::install(module);
            t_PythonDataField::install(module);
            t_PythonEncodedMessage::install(module);
            t_PythonMessageType::install(module);
            t_RtcmDataField::install(module);
            t_RtcmMessageType::install(module);
            t_RtcmMessagesParser::install(module);
            t_Units::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.gnss.metric", "parser");

            t_AbstractEncodedMessage::initialize(module);
            t_ByteArrayEncodedMessage::initialize(module);
            t_DataField::initialize(module);
            t_DataType::initialize(module);
            t_EncodedMessage::initialize(module);
            t_HexadecimalSequenceEncodedMessage::initialize(module);
            t_IgsSsrDataField::initialize(module);
            t_IgsSsrMessageType::initialize(module);
            t_IgsSsrMessagesParser::initialize(module);
            t_InputStreamEncodedMessage::initialize(module);
            t_MessageType::initialize(module);
            t_MessagesParser::initialize(module);
            t_PythonAbstractEncodedMessage::initialize(module);
            t_PythonDataField::initialize(module);
            t_PythonEncodedMessage::initialize(module);
            t_PythonMessageType::initialize(module);
            t_RtcmDataField::initialize(module);
            t_RtcmMessageType::initialize(module);
            t_RtcmMessagesParser::initialize(module);
            t_Units::initialize(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {

        namespace gps {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.gnss", "rflink");

          gps::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.gnss", "rflink");

          gps::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/gnss/rflink/gps/SubFrame.h"
#include "org/orekit/gnss/rflink/gps/SubFrame1.h"
#include "org/orekit/gnss/rflink/gps/SubFrame2.h"
#include "org/orekit/gnss/rflink/gps/SubFrame3.h"
#include "org/orekit/gnss/rflink/gps/SubFrame45.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A0.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A1.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4B.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4C.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4D.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4E.h"
#include "org/orekit/gnss/rflink/gps/SubFrame5B.h"
#include "org/orekit/gnss/rflink/gps/SubFrameAlmanac.h"
#include "org/orekit/gnss/rflink/gps/SubFrameDummyAlmanac.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.gnss.rflink", "gps");

            t_SubFrame::install(module);
            t_SubFrame1::install(module);
            t_SubFrame2::install(module);
            t_SubFrame3::install(module);
            t_SubFrame45::install(module);
            t_SubFrame4A::install(module);
            t_SubFrame4A0::install(module);
            t_SubFrame4A1::install(module);
            t_SubFrame4B::install(module);
            t_SubFrame4C::install(module);
            t_SubFrame4D::install(module);
            t_SubFrame4E::install(module);
            t_SubFrame5B::install(module);
            t_SubFrameAlmanac::install(module);
            t_SubFrameDummyAlmanac::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.gnss.rflink", "gps");

            t_SubFrame::initialize(module);
            t_SubFrame1::initialize(module);
            t_SubFrame2::initialize(module);
            t_SubFrame3::initialize(module);
            t_SubFrame45::initialize(module);
            t_SubFrame4A::initialize(module);
            t_SubFrame4A0::initialize(module);
            t_SubFrame4A1::initialize(module);
            t_SubFrame4B::initialize(module);
            t_SubFrame4C::initialize(module);
            t_SubFrame4D::initialize(module);
            t_SubFrame4E::initialize(module);
            t_SubFrame5B::initialize(module);
            t_SubFrameAlmanac::initialize(module);
            t_SubFrameDummyAlmanac::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/models/PythonAtmosphericRefractionModel.h"

namespace org {
  namespace orekit {
    namespace models {

      namespace earth {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "models");

        t_AtmosphericRefractionModel::install(module);
        t_PythonAtmosphericRefractionModel::install(module);
        earth::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "models");

        t_AtmosphericRefractionModel::initialize(module);
        t_PythonAtmosphericRefractionModel::initialize(module);
        earth::__initialize__(module);
      }
    }
  }
}

#include "org/orekit/models/earth/EarthITU453AtmosphereRefraction.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/models/earth/EarthStandardAtmosphereRefraction.h"
#include "org/orekit/models/earth/GeoMagneticElements.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticModelLoader.h"
#include "org/orekit/models/earth/Geoid.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "org/orekit/models/earth/PythonEarthShape.h"
#include "org/orekit/models/earth/PythonGeoMagneticFields.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        namespace atmosphere {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace displacement {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace ionosphere {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace tessellation {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace troposphere {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace weather {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.models", "earth");

          t_EarthITU453AtmosphereRefraction::install(module);
          t_EarthShape::install(module);
          t_EarthStandardAtmosphereRefraction::install(module);
          t_GeoMagneticElements::install(module);
          t_GeoMagneticField::install(module);
          t_GeoMagneticFieldFactory::install(module);
          t_GeoMagneticFieldFactory$FieldModel::install(module);
          t_GeoMagneticFields::install(module);
          t_GeoMagneticModelLoader::install(module);
          t_Geoid::install(module);
          t_LazyLoadedGeoMagneticFields::install(module);
          t_PythonEarthShape::install(module);
          t_PythonGeoMagneticFields::install(module);
          t_ReferenceEllipsoid::install(module);
          atmosphere::__install__(module);
          displacement::__install__(module);
          ionosphere::__install__(module);
          tessellation::__install__(module);
          troposphere::__install__(module);
          weather::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.models", "earth");

          t_EarthITU453AtmosphereRefraction::initialize(module);
          t_EarthShape::initialize(module);
          t_EarthStandardAtmosphereRefraction::initialize(module);
          t_GeoMagneticElements::initialize(module);
          t_GeoMagneticField::initialize(module);
          t_GeoMagneticFieldFactory::initialize(module);
          t_GeoMagneticFieldFactory$FieldModel::initialize(module);
          t_GeoMagneticFields::initialize(module);
          t_GeoMagneticModelLoader::initialize(module);
          t_Geoid::initialize(module);
          t_LazyLoadedGeoMagneticFields::initialize(module);
          t_PythonEarthShape::initialize(module);
          t_PythonGeoMagneticFields::initialize(module);
          t_ReferenceEllipsoid::initialize(module);
          atmosphere::__initialize__(module);
          displacement::__initialize__(module);
          ionosphere::__initialize__(module);
          tessellation::__initialize__(module);
          troposphere::__initialize__(module);
          weather::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/models/earth/atmosphere/DTM2000.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/orekit/models/earth/atmosphere/HarrisPriester.h"
#include "org/orekit/models/earth/atmosphere/JB2008.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00$FieldOutput.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "org/orekit/models/earth/atmosphere/PythonAtmosphere.h"
#include "org/orekit/models/earth/atmosphere/PythonDTM2000InputParameters.h"
#include "org/orekit/models/earth/atmosphere/PythonJB2008InputParameters.h"
#include "org/orekit/models/earth/atmosphere/PythonNRLMSISE00InputParameters.h"
#include "org/orekit/models/earth/atmosphere/SimpleExponentialAtmosphere.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          namespace data {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.models.earth", "atmosphere");

            t_Atmosphere::install(module);
            t_DTM2000::install(module);
            t_DTM2000InputParameters::install(module);
            t_HarrisPriester::install(module);
            t_JB2008::install(module);
            t_JB2008InputParameters::install(module);
            t_NRLMSISE00::install(module);
            t_NRLMSISE00$FieldOutput::install(module);
            t_NRLMSISE00InputParameters::install(module);
            t_PythonAtmosphere::install(module);
            t_PythonDTM2000InputParameters::install(module);
            t_PythonJB2008InputParameters::install(module);
            t_PythonNRLMSISE00InputParameters::install(module);
            t_SimpleExponentialAtmosphere::install(module);
            data::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.models.earth", "atmosphere");

            t_Atmosphere::initialize(module);
            t_DTM2000::initialize(module);
            t_DTM2000InputParameters::initialize(module);
            t_HarrisPriester::initialize(module);
            t_JB2008::initialize(module);
            t_JB2008InputParameters::initialize(module);
            t_NRLMSISE00::initialize(module);
            t_NRLMSISE00$FieldOutput::initialize(module);
            t_NRLMSISE00InputParameters::initialize(module);
            t_PythonAtmosphere::initialize(module);
            t_PythonDTM2000InputParameters::initialize(module);
            t_PythonJB2008InputParameters::initialize(module);
            t_PythonNRLMSISE00InputParameters::initialize(module);
            t_SimpleExponentialAtmosphere::initialize(module);
            data::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityData.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherData.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader.h"
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters.h"
#include "org/orekit/models/earth/atmosphere/data/JB2008SpaceEnvironmentData.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "org/orekit/models/earth/atmosphere/data/PythonAbstractSolarActivityData.h"
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader.h"
#include "org/orekit/models/earth/atmosphere/data/SOLFSMYDataLoader$LineParameters.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.models.earth.atmosphere", "data");

              t_AbstractSolarActivityData::install(module);
              t_AbstractSolarActivityDataLoader::install(module);
              t_AbstractSolarActivityDataLoader$LineParameters::install(module);
              t_CssiSpaceWeatherData::install(module);
              t_CssiSpaceWeatherDataLoader::install(module);
              t_CssiSpaceWeatherDataLoader$LineParameters::install(module);
              t_DtcDataLoader::install(module);
              t_DtcDataLoader$LineParameters::install(module);
              t_JB2008SpaceEnvironmentData::install(module);
              t_MarshallSolarActivityFutureEstimation::install(module);
              t_MarshallSolarActivityFutureEstimation$StrengthLevel::install(module);
              t_MarshallSolarActivityFutureEstimationLoader::install(module);
              t_MarshallSolarActivityFutureEstimationLoader$LineParameters::install(module);
              t_PythonAbstractSolarActivityData::install(module);
              t_SOLFSMYDataLoader::install(module);
              t_SOLFSMYDataLoader$LineParameters::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.models.earth.atmosphere", "data");

              t_AbstractSolarActivityData::initialize(module);
              t_AbstractSolarActivityDataLoader::initialize(module);
              t_AbstractSolarActivityDataLoader$LineParameters::initialize(module);
              t_CssiSpaceWeatherData::initialize(module);
              t_CssiSpaceWeatherDataLoader::initialize(module);
              t_CssiSpaceWeatherDataLoader$LineParameters::initialize(module);
              t_DtcDataLoader::initialize(module);
              t_DtcDataLoader$LineParameters::initialize(module);
              t_JB2008SpaceEnvironmentData::initialize(module);
              t_MarshallSolarActivityFutureEstimation::initialize(module);
              t_MarshallSolarActivityFutureEstimation$StrengthLevel::initialize(module);
              t_MarshallSolarActivityFutureEstimationLoader::initialize(module);
              t_MarshallSolarActivityFutureEstimationLoader$LineParameters::initialize(module);
              t_PythonAbstractSolarActivityData::initialize(module);
              t_SOLFSMYDataLoader::initialize(module);
              t_SOLFSMYDataLoader$LineParameters::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/models/earth/displacement/OceanLoading.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficientsBLQFactory.h"
#include "org/orekit/models/earth/displacement/PythonStationDisplacement.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/models/earth/displacement/TectonicsDisplacement.h"
#include "org/orekit/models/earth/displacement/TidalDisplacement.h"
#include "org/orekit/models/earth/displacement/Tide.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.models.earth", "displacement");

            t_OceanLoading::install(module);
            t_OceanLoadingCoefficients::install(module);
            t_OceanLoadingCoefficientsBLQFactory::install(module);
            t_PythonStationDisplacement::install(module);
            t_StationDisplacement::install(module);
            t_TectonicsDisplacement::install(module);
            t_TidalDisplacement::install(module);
            t_Tide::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.models.earth", "displacement");

            t_OceanLoading::initialize(module);
            t_OceanLoadingCoefficients::initialize(module);
            t_OceanLoadingCoefficientsBLQFactory::initialize(module);
            t_PythonStationDisplacement::initialize(module);
            t_StationDisplacement::initialize(module);
            t_TectonicsDisplacement::initialize(module);
            t_TidalDisplacement::initialize(module);
            t_Tide::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/models/earth/ionosphere/EstimatedIonosphericModel.h"
#include "org/orekit/models/earth/ionosphere/GlobalIonosphereMapModel.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/models/earth/ionosphere/KlobucharIonoCoefficientsLoader.h"
#include "org/orekit/models/earth/ionosphere/KlobucharIonoModel.h"
#include "org/orekit/models/earth/ionosphere/NeQuickModel.h"
#include "org/orekit/models/earth/ionosphere/PythonIonosphericMappingFunction.h"
#include "org/orekit/models/earth/ionosphere/PythonIonosphericModel.h"
#include "org/orekit/models/earth/ionosphere/SingleLayerModelMappingFunction.h"
#include "org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.models.earth", "ionosphere");

            t_EstimatedIonosphericModel::install(module);
            t_GlobalIonosphereMapModel::install(module);
            t_IonosphericMappingFunction::install(module);
            t_IonosphericModel::install(module);
            t_KlobucharIonoCoefficientsLoader::install(module);
            t_KlobucharIonoModel::install(module);
            t_NeQuickModel::install(module);
            t_PythonIonosphericMappingFunction::install(module);
            t_PythonIonosphericModel::install(module);
            t_SingleLayerModelMappingFunction::install(module);
            t_SsrVtecIonosphericModel::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.models.earth", "ionosphere");

            t_EstimatedIonosphericModel::initialize(module);
            t_GlobalIonosphereMapModel::initialize(module);
            t_IonosphericMappingFunction::initialize(module);
            t_IonosphericModel::initialize(module);
            t_KlobucharIonoCoefficientsLoader::initialize(module);
            t_KlobucharIonoModel::initialize(module);
            t_NeQuickModel::initialize(module);
            t_PythonIonosphericMappingFunction::initialize(module);
            t_PythonIonosphericModel::initialize(module);
            t_SingleLayerModelMappingFunction::initialize(module);
            t_SsrVtecIonosphericModel::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/models/earth/tessellation/AlongTrackAiming.h"
#include "org/orekit/models/earth/tessellation/ConstantAzimuthAiming.h"
#include "org/orekit/models/earth/tessellation/DivertedSingularityAiming.h"
#include "org/orekit/models/earth/tessellation/EllipsoidTessellator.h"
#include "org/orekit/models/earth/tessellation/Mesh$Node.h"
#include "org/orekit/models/earth/tessellation/PythonTileAiming.h"
#include "org/orekit/models/earth/tessellation/Tile.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.models.earth", "tessellation");

            t_AlongTrackAiming::install(module);
            t_ConstantAzimuthAiming::install(module);
            t_DivertedSingularityAiming::install(module);
            t_EllipsoidTessellator::install(module);
            t_Mesh$Node::install(module);
            t_PythonTileAiming::install(module);
            t_Tile::install(module);
            t_TileAiming::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.models.earth", "tessellation");

            t_AlongTrackAiming::initialize(module);
            t_ConstantAzimuthAiming::initialize(module);
            t_DivertedSingularityAiming::initialize(module);
            t_EllipsoidTessellator::initialize(module);
            t_Mesh$Node::initialize(module);
            t_PythonTileAiming::initialize(module);
            t_Tile::initialize(module);
            t_TileAiming::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/EstimatedTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/FixedTroposphericDelay.h"
#include "org/orekit/models/earth/troposphere/GlobalMappingFunctionModel.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/models/earth/troposphere/MariniMurrayModel.h"
#include "org/orekit/models/earth/troposphere/MendesPavlisModel.h"
#include "org/orekit/models/earth/troposphere/NiellMappingFunctionModel.h"
#include "org/orekit/models/earth/troposphere/PythonDiscreteTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/PythonMappingFunction.h"
#include "org/orekit/models/earth/troposphere/SaastamoinenModel.h"
#include "org/orekit/models/earth/troposphere/TimeSpanEstimatedTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/TroposphericModelUtils.h"
#include "org/orekit/models/earth/troposphere/ViennaModelCoefficientsLoader.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "org/orekit/models/earth/troposphere/ViennaOneModel.h"
#include "org/orekit/models/earth/troposphere/ViennaThreeModel.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.models.earth", "troposphere");

            t_DiscreteTroposphericModel::install(module);
            t_EstimatedTroposphericModel::install(module);
            t_FixedTroposphericDelay::install(module);
            t_GlobalMappingFunctionModel::install(module);
            t_MappingFunction::install(module);
            t_MariniMurrayModel::install(module);
            t_MendesPavlisModel::install(module);
            t_NiellMappingFunctionModel::install(module);
            t_PythonDiscreteTroposphericModel::install(module);
            t_PythonMappingFunction::install(module);
            t_SaastamoinenModel::install(module);
            t_TimeSpanEstimatedTroposphericModel::install(module);
            t_TroposphericModelUtils::install(module);
            t_ViennaModelCoefficientsLoader::install(module);
            t_ViennaModelType::install(module);
            t_ViennaOneModel::install(module);
            t_ViennaThreeModel::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.models.earth", "troposphere");

            t_DiscreteTroposphericModel::initialize(module);
            t_EstimatedTroposphericModel::initialize(module);
            t_FixedTroposphericDelay::initialize(module);
            t_GlobalMappingFunctionModel::initialize(module);
            t_MappingFunction::initialize(module);
            t_MariniMurrayModel::initialize(module);
            t_MendesPavlisModel::initialize(module);
            t_NiellMappingFunctionModel::initialize(module);
            t_PythonDiscreteTroposphericModel::initialize(module);
            t_PythonMappingFunction::initialize(module);
            t_SaastamoinenModel::initialize(module);
            t_TimeSpanEstimatedTroposphericModel::initialize(module);
            t_TroposphericModelUtils::initialize(module);
            t_ViennaModelCoefficientsLoader::initialize(module);
            t_ViennaModelType::initialize(module);
            t_ViennaOneModel::initialize(module);
            t_ViennaThreeModel::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/models/earth/weather/GlobalPressureTemperature2Model.h"
#include "org/orekit/models/earth/weather/GlobalPressureTemperatureModel.h"
#include "org/orekit/models/earth/weather/PythonWeatherModel.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.models.earth", "weather");

            t_GlobalPressureTemperature2Model::install(module);
            t_GlobalPressureTemperatureModel::install(module);
            t_PythonWeatherModel::install(module);
            t_WeatherModel::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.models.earth", "weather");

            t_GlobalPressureTemperature2Model::initialize(module);
            t_GlobalPressureTemperatureModel::initialize(module);
            t_PythonWeatherModel::initialize(module);
            t_WeatherModel::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/orbits/AbstractFieldOrbitInterpolator.h"
#include "org/orekit/orbits/AbstractOrbitInterpolator.h"
#include "org/orekit/orbits/CR3BPDifferentialCorrection.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "org/orekit/orbits/FieldEquinoctialOrbit.h"
#include "org/orekit/orbits/FieldKeplerianAnomalyUtility.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/FieldOrbitBlender.h"
#include "org/orekit/orbits/FieldOrbitHermiteInterpolator.h"
#include "org/orekit/orbits/HaloOrbit.h"
#include "org/orekit/orbits/KeplerianAnomalyUtility.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/orbits/LibrationOrbit.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "org/orekit/orbits/LyapunovOrbit.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitBlender.h"
#include "org/orekit/orbits/OrbitHermiteInterpolator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/PythonLibrationOrbit.h"
#include "org/orekit/orbits/PythonOrbit.h"
#include "org/orekit/orbits/RichardsonExpansion.h"

namespace org {
  namespace orekit {
    namespace orbits {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "orbits");

        t_AbstractFieldOrbitInterpolator::install(module);
        t_AbstractOrbitInterpolator::install(module);
        t_CR3BPDifferentialCorrection::install(module);
        t_CartesianOrbit::install(module);
        t_CircularOrbit::install(module);
        t_EquinoctialOrbit::install(module);
        t_FieldCartesianOrbit::install(module);
        t_FieldCircularOrbit::install(module);
        t_FieldEquinoctialOrbit::install(module);
        t_FieldKeplerianAnomalyUtility::install(module);
        t_FieldKeplerianOrbit::install(module);
        t_FieldOrbit::install(module);
        t_FieldOrbitBlender::install(module);
        t_FieldOrbitHermiteInterpolator::install(module);
        t_HaloOrbit::install(module);
        t_KeplerianAnomalyUtility::install(module);
        t_KeplerianOrbit::install(module);
        t_LibrationOrbit::install(module);
        t_LibrationOrbitFamily::install(module);
        t_LibrationOrbitType::install(module);
        t_LyapunovOrbit::install(module);
        t_Orbit::install(module);
        t_OrbitBlender::install(module);
        t_OrbitHermiteInterpolator::install(module);
        t_OrbitType::install(module);
        t_PositionAngleBased::install(module);
        t_PositionAngleType::install(module);
        t_PythonLibrationOrbit::install(module);
        t_PythonOrbit::install(module);
        t_RichardsonExpansion::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "orbits");

        t_AbstractFieldOrbitInterpolator::initialize(module);
        t_AbstractOrbitInterpolator::initialize(module);
        t_CR3BPDifferentialCorrection::initialize(module);
        t_CartesianOrbit::initialize(module);
        t_CircularOrbit::initialize(module);
        t_EquinoctialOrbit::initialize(module);
        t_FieldCartesianOrbit::initialize(module);
        t_FieldCircularOrbit::initialize(module);
        t_FieldEquinoctialOrbit::initialize(module);
        t_FieldKeplerianAnomalyUtility::initialize(module);
        t_FieldKeplerianOrbit::initialize(module);
        t_FieldOrbit::initialize(module);
        t_FieldOrbitBlender::initialize(module);
        t_FieldOrbitHermiteInterpolator::initialize(module);
        t_HaloOrbit::initialize(module);
        t_KeplerianAnomalyUtility::initialize(module);
        t_KeplerianOrbit::initialize(module);
        t_LibrationOrbit::initialize(module);
        t_LibrationOrbitFamily::initialize(module);
        t_LibrationOrbitType::initialize(module);
        t_LyapunovOrbit::initialize(module);
        t_Orbit::initialize(module);
        t_OrbitBlender::initialize(module);
        t_OrbitHermiteInterpolator::initialize(module);
        t_OrbitType::initialize(module);
        t_PositionAngleBased::initialize(module);
        t_PositionAngleType::initialize(module);
        t_PythonLibrationOrbit::initialize(module);
        t_PythonOrbit::initialize(module);
        t_RichardsonExpansion::initialize(module);
      }
    }
  }
}

#include "org/orekit/propagation/AbstractMatricesHarvester.h"
#include "org/orekit/propagation/AbstractPropagator.h"
#include "org/orekit/propagation/AbstractStateCovarianceInterpolator.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/propagation/FieldAbstractPropagator.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftStateInterpolator.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/PropagatorsParallelizer.h"
#include "org/orekit/propagation/PythonAbstractMatricesHarvester.h"
#include "org/orekit/propagation/PythonAbstractPropagator.h"
#include "org/orekit/propagation/PythonAdditionalStateProvider.h"
#include "org/orekit/propagation/PythonBoundedPropagator.h"
#include "org/orekit/propagation/PythonEphemerisGenerator.h"
#include "org/orekit/propagation/PythonFieldAbstractPropagator.h"
#include "org/orekit/propagation/PythonFieldAdditionalStateProvider.h"
#include "org/orekit/propagation/PythonFieldBoundedPropagator.h"
#include "org/orekit/propagation/PythonFieldEphemerisGenerator.h"
#include "org/orekit/propagation/PythonFieldPropagator.h"
#include "org/orekit/propagation/PythonMatricesHarvester.h"
#include "org/orekit/propagation/PythonPropagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/SpacecraftStateInterpolator.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/propagation/StateCovarianceBlender.h"
#include "org/orekit/propagation/StateCovarianceKeplerianHermiteInterpolator.h"
#include "org/orekit/propagation/StateCovarianceMatrixProvider.h"

namespace org {
  namespace orekit {
    namespace propagation {

      namespace analytical {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace conversion {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace events {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace integration {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace numerical {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace sampling {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace semianalytical {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "propagation");

        t_AbstractMatricesHarvester::install(module);
        t_AbstractPropagator::install(module);
        t_AbstractStateCovarianceInterpolator::install(module);
        t_AdditionalStateProvider::install(module);
        t_BoundedPropagator::install(module);
        t_EphemerisGenerator::install(module);
        t_FieldAbstractPropagator::install(module);
        t_FieldAdditionalStateProvider::install(module);
        t_FieldBoundedPropagator::install(module);
        t_FieldEphemerisGenerator::install(module);
        t_FieldPropagator::install(module);
        t_FieldSpacecraftState::install(module);
        t_FieldSpacecraftStateInterpolator::install(module);
        t_FieldStateCovariance::install(module);
        t_MatricesHarvester::install(module);
        t_PropagationType::install(module);
        t_Propagator::install(module);
        t_PropagatorsParallelizer::install(module);
        t_PythonAbstractMatricesHarvester::install(module);
        t_PythonAbstractPropagator::install(module);
        t_PythonAdditionalStateProvider::install(module);
        t_PythonBoundedPropagator::install(module);
        t_PythonEphemerisGenerator::install(module);
        t_PythonFieldAbstractPropagator::install(module);
        t_PythonFieldAdditionalStateProvider::install(module);
        t_PythonFieldBoundedPropagator::install(module);
        t_PythonFieldEphemerisGenerator::install(module);
        t_PythonFieldPropagator::install(module);
        t_PythonMatricesHarvester::install(module);
        t_PythonPropagator::install(module);
        t_SpacecraftState::install(module);
        t_SpacecraftStateInterpolator::install(module);
        t_StateCovariance::install(module);
        t_StateCovarianceBlender::install(module);
        t_StateCovarianceKeplerianHermiteInterpolator::install(module);
        t_StateCovarianceMatrixProvider::install(module);
        analytical::__install__(module);
        conversion::__install__(module);
        events::__install__(module);
        integration::__install__(module);
        numerical::__install__(module);
        sampling::__install__(module);
        semianalytical::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "propagation");

        t_AbstractMatricesHarvester::initialize(module);
        t_AbstractPropagator::initialize(module);
        t_AbstractStateCovarianceInterpolator::initialize(module);
        t_AdditionalStateProvider::initialize(module);
        t_BoundedPropagator::initialize(module);
        t_EphemerisGenerator::initialize(module);
        t_FieldAbstractPropagator::initialize(module);
        t_FieldAdditionalStateProvider::initialize(module);
        t_FieldBoundedPropagator::initialize(module);
        t_FieldEphemerisGenerator::initialize(module);
        t_FieldPropagator::initialize(module);
        t_FieldSpacecraftState::initialize(module);
        t_FieldSpacecraftStateInterpolator::initialize(module);
        t_FieldStateCovariance::initialize(module);
        t_MatricesHarvester::initialize(module);
        t_PropagationType::initialize(module);
        t_Propagator::initialize(module);
        t_PropagatorsParallelizer::initialize(module);
        t_PythonAbstractMatricesHarvester::initialize(module);
        t_PythonAbstractPropagator::initialize(module);
        t_PythonAdditionalStateProvider::initialize(module);
        t_PythonBoundedPropagator::initialize(module);
        t_PythonEphemerisGenerator::initialize(module);
        t_PythonFieldAbstractPropagator::initialize(module);
        t_PythonFieldAdditionalStateProvider::initialize(module);
        t_PythonFieldBoundedPropagator::initialize(module);
        t_PythonFieldEphemerisGenerator::initialize(module);
        t_PythonFieldPropagator::initialize(module);
        t_PythonMatricesHarvester::initialize(module);
        t_PythonPropagator::initialize(module);
        t_SpacecraftState::initialize(module);
        t_SpacecraftStateInterpolator::initialize(module);
        t_StateCovariance::initialize(module);
        t_StateCovarianceBlender::initialize(module);
        t_StateCovarianceKeplerianHermiteInterpolator::initialize(module);
        t_StateCovarianceMatrixProvider::initialize(module);
        analytical::__initialize__(module);
        conversion::__initialize__(module);
        events::__initialize__(module);
        integration::__initialize__(module);
        numerical::__initialize__(module);
        sampling::__initialize__(module);
        semianalytical::__initialize__(module);
      }
    }
  }
}

#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalMatricesHarvester.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "org/orekit/propagation/analytical/AdapterPropagator.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "org/orekit/propagation/analytical/AggregateBoundedPropagator.h"
#include "org/orekit/propagation/analytical/BrouwerLyddanePropagator.h"
#include "org/orekit/propagation/analytical/EcksteinHechlerPropagator.h"
#include "org/orekit/propagation/analytical/Ephemeris.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/orekit/propagation/analytical/FieldBrouwerLyddanePropagator.h"
#include "org/orekit/propagation/analytical/FieldEcksteinHechlerPropagator.h"
#include "org/orekit/propagation/analytical/FieldKeplerianPropagator.h"
#include "org/orekit/propagation/analytical/J2DifferentialEffect.h"
#include "org/orekit/propagation/analytical/KeplerianPropagator.h"
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalGradientConverter.h"
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalMatricesHarvester.h"
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalPropagator.h"
#include "org/orekit/propagation/analytical/PythonFieldAbstractAnalyticalPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        namespace gnss {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }
        namespace tle {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "analytical");

          t_AbstractAnalyticalGradientConverter::install(module);
          t_AbstractAnalyticalMatricesHarvester::install(module);
          t_AbstractAnalyticalPropagator::install(module);
          t_AdapterPropagator::install(module);
          t_AdapterPropagator$DifferentialEffect::install(module);
          t_AggregateBoundedPropagator::install(module);
          t_BrouwerLyddanePropagator::install(module);
          t_EcksteinHechlerPropagator::install(module);
          t_Ephemeris::install(module);
          t_FieldAbstractAnalyticalPropagator::install(module);
          t_FieldBrouwerLyddanePropagator::install(module);
          t_FieldEcksteinHechlerPropagator::install(module);
          t_FieldKeplerianPropagator::install(module);
          t_J2DifferentialEffect::install(module);
          t_KeplerianPropagator::install(module);
          t_PythonAbstractAnalyticalGradientConverter::install(module);
          t_PythonAbstractAnalyticalMatricesHarvester::install(module);
          t_PythonAbstractAnalyticalPropagator::install(module);
          t_PythonFieldAbstractAnalyticalPropagator::install(module);
          gnss::__install__(module);
          tle::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "analytical");

          t_AbstractAnalyticalGradientConverter::initialize(module);
          t_AbstractAnalyticalMatricesHarvester::initialize(module);
          t_AbstractAnalyticalPropagator::initialize(module);
          t_AdapterPropagator::initialize(module);
          t_AdapterPropagator$DifferentialEffect::initialize(module);
          t_AggregateBoundedPropagator::initialize(module);
          t_BrouwerLyddanePropagator::initialize(module);
          t_EcksteinHechlerPropagator::initialize(module);
          t_Ephemeris::initialize(module);
          t_FieldAbstractAnalyticalPropagator::initialize(module);
          t_FieldBrouwerLyddanePropagator::initialize(module);
          t_FieldEcksteinHechlerPropagator::initialize(module);
          t_FieldKeplerianPropagator::initialize(module);
          t_J2DifferentialEffect::initialize(module);
          t_KeplerianPropagator::initialize(module);
          t_PythonAbstractAnalyticalGradientConverter::initialize(module);
          t_PythonAbstractAnalyticalMatricesHarvester::initialize(module);
          t_PythonAbstractAnalyticalPropagator::initialize(module);
          t_PythonFieldAbstractAnalyticalPropagator::initialize(module);
          gnss::__initialize__(module);
          tle::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/propagation/analytical/gnss/ClockCorrectionsProvider.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          namespace data {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.propagation.analytical", "gnss");

            t_ClockCorrectionsProvider::install(module);
            t_GLONASSAnalyticalPropagator::install(module);
            t_GLONASSAnalyticalPropagatorBuilder::install(module);
            t_GNSSPropagator::install(module);
            t_GNSSPropagatorBuilder::install(module);
            t_SBASPropagator::install(module);
            t_SBASPropagatorBuilder::install(module);
            data::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.propagation.analytical", "gnss");

            t_ClockCorrectionsProvider::initialize(module);
            t_GLONASSAnalyticalPropagator::initialize(module);
            t_GLONASSAnalyticalPropagatorBuilder::initialize(module);
            t_GNSSPropagator::initialize(module);
            t_GNSSPropagatorBuilder::initialize(module);
            t_SBASPropagator::initialize(module);
            t_SBASPropagatorBuilder::initialize(module);
            data::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/propagation/analytical/gnss/data/AbstractAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractEphemerisMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "org/orekit/propagation/analytical/gnss/data/CivilianNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/CommonGnssData.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSEphemeris.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSConstants.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/IRNSSAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/LegacyNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/PythonSBASOrbitalElements.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSAlmanac.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.propagation.analytical.gnss", "data");

              t_AbstractAlmanac::install(module);
              t_AbstractEphemerisMessage::install(module);
              t_AbstractNavigationMessage::install(module);
              t_BeidouAlmanac::install(module);
              t_BeidouCivilianNavigationMessage::install(module);
              t_BeidouLegacyNavigationMessage::install(module);
              t_BeidouSatelliteType::install(module);
              t_CivilianNavigationMessage::install(module);
              t_CommonGnssData::install(module);
              t_GLONASSAlmanac::install(module);
              t_GLONASSEphemeris::install(module);
              t_GLONASSNavigationMessage::install(module);
              t_GLONASSOrbitalElements::install(module);
              t_GNSSClockElements::install(module);
              t_GNSSConstants::install(module);
              t_GNSSOrbitalElements::install(module);
              t_GPSAlmanac::install(module);
              t_GPSCivilianNavigationMessage::install(module);
              t_GPSLegacyNavigationMessage::install(module);
              t_GalileoAlmanac::install(module);
              t_GalileoNavigationMessage::install(module);
              t_IRNSSAlmanac::install(module);
              t_IRNSSNavigationMessage::install(module);
              t_LegacyNavigationMessage::install(module);
              t_PythonSBASOrbitalElements::install(module);
              t_QZSSAlmanac::install(module);
              t_QZSSCivilianNavigationMessage::install(module);
              t_QZSSLegacyNavigationMessage::install(module);
              t_SBASNavigationMessage::install(module);
              t_SBASOrbitalElements::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.propagation.analytical.gnss", "data");

              t_AbstractAlmanac::initialize(module);
              t_AbstractEphemerisMessage::initialize(module);
              t_AbstractNavigationMessage::initialize(module);
              t_BeidouAlmanac::initialize(module);
              t_BeidouCivilianNavigationMessage::initialize(module);
              t_BeidouLegacyNavigationMessage::initialize(module);
              t_BeidouSatelliteType::initialize(module);
              t_CivilianNavigationMessage::initialize(module);
              t_CommonGnssData::initialize(module);
              t_GLONASSAlmanac::initialize(module);
              t_GLONASSEphemeris::initialize(module);
              t_GLONASSNavigationMessage::initialize(module);
              t_GLONASSOrbitalElements::initialize(module);
              t_GNSSClockElements::initialize(module);
              t_GNSSConstants::initialize(module);
              t_GNSSOrbitalElements::initialize(module);
              t_GPSAlmanac::initialize(module);
              t_GPSCivilianNavigationMessage::initialize(module);
              t_GPSLegacyNavigationMessage::initialize(module);
              t_GalileoAlmanac::initialize(module);
              t_GalileoNavigationMessage::initialize(module);
              t_IRNSSAlmanac::initialize(module);
              t_IRNSSNavigationMessage::initialize(module);
              t_LegacyNavigationMessage::initialize(module);
              t_PythonSBASOrbitalElements::initialize(module);
              t_QZSSAlmanac::initialize(module);
              t_QZSSCivilianNavigationMessage::initialize(module);
              t_QZSSLegacyNavigationMessage::initialize(module);
              t_SBASNavigationMessage::initialize(module);
              t_SBASOrbitalElements::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/propagation/analytical/tle/DeepSDP4.h"
#include "org/orekit/propagation/analytical/tle/FieldDeepSDP4.h"
#include "org/orekit/propagation/analytical/tle/FieldSDP4.h"
#include "org/orekit/propagation/analytical/tle/FieldSGP4.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/analytical/tle/FieldTLEPropagator.h"
#include "org/orekit/propagation/analytical/tle/PythonFieldSDP4.h"
#include "org/orekit/propagation/analytical/tle/PythonTLEPropagator.h"
#include "org/orekit/propagation/analytical/tle/SDP4.h"
#include "org/orekit/propagation/analytical/tle/SGP4.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/propagation/analytical/tle/TLEConstants.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          namespace generation {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.propagation.analytical", "tle");

            t_DeepSDP4::install(module);
            t_FieldDeepSDP4::install(module);
            t_FieldSDP4::install(module);
            t_FieldSGP4::install(module);
            t_FieldTLE::install(module);
            t_FieldTLEPropagator::install(module);
            t_PythonFieldSDP4::install(module);
            t_PythonTLEPropagator::install(module);
            t_SDP4::install(module);
            t_SGP4::install(module);
            t_TLE::install(module);
            t_TLEConstants::install(module);
            t_TLEPropagator::install(module);
            generation::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.propagation.analytical", "tle");

            t_DeepSDP4::initialize(module);
            t_FieldDeepSDP4::initialize(module);
            t_FieldSDP4::initialize(module);
            t_FieldSGP4::initialize(module);
            t_FieldTLE::initialize(module);
            t_FieldTLEPropagator::initialize(module);
            t_PythonFieldSDP4::initialize(module);
            t_PythonTLEPropagator::initialize(module);
            t_SDP4::initialize(module);
            t_SGP4::initialize(module);
            t_TLE::initialize(module);
            t_TLEConstants::initialize(module);
            t_TLEPropagator::initialize(module);
            generation::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/propagation/analytical/tle/generation/FixedPointTleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/generation/LeastSquaresTleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/generation/PythonTleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationUtil.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.propagation.analytical.tle", "generation");

              t_FixedPointTleGenerationAlgorithm::install(module);
              t_LeastSquaresTleGenerationAlgorithm::install(module);
              t_PythonTleGenerationAlgorithm::install(module);
              t_TleGenerationAlgorithm::install(module);
              t_TleGenerationUtil::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.propagation.analytical.tle", "generation");

              t_FixedPointTleGenerationAlgorithm::initialize(module);
              t_LeastSquaresTleGenerationAlgorithm::initialize(module);
              t_PythonTleGenerationAlgorithm::initialize(module);
              t_TleGenerationAlgorithm::initialize(module);
              t_TleGenerationUtil::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/propagation/conversion/AbstractFieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/AbstractFixedStepFieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/AbstractLimitedVariableStepFieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/AbstractPropagatorConverter.h"
#include "org/orekit/propagation/conversion/AbstractVariableStepFieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/AdamsBashforthFieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/AdamsBashforthIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/AdamsMoultonFieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/AdamsMoultonIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder.h"
#include "org/orekit/propagation/conversion/ClassicalRungeKuttaFieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/ClassicalRungeKuttaIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/DormandPrince54FieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/DormandPrince54IntegratorBuilder.h"
#include "org/orekit/propagation/conversion/DormandPrince853FieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/DormandPrince853IntegratorBuilder.h"
#include "org/orekit/propagation/conversion/EcksteinHechlerPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/EphemerisPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/EulerFieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/EulerIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/FiniteDifferencePropagatorConverter.h"
#include "org/orekit/propagation/conversion/GillFieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/GillIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/GraggBulirschStoerIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/HighamHall54FieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/HighamHall54IntegratorBuilder.h"
#include "org/orekit/propagation/conversion/JacobianPropagatorConverter.h"
#include "org/orekit/propagation/conversion/KeplerianPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/LutherFieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/LutherIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/MidpointFieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/MidpointIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/OsculatingToMeanElementsConverter.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "org/orekit/propagation/conversion/PythonAbstractPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PythonAbstractPropagatorConverter.h"
#include "org/orekit/propagation/conversion/PythonFieldODEIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/PythonODEIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/PythonPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PythonPropagatorConverter.h"
#include "org/orekit/propagation/conversion/TLEPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/ThreeEighthesFieldIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/ThreeEighthesIntegratorBuilder.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "conversion");

          t_AbstractFieldIntegratorBuilder::install(module);
          t_AbstractFixedStepFieldIntegratorBuilder::install(module);
          t_AbstractLimitedVariableStepFieldIntegratorBuilder::install(module);
          t_AbstractPropagatorBuilder::install(module);
          t_AbstractPropagatorConverter::install(module);
          t_AbstractVariableStepFieldIntegratorBuilder::install(module);
          t_AdamsBashforthFieldIntegratorBuilder::install(module);
          t_AdamsBashforthIntegratorBuilder::install(module);
          t_AdamsMoultonFieldIntegratorBuilder::install(module);
          t_AdamsMoultonIntegratorBuilder::install(module);
          t_BrouwerLyddanePropagatorBuilder::install(module);
          t_ClassicalRungeKuttaFieldIntegratorBuilder::install(module);
          t_ClassicalRungeKuttaIntegratorBuilder::install(module);
          t_DSSTPropagatorBuilder::install(module);
          t_DormandPrince54FieldIntegratorBuilder::install(module);
          t_DormandPrince54IntegratorBuilder::install(module);
          t_DormandPrince853FieldIntegratorBuilder::install(module);
          t_DormandPrince853IntegratorBuilder::install(module);
          t_EcksteinHechlerPropagatorBuilder::install(module);
          t_EphemerisPropagatorBuilder::install(module);
          t_EulerFieldIntegratorBuilder::install(module);
          t_EulerIntegratorBuilder::install(module);
          t_FieldODEIntegratorBuilder::install(module);
          t_FiniteDifferencePropagatorConverter::install(module);
          t_GillFieldIntegratorBuilder::install(module);
          t_GillIntegratorBuilder::install(module);
          t_GraggBulirschStoerIntegratorBuilder::install(module);
          t_HighamHall54FieldIntegratorBuilder::install(module);
          t_HighamHall54IntegratorBuilder::install(module);
          t_JacobianPropagatorConverter::install(module);
          t_KeplerianPropagatorBuilder::install(module);
          t_LutherFieldIntegratorBuilder::install(module);
          t_LutherIntegratorBuilder::install(module);
          t_MidpointFieldIntegratorBuilder::install(module);
          t_MidpointIntegratorBuilder::install(module);
          t_NumericalPropagatorBuilder::install(module);
          t_ODEIntegratorBuilder::install(module);
          t_OsculatingToMeanElementsConverter::install(module);
          t_PropagatorBuilder::install(module);
          t_PropagatorConverter::install(module);
          t_PythonAbstractPropagatorBuilder::install(module);
          t_PythonAbstractPropagatorConverter::install(module);
          t_PythonFieldODEIntegratorBuilder::install(module);
          t_PythonODEIntegratorBuilder::install(module);
          t_PythonPropagatorBuilder::install(module);
          t_PythonPropagatorConverter::install(module);
          t_TLEPropagatorBuilder::install(module);
          t_ThreeEighthesFieldIntegratorBuilder::install(module);
          t_ThreeEighthesIntegratorBuilder::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "conversion");

          t_AbstractFieldIntegratorBuilder::initialize(module);
          t_AbstractFixedStepFieldIntegratorBuilder::initialize(module);
          t_AbstractLimitedVariableStepFieldIntegratorBuilder::initialize(module);
          t_AbstractPropagatorBuilder::initialize(module);
          t_AbstractPropagatorConverter::initialize(module);
          t_AbstractVariableStepFieldIntegratorBuilder::initialize(module);
          t_AdamsBashforthFieldIntegratorBuilder::initialize(module);
          t_AdamsBashforthIntegratorBuilder::initialize(module);
          t_AdamsMoultonFieldIntegratorBuilder::initialize(module);
          t_AdamsMoultonIntegratorBuilder::initialize(module);
          t_BrouwerLyddanePropagatorBuilder::initialize(module);
          t_ClassicalRungeKuttaFieldIntegratorBuilder::initialize(module);
          t_ClassicalRungeKuttaIntegratorBuilder::initialize(module);
          t_DSSTPropagatorBuilder::initialize(module);
          t_DormandPrince54FieldIntegratorBuilder::initialize(module);
          t_DormandPrince54IntegratorBuilder::initialize(module);
          t_DormandPrince853FieldIntegratorBuilder::initialize(module);
          t_DormandPrince853IntegratorBuilder::initialize(module);
          t_EcksteinHechlerPropagatorBuilder::initialize(module);
          t_EphemerisPropagatorBuilder::initialize(module);
          t_EulerFieldIntegratorBuilder::initialize(module);
          t_EulerIntegratorBuilder::initialize(module);
          t_FieldODEIntegratorBuilder::initialize(module);
          t_FiniteDifferencePropagatorConverter::initialize(module);
          t_GillFieldIntegratorBuilder::initialize(module);
          t_GillIntegratorBuilder::initialize(module);
          t_GraggBulirschStoerIntegratorBuilder::initialize(module);
          t_HighamHall54FieldIntegratorBuilder::initialize(module);
          t_HighamHall54IntegratorBuilder::initialize(module);
          t_JacobianPropagatorConverter::initialize(module);
          t_KeplerianPropagatorBuilder::initialize(module);
          t_LutherFieldIntegratorBuilder::initialize(module);
          t_LutherIntegratorBuilder::initialize(module);
          t_MidpointFieldIntegratorBuilder::initialize(module);
          t_MidpointIntegratorBuilder::initialize(module);
          t_NumericalPropagatorBuilder::initialize(module);
          t_ODEIntegratorBuilder::initialize(module);
          t_OsculatingToMeanElementsConverter::initialize(module);
          t_PropagatorBuilder::initialize(module);
          t_PropagatorConverter::initialize(module);
          t_PythonAbstractPropagatorBuilder::initialize(module);
          t_PythonAbstractPropagatorConverter::initialize(module);
          t_PythonFieldODEIntegratorBuilder::initialize(module);
          t_PythonODEIntegratorBuilder::initialize(module);
          t_PythonPropagatorBuilder::initialize(module);
          t_PythonPropagatorConverter::initialize(module);
          t_TLEPropagatorBuilder::initialize(module);
          t_ThreeEighthesFieldIntegratorBuilder::initialize(module);
          t_ThreeEighthesIntegratorBuilder::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/events/AdapterDetector.h"
#include "org/orekit/propagation/events/AlignmentDetector.h"
#include "org/orekit/propagation/events/AltitudeDetector.h"
#include "org/orekit/propagation/events/AngularSeparationDetector.h"
#include "org/orekit/propagation/events/AngularSeparationFromSatelliteDetector.h"
#include "org/orekit/propagation/events/ApsideDetector.h"
#include "org/orekit/propagation/events/BooleanDetector.h"
#include "org/orekit/propagation/events/DateDetector.h"
#include "org/orekit/propagation/events/EclipseDetector.h"
#include "org/orekit/propagation/events/ElevationDetector.h"
#include "org/orekit/propagation/events/ElevationExtremumDetector.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/propagation/events/EventEnablingPredicateFilter.h"
#include "org/orekit/propagation/events/EventShifter.h"
#include "org/orekit/propagation/events/EventSlopeFilter.h"
#include "org/orekit/propagation/events/EventState.h"
#include "org/orekit/propagation/events/EventState$EventOccurrence.h"
#include "org/orekit/propagation/events/EventsLogger.h"
#include "org/orekit/propagation/events/EventsLogger$LoggedEvent.h"
#include "org/orekit/propagation/events/ExtremumApproachDetector.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/orekit/propagation/events/FieldAdapterDetector.h"
#include "org/orekit/propagation/events/FieldAltitudeDetector.h"
#include "org/orekit/propagation/events/FieldApsideDetector.h"
#include "org/orekit/propagation/events/FieldBooleanDetector.h"
#include "org/orekit/propagation/events/FieldDateDetector.h"
#include "org/orekit/propagation/events/FieldEclipseDetector.h"
#include "org/orekit/propagation/events/FieldElevationDetector.h"
#include "org/orekit/propagation/events/FieldElevationExtremumDetector.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/events/FieldEventEnablingPredicateFilter.h"
#include "org/orekit/propagation/events/FieldEventSlopeFilter.h"
#include "org/orekit/propagation/events/FieldEventState.h"
#include "org/orekit/propagation/events/FieldEventState$EventOccurrence.h"
#include "org/orekit/propagation/events/FieldEventsLogger.h"
#include "org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent.h"
#include "org/orekit/propagation/events/FieldFunctionalDetector.h"
#include "org/orekit/propagation/events/FieldLatitudeCrossingDetector.h"
#include "org/orekit/propagation/events/FieldLongitudeCrossingDetector.h"
#include "org/orekit/propagation/events/FieldNegateDetector.h"
#include "org/orekit/propagation/events/FieldNodeDetector.h"
#include "org/orekit/propagation/events/FieldOfViewDetector.h"
#include "org/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "org/orekit/propagation/events/FootprintOverlapDetector.h"
#include "org/orekit/propagation/events/FunctionalDetector.h"
#include "org/orekit/propagation/events/GeographicZoneDetector.h"
#include "org/orekit/propagation/events/GroundAtNightDetector.h"
#include "org/orekit/propagation/events/GroundFieldOfViewDetector.h"
#include "org/orekit/propagation/events/HaloXZPlaneCrossingDetector.h"
#include "org/orekit/propagation/events/InterSatDirectViewDetector.h"
#include "org/orekit/propagation/events/LatitudeCrossingDetector.h"
#include "org/orekit/propagation/events/LatitudeExtremumDetector.h"
#include "org/orekit/propagation/events/LongitudeCrossingDetector.h"
#include "org/orekit/propagation/events/LongitudeExtremumDetector.h"
#include "org/orekit/propagation/events/MagneticFieldDetector.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/propagation/events/NodeDetector.h"
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "org/orekit/propagation/events/PositionAngleDetector.h"
#include "org/orekit/propagation/events/PythonAbstractDetector.h"
#include "org/orekit/propagation/events/PythonAdaptableInterval.h"
#include "org/orekit/propagation/events/PythonEnablingPredicate.h"
#include "org/orekit/propagation/events/PythonEventDetector.h"
#include "org/orekit/propagation/events/PythonEventDetectorsProvider.h"
#include "org/orekit/propagation/events/PythonFieldAbstractDetector.h"
#include "org/orekit/propagation/events/PythonFieldAdaptableInterval.h"
#include "org/orekit/propagation/events/PythonFieldEnablingPredicate.h"
#include "org/orekit/propagation/events/PythonFieldEventDetector.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        namespace handlers {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "events");

          t_AbstractDetector::install(module);
          t_AdaptableInterval::install(module);
          t_AdapterDetector::install(module);
          t_AlignmentDetector::install(module);
          t_AltitudeDetector::install(module);
          t_AngularSeparationDetector::install(module);
          t_AngularSeparationFromSatelliteDetector::install(module);
          t_ApsideDetector::install(module);
          t_BooleanDetector::install(module);
          t_DateDetector::install(module);
          t_EclipseDetector::install(module);
          t_ElevationDetector::install(module);
          t_ElevationExtremumDetector::install(module);
          t_EnablingPredicate::install(module);
          t_EventDetector::install(module);
          t_EventDetectorsProvider::install(module);
          t_EventEnablingPredicateFilter::install(module);
          t_EventShifter::install(module);
          t_EventSlopeFilter::install(module);
          t_EventState::install(module);
          t_EventState$EventOccurrence::install(module);
          t_EventsLogger::install(module);
          t_EventsLogger$LoggedEvent::install(module);
          t_ExtremumApproachDetector::install(module);
          t_FieldAbstractDetector::install(module);
          t_FieldAdaptableInterval::install(module);
          t_FieldAdapterDetector::install(module);
          t_FieldAltitudeDetector::install(module);
          t_FieldApsideDetector::install(module);
          t_FieldBooleanDetector::install(module);
          t_FieldDateDetector::install(module);
          t_FieldEclipseDetector::install(module);
          t_FieldElevationDetector::install(module);
          t_FieldElevationExtremumDetector::install(module);
          t_FieldEnablingPredicate::install(module);
          t_FieldEventDetector::install(module);
          t_FieldEventEnablingPredicateFilter::install(module);
          t_FieldEventSlopeFilter::install(module);
          t_FieldEventState::install(module);
          t_FieldEventState$EventOccurrence::install(module);
          t_FieldEventsLogger::install(module);
          t_FieldEventsLogger$FieldLoggedEvent::install(module);
          t_FieldFunctionalDetector::install(module);
          t_FieldLatitudeCrossingDetector::install(module);
          t_FieldLongitudeCrossingDetector::install(module);
          t_FieldNegateDetector::install(module);
          t_FieldNodeDetector::install(module);
          t_FieldOfViewDetector::install(module);
          t_FieldParameterDrivenDateIntervalDetector::install(module);
          t_FilterType::install(module);
          t_FootprintOverlapDetector::install(module);
          t_FunctionalDetector::install(module);
          t_GeographicZoneDetector::install(module);
          t_GroundAtNightDetector::install(module);
          t_GroundFieldOfViewDetector::install(module);
          t_HaloXZPlaneCrossingDetector::install(module);
          t_InterSatDirectViewDetector::install(module);
          t_LatitudeCrossingDetector::install(module);
          t_LatitudeExtremumDetector::install(module);
          t_LongitudeCrossingDetector::install(module);
          t_LongitudeExtremumDetector::install(module);
          t_MagneticFieldDetector::install(module);
          t_NegateDetector::install(module);
          t_NodeDetector::install(module);
          t_ParameterDrivenDateIntervalDetector::install(module);
          t_PositionAngleDetector::install(module);
          t_PythonAbstractDetector::install(module);
          t_PythonAdaptableInterval::install(module);
          t_PythonEnablingPredicate::install(module);
          t_PythonEventDetector::install(module);
          t_PythonEventDetectorsProvider::install(module);
          t_PythonFieldAbstractDetector::install(module);
          t_PythonFieldAdaptableInterval::install(module);
          t_PythonFieldEnablingPredicate::install(module);
          t_PythonFieldEventDetector::install(module);
          t_VisibilityTrigger::install(module);
          handlers::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "events");

          t_AbstractDetector::initialize(module);
          t_AdaptableInterval::initialize(module);
          t_AdapterDetector::initialize(module);
          t_AlignmentDetector::initialize(module);
          t_AltitudeDetector::initialize(module);
          t_AngularSeparationDetector::initialize(module);
          t_AngularSeparationFromSatelliteDetector::initialize(module);
          t_ApsideDetector::initialize(module);
          t_BooleanDetector::initialize(module);
          t_DateDetector::initialize(module);
          t_EclipseDetector::initialize(module);
          t_ElevationDetector::initialize(module);
          t_ElevationExtremumDetector::initialize(module);
          t_EnablingPredicate::initialize(module);
          t_EventDetector::initialize(module);
          t_EventDetectorsProvider::initialize(module);
          t_EventEnablingPredicateFilter::initialize(module);
          t_EventShifter::initialize(module);
          t_EventSlopeFilter::initialize(module);
          t_EventState::initialize(module);
          t_EventState$EventOccurrence::initialize(module);
          t_EventsLogger::initialize(module);
          t_EventsLogger$LoggedEvent::initialize(module);
          t_ExtremumApproachDetector::initialize(module);
          t_FieldAbstractDetector::initialize(module);
          t_FieldAdaptableInterval::initialize(module);
          t_FieldAdapterDetector::initialize(module);
          t_FieldAltitudeDetector::initialize(module);
          t_FieldApsideDetector::initialize(module);
          t_FieldBooleanDetector::initialize(module);
          t_FieldDateDetector::initialize(module);
          t_FieldEclipseDetector::initialize(module);
          t_FieldElevationDetector::initialize(module);
          t_FieldElevationExtremumDetector::initialize(module);
          t_FieldEnablingPredicate::initialize(module);
          t_FieldEventDetector::initialize(module);
          t_FieldEventEnablingPredicateFilter::initialize(module);
          t_FieldEventSlopeFilter::initialize(module);
          t_FieldEventState::initialize(module);
          t_FieldEventState$EventOccurrence::initialize(module);
          t_FieldEventsLogger::initialize(module);
          t_FieldEventsLogger$FieldLoggedEvent::initialize(module);
          t_FieldFunctionalDetector::initialize(module);
          t_FieldLatitudeCrossingDetector::initialize(module);
          t_FieldLongitudeCrossingDetector::initialize(module);
          t_FieldNegateDetector::initialize(module);
          t_FieldNodeDetector::initialize(module);
          t_FieldOfViewDetector::initialize(module);
          t_FieldParameterDrivenDateIntervalDetector::initialize(module);
          t_FilterType::initialize(module);
          t_FootprintOverlapDetector::initialize(module);
          t_FunctionalDetector::initialize(module);
          t_GeographicZoneDetector::initialize(module);
          t_GroundAtNightDetector::initialize(module);
          t_GroundFieldOfViewDetector::initialize(module);
          t_HaloXZPlaneCrossingDetector::initialize(module);
          t_InterSatDirectViewDetector::initialize(module);
          t_LatitudeCrossingDetector::initialize(module);
          t_LatitudeExtremumDetector::initialize(module);
          t_LongitudeCrossingDetector::initialize(module);
          t_LongitudeExtremumDetector::initialize(module);
          t_MagneticFieldDetector::initialize(module);
          t_NegateDetector::initialize(module);
          t_NodeDetector::initialize(module);
          t_ParameterDrivenDateIntervalDetector::initialize(module);
          t_PositionAngleDetector::initialize(module);
          t_PythonAbstractDetector::initialize(module);
          t_PythonAdaptableInterval::initialize(module);
          t_PythonEnablingPredicate::initialize(module);
          t_PythonEventDetector::initialize(module);
          t_PythonEventDetectorsProvider::initialize(module);
          t_PythonFieldAbstractDetector::initialize(module);
          t_PythonFieldAdaptableInterval::initialize(module);
          t_PythonFieldEnablingPredicate::initialize(module);
          t_PythonFieldEventDetector::initialize(module);
          t_VisibilityTrigger::initialize(module);
          handlers::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/propagation/events/handlers/ContinueOnEvent.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/events/handlers/EventMultipleHandler.h"
#include "org/orekit/propagation/events/handlers/FieldContinueOnEvent.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue.h"
#include "org/orekit/propagation/events/handlers/FieldRecordAndContinue$Event.h"
#include "org/orekit/propagation/events/handlers/FieldStopOnDecreasing.h"
#include "org/orekit/propagation/events/handlers/FieldStopOnEvent.h"
#include "org/orekit/propagation/events/handlers/FieldStopOnIncreasing.h"
#include "org/orekit/propagation/events/handlers/PythonEventHandler.h"
#include "org/orekit/propagation/events/handlers/PythonFieldEventHandler.h"
#include "org/orekit/propagation/events/handlers/RecordAndContinue.h"
#include "org/orekit/propagation/events/handlers/RecordAndContinue$Event.h"
#include "org/orekit/propagation/events/handlers/StopOnDecreasing.h"
#include "org/orekit/propagation/events/handlers/StopOnEvent.h"
#include "org/orekit/propagation/events/handlers/StopOnIncreasing.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.propagation.events", "handlers");

            t_ContinueOnEvent::install(module);
            t_EventHandler::install(module);
            t_EventMultipleHandler::install(module);
            t_FieldContinueOnEvent::install(module);
            t_FieldEventHandler::install(module);
            t_FieldRecordAndContinue::install(module);
            t_FieldRecordAndContinue$Event::install(module);
            t_FieldStopOnDecreasing::install(module);
            t_FieldStopOnEvent::install(module);
            t_FieldStopOnIncreasing::install(module);
            t_PythonEventHandler::install(module);
            t_PythonFieldEventHandler::install(module);
            t_RecordAndContinue::install(module);
            t_RecordAndContinue$Event::install(module);
            t_StopOnDecreasing::install(module);
            t_StopOnEvent::install(module);
            t_StopOnIncreasing::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.propagation.events", "handlers");

            t_ContinueOnEvent::initialize(module);
            t_EventHandler::initialize(module);
            t_EventMultipleHandler::initialize(module);
            t_FieldContinueOnEvent::initialize(module);
            t_FieldEventHandler::initialize(module);
            t_FieldRecordAndContinue::initialize(module);
            t_FieldRecordAndContinue$Event::initialize(module);
            t_FieldStopOnDecreasing::initialize(module);
            t_FieldStopOnEvent::initialize(module);
            t_FieldStopOnIncreasing::initialize(module);
            t_PythonEventHandler::initialize(module);
            t_PythonFieldEventHandler::initialize(module);
            t_RecordAndContinue::initialize(module);
            t_RecordAndContinue$Event::initialize(module);
            t_StopOnDecreasing::initialize(module);
            t_StopOnEvent::initialize(module);
            t_StopOnIncreasing::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "org/orekit/propagation/integration/FieldIntegratedEphemeris.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/orekit/propagation/integration/IntegratedEphemeris.h"
#include "org/orekit/propagation/integration/PythonAbstractGradientConverter.h"
#include "org/orekit/propagation/integration/PythonAbstractIntegratedPropagator.h"
#include "org/orekit/propagation/integration/PythonAdditionalDerivativesProvider.h"
#include "org/orekit/propagation/integration/PythonFieldAbstractIntegratedPropagator.h"
#include "org/orekit/propagation/integration/PythonFieldAdditionalDerivativesProvider.h"
#include "org/orekit/propagation/integration/PythonFieldStateMapper.h"
#include "org/orekit/propagation/integration/PythonStateMapper.h"
#include "org/orekit/propagation/integration/StateMapper.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "integration");

          t_AbstractGradientConverter::install(module);
          t_AbstractIntegratedPropagator::install(module);
          t_AbstractIntegratedPropagator$MainStateEquations::install(module);
          t_AdditionalDerivativesProvider::install(module);
          t_CombinedDerivatives::install(module);
          t_FieldAbstractIntegratedPropagator::install(module);
          t_FieldAbstractIntegratedPropagator$MainStateEquations::install(module);
          t_FieldAdditionalDerivativesProvider::install(module);
          t_FieldCombinedDerivatives::install(module);
          t_FieldIntegratedEphemeris::install(module);
          t_FieldStateMapper::install(module);
          t_IntegratedEphemeris::install(module);
          t_PythonAbstractGradientConverter::install(module);
          t_PythonAbstractIntegratedPropagator::install(module);
          t_PythonAdditionalDerivativesProvider::install(module);
          t_PythonFieldAbstractIntegratedPropagator::install(module);
          t_PythonFieldAdditionalDerivativesProvider::install(module);
          t_PythonFieldStateMapper::install(module);
          t_PythonStateMapper::install(module);
          t_StateMapper::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "integration");

          t_AbstractGradientConverter::initialize(module);
          t_AbstractIntegratedPropagator::initialize(module);
          t_AbstractIntegratedPropagator$MainStateEquations::initialize(module);
          t_AdditionalDerivativesProvider::initialize(module);
          t_CombinedDerivatives::initialize(module);
          t_FieldAbstractIntegratedPropagator::initialize(module);
          t_FieldAbstractIntegratedPropagator$MainStateEquations::initialize(module);
          t_FieldAdditionalDerivativesProvider::initialize(module);
          t_FieldCombinedDerivatives::initialize(module);
          t_FieldIntegratedEphemeris::initialize(module);
          t_FieldStateMapper::initialize(module);
          t_IntegratedEphemeris::initialize(module);
          t_PythonAbstractGradientConverter::initialize(module);
          t_PythonAbstractIntegratedPropagator::initialize(module);
          t_PythonAdditionalDerivativesProvider::initialize(module);
          t_PythonFieldAbstractIntegratedPropagator::initialize(module);
          t_PythonFieldAdditionalDerivativesProvider::initialize(module);
          t_PythonFieldStateMapper::initialize(module);
          t_PythonStateMapper::initialize(module);
          t_StateMapper::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/propagation/numerical/EpochDerivativesEquations.h"
#include "org/orekit/propagation/numerical/FieldNumericalPropagator.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagatorBuilder.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "org/orekit/propagation/numerical/PythonFieldTimeDerivativesEquations.h"
#include "org/orekit/propagation/numerical/PythonPartialsObserver.h"
#include "org/orekit/propagation/numerical/PythonTimeDerivativesEquations.h"
#include "org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        namespace cr3bp {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "numerical");

          t_EpochDerivativesEquations::install(module);
          t_FieldNumericalPropagator::install(module);
          t_FieldTimeDerivativesEquations::install(module);
          t_GLONASSNumericalPropagator::install(module);
          t_GLONASSNumericalPropagatorBuilder::install(module);
          t_NumericalPropagator::install(module);
          t_PythonFieldTimeDerivativesEquations::install(module);
          t_PythonPartialsObserver::install(module);
          t_PythonTimeDerivativesEquations::install(module);
          t_StateTransitionMatrixGenerator$PartialsObserver::install(module);
          t_TimeDerivativesEquations::install(module);
          cr3bp::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "numerical");

          t_EpochDerivativesEquations::initialize(module);
          t_FieldNumericalPropagator::initialize(module);
          t_FieldTimeDerivativesEquations::initialize(module);
          t_GLONASSNumericalPropagator::initialize(module);
          t_GLONASSNumericalPropagatorBuilder::initialize(module);
          t_NumericalPropagator::initialize(module);
          t_PythonFieldTimeDerivativesEquations::initialize(module);
          t_PythonPartialsObserver::initialize(module);
          t_PythonTimeDerivativesEquations::initialize(module);
          t_StateTransitionMatrixGenerator$PartialsObserver::initialize(module);
          t_TimeDerivativesEquations::initialize(module);
          cr3bp::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/propagation/numerical/cr3bp/CR3BPConstants.h"
#include "org/orekit/propagation/numerical/cr3bp/CR3BPForceModel.h"
#include "org/orekit/propagation/numerical/cr3bp/CR3BPMultipleShooter.h"
#include "org/orekit/propagation/numerical/cr3bp/STMEquations.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.propagation.numerical", "cr3bp");

            t_CR3BPConstants::install(module);
            t_CR3BPForceModel::install(module);
            t_CR3BPMultipleShooter::install(module);
            t_STMEquations::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.propagation.numerical", "cr3bp");

            t_CR3BPConstants::initialize(module);
            t_CR3BPForceModel::initialize(module);
            t_CR3BPMultipleShooter::initialize(module);
            t_STMEquations::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/propagation/sampling/EmptyMultiSatStepHandler.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepNormalizer.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/sampling/MultisatStepNormalizer.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/OrekitStepNormalizer.h"
#include "org/orekit/propagation/sampling/PythonFieldOrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/PythonFieldOrekitStepHandler.h"
#include "org/orekit/propagation/sampling/PythonFieldOrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/PythonMultiSatFixedStepHandler.h"
#include "org/orekit/propagation/sampling/PythonMultiSatStepHandler.h"
#include "org/orekit/propagation/sampling/PythonOrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/PythonOrekitStepHandler.h"
#include "org/orekit/propagation/sampling/PythonOrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "sampling");

          t_EmptyMultiSatStepHandler::install(module);
          t_FieldOrekitFixedStepHandler::install(module);
          t_FieldOrekitStepHandler::install(module);
          t_FieldOrekitStepInterpolator::install(module);
          t_FieldOrekitStepNormalizer::install(module);
          t_FieldStepHandlerMultiplexer::install(module);
          t_MultiSatFixedStepHandler::install(module);
          t_MultiSatStepHandler::install(module);
          t_MultisatStepNormalizer::install(module);
          t_OrekitFixedStepHandler::install(module);
          t_OrekitStepHandler::install(module);
          t_OrekitStepInterpolator::install(module);
          t_OrekitStepNormalizer::install(module);
          t_PythonFieldOrekitFixedStepHandler::install(module);
          t_PythonFieldOrekitStepHandler::install(module);
          t_PythonFieldOrekitStepInterpolator::install(module);
          t_PythonMultiSatFixedStepHandler::install(module);
          t_PythonMultiSatStepHandler::install(module);
          t_PythonOrekitFixedStepHandler::install(module);
          t_PythonOrekitStepHandler::install(module);
          t_PythonOrekitStepInterpolator::install(module);
          t_StepHandlerMultiplexer::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "sampling");

          t_EmptyMultiSatStepHandler::initialize(module);
          t_FieldOrekitFixedStepHandler::initialize(module);
          t_FieldOrekitStepHandler::initialize(module);
          t_FieldOrekitStepInterpolator::initialize(module);
          t_FieldOrekitStepNormalizer::initialize(module);
          t_FieldStepHandlerMultiplexer::initialize(module);
          t_MultiSatFixedStepHandler::initialize(module);
          t_MultiSatStepHandler::initialize(module);
          t_MultisatStepNormalizer::initialize(module);
          t_OrekitFixedStepHandler::initialize(module);
          t_OrekitStepHandler::initialize(module);
          t_OrekitStepInterpolator::initialize(module);
          t_OrekitStepNormalizer::initialize(module);
          t_PythonFieldOrekitFixedStepHandler::initialize(module);
          t_PythonFieldOrekitStepHandler::initialize(module);
          t_PythonFieldOrekitStepInterpolator::initialize(module);
          t_PythonMultiSatFixedStepHandler::initialize(module);
          t_PythonMultiSatStepHandler::initialize(module);
          t_PythonOrekitFixedStepHandler::initialize(module);
          t_PythonOrekitStepHandler::initialize(module);
          t_PythonOrekitStepInterpolator::initialize(module);
          t_StepHandlerMultiplexer::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {

        namespace dsst {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "semianalytical");

          dsst::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.propagation", "semianalytical");

          dsst::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/propagation/semianalytical/dsst/DSSTHarvester.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver.h"
#include "org/orekit/propagation/semianalytical/dsst/FieldDSSTPropagator.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          namespace forces {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }
          namespace utilities {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.propagation.semianalytical", "dsst");

            t_DSSTHarvester::install(module);
            t_DSSTPropagator::install(module);
            t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::install(module);
            t_FieldDSSTPropagator::install(module);
            forces::__install__(module);
            utilities::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.propagation.semianalytical", "dsst");

            t_DSSTHarvester::initialize(module);
            t_DSSTPropagator::initialize(module);
            t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initialize(module);
            t_FieldDSSTPropagator::initialize(module);
            forces::__initialize__(module);
            utilities::__initialize__(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTAtmosphericDrag.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedForm.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttraction.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttractionContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTSolarRadiationPressure.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseral.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseralContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBody.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyDynamicContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyStaticContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTZonal.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTZonalContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTNewtonianAttractionContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTTesseralContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTThirdBodyDynamicContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTZonalContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldForceModelContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ForceModelContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonAbstractGaussianContribution.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonDSSTForceModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonFieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonForceModelContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonJ2SquaredModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ZeisModel.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {


            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.propagation.semianalytical.dsst", "forces");

              t_AbstractGaussianContribution::install(module);
              t_AbstractGaussianContributionContext::install(module);
              t_DSSTAtmosphericDrag::install(module);
              t_DSSTForceModel::install(module);
              t_DSSTJ2SquaredClosedForm::install(module);
              t_DSSTJ2SquaredClosedFormContext::install(module);
              t_DSSTNewtonianAttraction::install(module);
              t_DSSTNewtonianAttractionContext::install(module);
              t_DSSTSolarRadiationPressure::install(module);
              t_DSSTTesseral::install(module);
              t_DSSTTesseralContext::install(module);
              t_DSSTThirdBody::install(module);
              t_DSSTThirdBodyDynamicContext::install(module);
              t_DSSTThirdBodyStaticContext::install(module);
              t_DSSTZonal::install(module);
              t_DSSTZonalContext::install(module);
              t_FieldAbstractGaussianContributionContext::install(module);
              t_FieldDSSTJ2SquaredClosedFormContext::install(module);
              t_FieldDSSTNewtonianAttractionContext::install(module);
              t_FieldDSSTTesseralContext::install(module);
              t_FieldDSSTThirdBodyDynamicContext::install(module);
              t_FieldDSSTZonalContext::install(module);
              t_FieldForceModelContext::install(module);
              t_FieldShortPeriodTerms::install(module);
              t_ForceModelContext::install(module);
              t_J2SquaredModel::install(module);
              t_PythonAbstractGaussianContribution::install(module);
              t_PythonDSSTForceModel::install(module);
              t_PythonFieldShortPeriodTerms::install(module);
              t_PythonForceModelContext::install(module);
              t_PythonJ2SquaredModel::install(module);
              t_PythonShortPeriodTerms::install(module);
              t_ShortPeriodTerms::install(module);
              t_ZeisModel::install(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.propagation.semianalytical.dsst", "forces");

              t_AbstractGaussianContribution::initialize(module);
              t_AbstractGaussianContributionContext::initialize(module);
              t_DSSTAtmosphericDrag::initialize(module);
              t_DSSTForceModel::initialize(module);
              t_DSSTJ2SquaredClosedForm::initialize(module);
              t_DSSTJ2SquaredClosedFormContext::initialize(module);
              t_DSSTNewtonianAttraction::initialize(module);
              t_DSSTNewtonianAttractionContext::initialize(module);
              t_DSSTSolarRadiationPressure::initialize(module);
              t_DSSTTesseral::initialize(module);
              t_DSSTTesseralContext::initialize(module);
              t_DSSTThirdBody::initialize(module);
              t_DSSTThirdBodyDynamicContext::initialize(module);
              t_DSSTThirdBodyStaticContext::initialize(module);
              t_DSSTZonal::initialize(module);
              t_DSSTZonalContext::initialize(module);
              t_FieldAbstractGaussianContributionContext::initialize(module);
              t_FieldDSSTJ2SquaredClosedFormContext::initialize(module);
              t_FieldDSSTNewtonianAttractionContext::initialize(module);
              t_FieldDSSTTesseralContext::initialize(module);
              t_FieldDSSTThirdBodyDynamicContext::initialize(module);
              t_FieldDSSTZonalContext::initialize(module);
              t_FieldForceModelContext::initialize(module);
              t_FieldShortPeriodTerms::initialize(module);
              t_ForceModelContext::initialize(module);
              t_J2SquaredModel::initialize(module);
              t_PythonAbstractGaussianContribution::initialize(module);
              t_PythonDSSTForceModel::initialize(module);
              t_PythonFieldShortPeriodTerms::initialize(module);
              t_PythonForceModelContext::initialize(module);
              t_PythonJ2SquaredModel::initialize(module);
              t_PythonShortPeriodTerms::initialize(module);
              t_ShortPeriodTerms::initialize(module);
              t_ZeisModel::initialize(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CjSjCoefficient.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldCjSjCoefficient.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldFixedNumberInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGHIJjsPolynomials.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGHmsjPolynomials.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGammaMnsFunction.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldLnsCoefficients.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldMaxGapInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldShortPeriodicsInterpolatedCoefficient.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FixedNumberInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/GHIJjsPolynomials.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/GHmsjPolynomials.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/GammaMnsFunction.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/JacobiPolynomials.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/LnsCoefficients.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/MaxGapInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/NewcombOperators.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/PythonFieldInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/PythonInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/ShortPeriodicsInterpolatedCoefficient.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/UpperBounds.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            namespace hansen {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }

            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.propagation.semianalytical.dsst", "utilities");

              t_AuxiliaryElements::install(module);
              t_CjSjCoefficient::install(module);
              t_CoefficientsFactory::install(module);
              t_CoefficientsFactory$NSKey::install(module);
              t_FieldAuxiliaryElements::install(module);
              t_FieldCjSjCoefficient::install(module);
              t_FieldFixedNumberInterpolationGrid::install(module);
              t_FieldGHIJjsPolynomials::install(module);
              t_FieldGHmsjPolynomials::install(module);
              t_FieldGammaMnsFunction::install(module);
              t_FieldInterpolationGrid::install(module);
              t_FieldLnsCoefficients::install(module);
              t_FieldMaxGapInterpolationGrid::install(module);
              t_FieldShortPeriodicsInterpolatedCoefficient::install(module);
              t_FixedNumberInterpolationGrid::install(module);
              t_GHIJjsPolynomials::install(module);
              t_GHmsjPolynomials::install(module);
              t_GammaMnsFunction::install(module);
              t_InterpolationGrid::install(module);
              t_JacobiPolynomials::install(module);
              t_LnsCoefficients::install(module);
              t_MaxGapInterpolationGrid::install(module);
              t_NewcombOperators::install(module);
              t_PythonFieldInterpolationGrid::install(module);
              t_PythonInterpolationGrid::install(module);
              t_ShortPeriodicsInterpolatedCoefficient::install(module);
              t_UpperBounds::install(module);
              hansen::__install__(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.propagation.semianalytical.dsst", "utilities");

              t_AuxiliaryElements::initialize(module);
              t_CjSjCoefficient::initialize(module);
              t_CoefficientsFactory::initialize(module);
              t_CoefficientsFactory$NSKey::initialize(module);
              t_FieldAuxiliaryElements::initialize(module);
              t_FieldCjSjCoefficient::initialize(module);
              t_FieldFixedNumberInterpolationGrid::initialize(module);
              t_FieldGHIJjsPolynomials::initialize(module);
              t_FieldGHmsjPolynomials::initialize(module);
              t_FieldGammaMnsFunction::initialize(module);
              t_FieldInterpolationGrid::initialize(module);
              t_FieldLnsCoefficients::initialize(module);
              t_FieldMaxGapInterpolationGrid::initialize(module);
              t_FieldShortPeriodicsInterpolatedCoefficient::initialize(module);
              t_FixedNumberInterpolationGrid::initialize(module);
              t_GHIJjsPolynomials::initialize(module);
              t_GHmsjPolynomials::initialize(module);
              t_GammaMnsFunction::initialize(module);
              t_InterpolationGrid::initialize(module);
              t_JacobiPolynomials::initialize(module);
              t_LnsCoefficients::initialize(module);
              t_MaxGapInterpolationGrid::initialize(module);
              t_NewcombOperators::initialize(module);
              t_PythonFieldInterpolationGrid::initialize(module);
              t_PythonInterpolationGrid::initialize(module);
              t_ShortPeriodicsInterpolatedCoefficient::initialize(module);
              t_UpperBounds::initialize(module);
              hansen::__initialize__(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenTesseralLinear.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenThirdBodyLinear.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenZonalLinear.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenTesseralLinear.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenThirdBodyLinear.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenUtilities.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenZonalLinear.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.propagation.semianalytical.dsst.utilities", "hansen");

                t_FieldHansenTesseralLinear::install(module);
                t_FieldHansenThirdBodyLinear::install(module);
                t_FieldHansenZonalLinear::install(module);
                t_HansenTesseralLinear::install(module);
                t_HansenThirdBodyLinear::install(module);
                t_HansenUtilities::install(module);
                t_HansenZonalLinear::install(module);
                t_PolynomialFunctionMatrix::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.propagation.semianalytical.dsst.utilities", "hansen");

                t_FieldHansenTesseralLinear::initialize(module);
                t_FieldHansenThirdBodyLinear::initialize(module);
                t_FieldHansenZonalLinear::initialize(module);
                t_HansenTesseralLinear::initialize(module);
                t_HansenThirdBodyLinear::initialize(module);
                t_HansenUtilities::initialize(module);
                t_HansenZonalLinear::initialize(module);
                t_PolynomialFunctionMatrix::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/python/PythonFieldUnivariateFunction.h"
#include "org/orekit/python/PythonFunction.h"
#include "org/orekit/python/PythonSupplier.h"
#include "org/orekit/python/PythonUnivariateFunction.h"

namespace org {
  namespace orekit {
    namespace python {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "python");

        t_PythonFieldUnivariateFunction::install(module);
        t_PythonFunction::install(module);
        t_PythonSupplier::install(module);
        t_PythonUnivariateFunction::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "python");

        t_PythonFieldUnivariateFunction::initialize(module);
        t_PythonFunction::initialize(module);
        t_PythonSupplier::initialize(module);
        t_PythonUnivariateFunction::initialize(module);
      }
    }
  }
}


namespace org {
  namespace orekit {
    namespace rugged {

      namespace adjustment {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace api {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace errors {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace intersection {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace linesensor {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace los {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace raster {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace refraction {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace utils {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "rugged");

        adjustment::__install__(module);
        api::__install__(module);
        errors::__install__(module);
        intersection::__install__(module);
        linesensor::__install__(module);
        los::__install__(module);
        raster::__install__(module);
        refraction::__install__(module);
        utils::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "rugged");

        adjustment::__initialize__(module);
        api::__initialize__(module);
        errors::__initialize__(module);
        intersection::__initialize__(module);
        linesensor::__initialize__(module);
        los::__initialize__(module);
        raster::__initialize__(module);
        refraction::__initialize__(module);
        utils::__initialize__(module);
      }
    }
  }
}

#include "org/orekit/rugged/adjustment/AdjustmentContext.h"
#include "org/orekit/rugged/adjustment/GroundOptimizationProblemBuilder.h"
#include "org/orekit/rugged/adjustment/InterSensorsOptimizationProblemBuilder.h"
#include "org/orekit/rugged/adjustment/LeastSquareAdjuster.h"
#include "org/orekit/rugged/adjustment/OptimizationProblemBuilder.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        namespace measurements {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "adjustment");

          t_AdjustmentContext::install(module);
          t_GroundOptimizationProblemBuilder::install(module);
          t_InterSensorsOptimizationProblemBuilder::install(module);
          t_LeastSquareAdjuster::install(module);
          t_OptimizationProblemBuilder::install(module);
          t_OptimizerId::install(module);
          measurements::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "adjustment");

          t_AdjustmentContext::initialize(module);
          t_GroundOptimizationProblemBuilder::initialize(module);
          t_InterSensorsOptimizationProblemBuilder::initialize(module);
          t_LeastSquareAdjuster::initialize(module);
          t_OptimizationProblemBuilder::initialize(module);
          t_OptimizerId::initialize(module);
          measurements::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "org/orekit/rugged/adjustment/measurements/SensorMapping.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToGroundMapping.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToSensorMapping.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.rugged.adjustment", "measurements");

            t_Observables::install(module);
            t_SensorMapping::install(module);
            t_SensorToGroundMapping::install(module);
            t_SensorToSensorMapping::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.rugged.adjustment", "measurements");

            t_Observables::initialize(module);
            t_SensorMapping::initialize(module);
            t_SensorToGroundMapping::initialize(module);
            t_SensorToSensorMapping::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/orekit/rugged/api/RuggedBuilder.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "api");

          t_AlgorithmId::install(module);
          t_BodyRotatingFrameId::install(module);
          t_EllipsoidId::install(module);
          t_InertialFrameId::install(module);
          t_Rugged::install(module);
          t_RuggedBuilder::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "api");

          t_AlgorithmId::initialize(module);
          t_BodyRotatingFrameId::initialize(module);
          t_EllipsoidId::initialize(module);
          t_InertialFrameId::initialize(module);
          t_Rugged::initialize(module);
          t_RuggedBuilder::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/rugged/errors/DumpManager.h"
#include "org/orekit/rugged/errors/DumpReplayer.h"
#include "org/orekit/rugged/errors/DumpReplayer$Result.h"
#include "org/orekit/rugged/errors/RuggedException.h"
#include "org/orekit/rugged/errors/RuggedExceptionWrapper.h"
#include "org/orekit/rugged/errors/RuggedInternalError.h"
#include "org/orekit/rugged/errors/RuggedMessages.h"
#include "org/orekit/rugged/errors/RuggedMessages$UTF8Control.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "errors");

          t_DumpManager::install(module);
          t_DumpReplayer::install(module);
          t_DumpReplayer$Result::install(module);
          t_RuggedException::install(module);
          t_RuggedExceptionWrapper::install(module);
          t_RuggedInternalError::install(module);
          t_RuggedMessages::install(module);
          t_RuggedMessages$UTF8Control::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "errors");

          t_DumpManager::initialize(module);
          t_DumpReplayer::initialize(module);
          t_DumpReplayer$Result::initialize(module);
          t_RuggedException::initialize(module);
          t_RuggedExceptionWrapper::initialize(module);
          t_RuggedInternalError::initialize(module);
          t_RuggedMessages::initialize(module);
          t_RuggedMessages$UTF8Control::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/rugged/intersection/BasicScanAlgorithm.h"
#include "org/orekit/rugged/intersection/ConstantElevationAlgorithm.h"
#include "org/orekit/rugged/intersection/IgnoreDEMAlgorithm.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        namespace duvenhage {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "intersection");

          t_BasicScanAlgorithm::install(module);
          t_ConstantElevationAlgorithm::install(module);
          t_IgnoreDEMAlgorithm::install(module);
          t_IntersectionAlgorithm::install(module);
          duvenhage::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "intersection");

          t_BasicScanAlgorithm::initialize(module);
          t_ConstantElevationAlgorithm::initialize(module);
          t_IgnoreDEMAlgorithm::initialize(module);
          t_IntersectionAlgorithm::initialize(module);
          duvenhage::__initialize__(module);
        }
      }
    }
  }
}

#include "org/orekit/rugged/intersection/duvenhage/DuvenhageAlgorithm.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTileFactory.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {


          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.rugged.intersection", "duvenhage");

            t_DuvenhageAlgorithm::install(module);
            t_MinMaxTreeTile::install(module);
            t_MinMaxTreeTileFactory::install(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.rugged.intersection", "duvenhage");

            t_DuvenhageAlgorithm::initialize(module);
            t_MinMaxTreeTile::initialize(module);
            t_MinMaxTreeTileFactory::initialize(module);
          }
        }
      }
    }
  }
}

#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/linesensor/LinearLineDatation.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "org/orekit/rugged/linesensor/SensorPixelCrossing.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "linesensor");

          t_LineDatation::install(module);
          t_LineSensor::install(module);
          t_LinearLineDatation::install(module);
          t_SensorMeanPlaneCrossing::install(module);
          t_SensorMeanPlaneCrossing$CrossingResult::install(module);
          t_SensorPixel::install(module);
          t_SensorPixelCrossing::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "linesensor");

          t_LineDatation::initialize(module);
          t_LineSensor::initialize(module);
          t_LinearLineDatation::initialize(module);
          t_SensorMeanPlaneCrossing::initialize(module);
          t_SensorMeanPlaneCrossing$CrossingResult::initialize(module);
          t_SensorPixel::initialize(module);
          t_SensorPixelCrossing::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/rugged/los/FixedRotation.h"
#include "org/orekit/rugged/los/FixedZHomothety.h"
#include "org/orekit/rugged/los/LOSBuilder.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "org/orekit/rugged/los/PolynomialRotation.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "los");

          t_FixedRotation::install(module);
          t_FixedZHomothety::install(module);
          t_LOSBuilder::install(module);
          t_LOSTransform::install(module);
          t_PolynomialRotation::install(module);
          t_TimeDependentLOS::install(module);
          t_TimeIndependentLOSTransform::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "los");

          t_FixedRotation::initialize(module);
          t_FixedZHomothety::initialize(module);
          t_LOSBuilder::initialize(module);
          t_LOSTransform::initialize(module);
          t_PolynomialRotation::initialize(module);
          t_TimeDependentLOS::initialize(module);
          t_TimeIndependentLOSTransform::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/rugged/raster/SimpleTile.h"
#include "org/orekit/rugged/raster/SimpleTileFactory.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/rugged/raster/TilesCache.h"
#include "org/orekit/rugged/raster/UpdatableTile.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "raster");

          t_SimpleTile::install(module);
          t_SimpleTileFactory::install(module);
          t_Tile::install(module);
          t_Tile$Location::install(module);
          t_TileFactory::install(module);
          t_TileUpdater::install(module);
          t_TilesCache::install(module);
          t_UpdatableTile::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "raster");

          t_SimpleTile::initialize(module);
          t_SimpleTileFactory::initialize(module);
          t_Tile::initialize(module);
          t_Tile$Location::initialize(module);
          t_TileFactory::initialize(module);
          t_TileUpdater::initialize(module);
          t_TilesCache::initialize(module);
          t_UpdatableTile::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/rugged/refraction/AtmosphericComputationParameters.h"
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/orekit/rugged/refraction/ConstantRefractionLayer.h"
#include "org/orekit/rugged/refraction/MultiLayerModel.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "refraction");

          t_AtmosphericComputationParameters::install(module);
          t_AtmosphericRefraction::install(module);
          t_ConstantRefractionLayer::install(module);
          t_MultiLayerModel::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "refraction");

          t_AtmosphericComputationParameters::initialize(module);
          t_AtmosphericRefraction::initialize(module);
          t_ConstantRefractionLayer::initialize(module);
          t_MultiLayerModel::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/rugged/utils/DSGenerator.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/utils/GridCreation.h"
#include "org/orekit/rugged/utils/MaxSelector.h"
#include "org/orekit/rugged/utils/MinSelector.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/utils/RoughVisibilityEstimator.h"
#include "org/orekit/rugged/utils/Selector.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "utils");

          t_DSGenerator::install(module);
          t_DerivativeGenerator::install(module);
          t_ExtendedEllipsoid::install(module);
          t_GridCreation::install(module);
          t_MaxSelector::install(module);
          t_MinSelector::install(module);
          t_NormalizedGeodeticPoint::install(module);
          t_RoughVisibilityEstimator::install(module);
          t_Selector::install(module);
          t_SpacecraftToObservedBody::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.rugged", "utils");

          t_DSGenerator::initialize(module);
          t_DerivativeGenerator::initialize(module);
          t_ExtendedEllipsoid::initialize(module);
          t_GridCreation::initialize(module);
          t_MaxSelector::initialize(module);
          t_MinSelector::initialize(module);
          t_NormalizedGeodeticPoint::initialize(module);
          t_RoughVisibilityEstimator::initialize(module);
          t_Selector::initialize(module);
          t_SpacecraftToObservedBody::initialize(module);
        }
      }
    }
  }
}


namespace org {
  namespace orekit {
    namespace ssa {

      namespace collision {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }
      namespace metrics {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "ssa");

        collision::__install__(module);
        metrics::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "ssa");

        collision::__initialize__(module);
        metrics::__initialize__(module);
      }
    }
  }
}


namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {

        namespace shorttermencounter {
          void __install__(PyObject *module);
          void __initialize__(PyObject *module);
        }

        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.ssa", "collision");

          shorttermencounter::__install__(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.ssa", "collision");

          shorttermencounter::__initialize__(module);
        }
      }
    }
  }
}


namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {

          namespace probability {
            void __install__(PyObject *module);
            void __initialize__(PyObject *module);
          }

          void __install__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.ssa.collision", "shorttermencounter");

            probability::__install__(module);
          }

          void __initialize__(PyObject *module)
          {
            module = getJavaModule(module, "org.orekit.ssa.collision", "shorttermencounter");

            probability::__initialize__(module);
          }
        }
      }
    }
  }
}


namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {

            namespace twod {
              void __install__(PyObject *module);
              void __initialize__(PyObject *module);
            }

            void __install__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.ssa.collision.shorttermencounter", "probability");

              twod::__install__(module);
            }

            void __initialize__(PyObject *module)
            {
              module = getJavaModule(module, "org.orekit.ssa.collision.shorttermencounter", "probability");

              twod::__initialize__(module);
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractAlfriend1999.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfano2005.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999Max.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Chan1997.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Laas2015.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Patera2005.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractAlfriend1999.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter1DNumerical2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {


              void __install__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.ssa.collision.shorttermencounter.probability", "twod");

                t_AbstractAlfriend1999::install(module);
                t_AbstractShortTermEncounter1DNumerical2DPOCMethod::install(module);
                t_AbstractShortTermEncounter2DPOCMethod::install(module);
                t_Alfano2005::install(module);
                t_Alfriend1999::install(module);
                t_Alfriend1999Max::install(module);
                t_Chan1997::install(module);
                t_FieldShortTermEncounter2DDefinition::install(module);
                t_Laas2015::install(module);
                t_Patera2005::install(module);
                t_PythonAbstractAlfriend1999::install(module);
                t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::install(module);
                t_PythonAbstractShortTermEncounter2DPOCMethod::install(module);
                t_PythonShortTermEncounter2DPOCMethod::install(module);
                t_ShortTermEncounter2DDefinition::install(module);
                t_ShortTermEncounter2DPOCMethod::install(module);
                t_ShortTermEncounter2DPOCMethodType::install(module);
              }

              void __initialize__(PyObject *module)
              {
                module = getJavaModule(module, "org.orekit.ssa.collision.shorttermencounter.probability", "twod");

                t_AbstractAlfriend1999::initialize(module);
                t_AbstractShortTermEncounter1DNumerical2DPOCMethod::initialize(module);
                t_AbstractShortTermEncounter2DPOCMethod::initialize(module);
                t_Alfano2005::initialize(module);
                t_Alfriend1999::initialize(module);
                t_Alfriend1999Max::initialize(module);
                t_Chan1997::initialize(module);
                t_FieldShortTermEncounter2DDefinition::initialize(module);
                t_Laas2015::initialize(module);
                t_Patera2005::initialize(module);
                t_PythonAbstractAlfriend1999::initialize(module);
                t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initialize(module);
                t_PythonAbstractShortTermEncounter2DPOCMethod::initialize(module);
                t_PythonShortTermEncounter2DPOCMethod::initialize(module);
                t_ShortTermEncounter2DDefinition::initialize(module);
                t_ShortTermEncounter2DPOCMethod::initialize(module);
                t_ShortTermEncounter2DPOCMethodType::initialize(module);
              }
            }
          }
        }
      }
    }
  }
}

#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace metrics {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.ssa", "metrics");

          t_FieldProbabilityOfCollision::install(module);
          t_ProbabilityOfCollision::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.ssa", "metrics");

          t_FieldProbabilityOfCollision::initialize(module);
          t_ProbabilityOfCollision::initialize(module);
        }
      }
    }
  }
}

#include "org/orekit/time/AGILeapSecondFilesLoader.h"
#include "org/orekit/time/AGILeapSecondFilesLoader$Parser.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/AbstractFieldTimeInterpolator.h"
#include "org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData.h"
#include "org/orekit/time/AbstractTimeInterpolator.h"
#include "org/orekit/time/AbstractTimeInterpolator$InterpolationData.h"
#include "org/orekit/time/AbstractTimeScales.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/BurstSelector.h"
#include "org/orekit/time/ChronologicalComparator.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldChronologicalComparator.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/FieldTimeStampedPair.h"
#include "org/orekit/time/FixedStepSelector.h"
#include "org/orekit/time/GLONASSDate.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/time/GNSSDate.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/time/Month.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/PythonAbstractTimeScales.h"
#include "org/orekit/time/PythonDatesSelector.h"
#include "org/orekit/time/PythonFieldTimeInterpolator.h"
#include "org/orekit/time/PythonFieldTimeShiftable.h"
#include "org/orekit/time/PythonFieldTimeStamped.h"
#include "org/orekit/time/PythonParser.h"
#include "org/orekit/time/PythonTimeInterpolator.h"
#include "org/orekit/time/PythonTimeScalarFunction.h"
#include "org/orekit/time/PythonTimeScale.h"
#include "org/orekit/time/PythonTimeScales.h"
#include "org/orekit/time/PythonTimeShiftable.h"
#include "org/orekit/time/PythonTimeStamped.h"
#include "org/orekit/time/PythonTimeVectorFunction.h"
#include "org/orekit/time/PythonUTCTAIOffsetsLoader.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/SatelliteClockScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/TAIUTCDatFilesLoader.h"
#include "org/orekit/time/TAIUTCDatFilesLoader$Parser.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TimeScalesFactory.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "org/orekit/time/TimeStampedDoubleHermiteInterpolator.h"
#include "org/orekit/time/TimeStampedField.h"
#include "org/orekit/time/TimeStampedFieldHermiteInterpolator.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/UTCTAIBulletinAFilesLoader.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader$Parser.h"
#include "org/orekit/time/UTCTAIOffset.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {


      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "time");

        t_AGILeapSecondFilesLoader::install(module);
        t_AGILeapSecondFilesLoader$Parser::install(module);
        t_AbsoluteDate::install(module);
        t_AbstractFieldTimeInterpolator::install(module);
        t_AbstractFieldTimeInterpolator$InterpolationData::install(module);
        t_AbstractTimeInterpolator::install(module);
        t_AbstractTimeInterpolator$InterpolationData::install(module);
        t_AbstractTimeScales::install(module);
        t_BDTScale::install(module);
        t_BurstSelector::install(module);
        t_ChronologicalComparator::install(module);
        t_DateComponents::install(module);
        t_DateTimeComponents::install(module);
        t_DatesSelector::install(module);
        t_FieldAbsoluteDate::install(module);
        t_FieldChronologicalComparator::install(module);
        t_FieldTimeInterpolator::install(module);
        t_FieldTimeShiftable::install(module);
        t_FieldTimeStamped::install(module);
        t_FieldTimeStampedPair::install(module);
        t_FixedStepSelector::install(module);
        t_GLONASSDate::install(module);
        t_GLONASSScale::install(module);
        t_GMSTScale::install(module);
        t_GNSSDate::install(module);
        t_GPSScale::install(module);
        t_GalileoScale::install(module);
        t_IRNSSScale::install(module);
        t_LazyLoadedTimeScales::install(module);
        t_Month::install(module);
        t_OffsetModel::install(module);
        t_PythonAbstractTimeScales::install(module);
        t_PythonDatesSelector::install(module);
        t_PythonFieldTimeInterpolator::install(module);
        t_PythonFieldTimeShiftable::install(module);
        t_PythonFieldTimeStamped::install(module);
        t_PythonParser::install(module);
        t_PythonTimeInterpolator::install(module);
        t_PythonTimeScalarFunction::install(module);
        t_PythonTimeScale::install(module);
        t_PythonTimeScales::install(module);
        t_PythonTimeShiftable::install(module);
        t_PythonTimeStamped::install(module);
        t_PythonTimeVectorFunction::install(module);
        t_PythonUTCTAIOffsetsLoader::install(module);
        t_QZSSScale::install(module);
        t_SatelliteClockScale::install(module);
        t_TAIScale::install(module);
        t_TAIUTCDatFilesLoader::install(module);
        t_TAIUTCDatFilesLoader$Parser::install(module);
        t_TCBScale::install(module);
        t_TCGScale::install(module);
        t_TDBScale::install(module);
        t_TTScale::install(module);
        t_TimeComponents::install(module);
        t_TimeInterpolator::install(module);
        t_TimeScalarFunction::install(module);
        t_TimeScale::install(module);
        t_TimeScales::install(module);
        t_TimeScalesFactory::install(module);
        t_TimeShiftable::install(module);
        t_TimeStamped::install(module);
        t_TimeStampedDouble::install(module);
        t_TimeStampedDoubleHermiteInterpolator::install(module);
        t_TimeStampedField::install(module);
        t_TimeStampedFieldHermiteInterpolator::install(module);
        t_TimeStampedPair::install(module);
        t_TimeVectorFunction::install(module);
        t_UT1Scale::install(module);
        t_UTCScale::install(module);
        t_UTCTAIBulletinAFilesLoader::install(module);
        t_UTCTAIHistoryFilesLoader::install(module);
        t_UTCTAIHistoryFilesLoader$Parser::install(module);
        t_UTCTAIOffset::install(module);
        t_UTCTAIOffsetsLoader::install(module);
        t_UTCTAIOffsetsLoader$Parser::install(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "time");

        t_AGILeapSecondFilesLoader::initialize(module);
        t_AGILeapSecondFilesLoader$Parser::initialize(module);
        t_AbsoluteDate::initialize(module);
        t_AbstractFieldTimeInterpolator::initialize(module);
        t_AbstractFieldTimeInterpolator$InterpolationData::initialize(module);
        t_AbstractTimeInterpolator::initialize(module);
        t_AbstractTimeInterpolator$InterpolationData::initialize(module);
        t_AbstractTimeScales::initialize(module);
        t_BDTScale::initialize(module);
        t_BurstSelector::initialize(module);
        t_ChronologicalComparator::initialize(module);
        t_DateComponents::initialize(module);
        t_DateTimeComponents::initialize(module);
        t_DatesSelector::initialize(module);
        t_FieldAbsoluteDate::initialize(module);
        t_FieldChronologicalComparator::initialize(module);
        t_FieldTimeInterpolator::initialize(module);
        t_FieldTimeShiftable::initialize(module);
        t_FieldTimeStamped::initialize(module);
        t_FieldTimeStampedPair::initialize(module);
        t_FixedStepSelector::initialize(module);
        t_GLONASSDate::initialize(module);
        t_GLONASSScale::initialize(module);
        t_GMSTScale::initialize(module);
        t_GNSSDate::initialize(module);
        t_GPSScale::initialize(module);
        t_GalileoScale::initialize(module);
        t_IRNSSScale::initialize(module);
        t_LazyLoadedTimeScales::initialize(module);
        t_Month::initialize(module);
        t_OffsetModel::initialize(module);
        t_PythonAbstractTimeScales::initialize(module);
        t_PythonDatesSelector::initialize(module);
        t_PythonFieldTimeInterpolator::initialize(module);
        t_PythonFieldTimeShiftable::initialize(module);
        t_PythonFieldTimeStamped::initialize(module);
        t_PythonParser::initialize(module);
        t_PythonTimeInterpolator::initialize(module);
        t_PythonTimeScalarFunction::initialize(module);
        t_PythonTimeScale::initialize(module);
        t_PythonTimeScales::initialize(module);
        t_PythonTimeShiftable::initialize(module);
        t_PythonTimeStamped::initialize(module);
        t_PythonTimeVectorFunction::initialize(module);
        t_PythonUTCTAIOffsetsLoader::initialize(module);
        t_QZSSScale::initialize(module);
        t_SatelliteClockScale::initialize(module);
        t_TAIScale::initialize(module);
        t_TAIUTCDatFilesLoader::initialize(module);
        t_TAIUTCDatFilesLoader$Parser::initialize(module);
        t_TCBScale::initialize(module);
        t_TCGScale::initialize(module);
        t_TDBScale::initialize(module);
        t_TTScale::initialize(module);
        t_TimeComponents::initialize(module);
        t_TimeInterpolator::initialize(module);
        t_TimeScalarFunction::initialize(module);
        t_TimeScale::initialize(module);
        t_TimeScales::initialize(module);
        t_TimeScalesFactory::initialize(module);
        t_TimeShiftable::initialize(module);
        t_TimeStamped::initialize(module);
        t_TimeStampedDouble::initialize(module);
        t_TimeStampedDoubleHermiteInterpolator::initialize(module);
        t_TimeStampedField::initialize(module);
        t_TimeStampedFieldHermiteInterpolator::initialize(module);
        t_TimeStampedPair::initialize(module);
        t_TimeVectorFunction::initialize(module);
        t_UT1Scale::initialize(module);
        t_UTCScale::initialize(module);
        t_UTCTAIBulletinAFilesLoader::initialize(module);
        t_UTCTAIHistoryFilesLoader::initialize(module);
        t_UTCTAIHistoryFilesLoader$Parser::initialize(module);
        t_UTCTAIOffset::initialize(module);
        t_UTCTAIOffsetsLoader::initialize(module);
        t_UTCTAIOffsetsLoader$Parser::initialize(module);
      }
    }
  }
}

#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/utils/AbsolutePVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/AbstractMultipleShooting.h"
#include "org/orekit/utils/AccurateFormatter.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/ConstantPVCoordinatesProvider.h"
#include "org/orekit/utils/Constants.h"
#include "org/orekit/utils/DateDriver.h"
#include "org/orekit/utils/Differentiation.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "org/orekit/utils/ElevationMask.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProviderAdapter.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "org/orekit/utils/FieldLegendrePolynomials.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/FieldTimeSpanMap.h"
#include "org/orekit/utils/FieldTimeSpanMap$Transition.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "org/orekit/utils/FieldTrackingCoordinates.h"
#include "org/orekit/utils/Fieldifier.h"
#include "org/orekit/utils/FrameAdapter.h"
#include "org/orekit/utils/GenericTimeStampedCache.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "org/orekit/utils/InterpolationTableLoader.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "org/orekit/utils/LegendrePolynomials.h"
#include "org/orekit/utils/LoveNumbers.h"
#include "org/orekit/utils/MultipleShooter.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/utils/OccultationEngine$FieldOccultationAngles.h"
#include "org/orekit/utils/OccultationEngine$OccultationAngles.h"
#include "org/orekit/utils/OrekitConfiguration.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/utils/ParameterDriversList$DelegatingDriver.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/utils/ParameterFunction.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "org/orekit/utils/PythonAbstractMultipleShooting.h"
#include "org/orekit/utils/PythonConstants.h"
#include "org/orekit/utils/PythonExtendedPVCoordinatesProvider.h"
#include "org/orekit/utils/PythonFieldPVCoordinatesProvider.h"
#include "org/orekit/utils/PythonFieldTimeStampedCache.h"
#include "org/orekit/utils/PythonMultipleShooting.h"
#include "org/orekit/utils/PythonPVCoordinatesProvider.h"
#include "org/orekit/utils/PythonParameterDriversProvider.h"
#include "org/orekit/utils/PythonParameterFunction.h"
#include "org/orekit/utils/PythonParameterObserver.h"
#include "org/orekit/utils/PythonStateFunction.h"
#include "org/orekit/utils/PythonStateJacobian.h"
#include "org/orekit/utils/PythonTimeStampedCache.h"
#include "org/orekit/utils/PythonTimeStampedGenerator.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "org/orekit/utils/StateFunction.h"
#include "org/orekit/utils/StateJacobian.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/TimeStampedAngularCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeStampedPVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/TrackingCoordinates.h"
#include "org/orekit/utils/WaypointPVBuilder.h"
#include "org/orekit/utils/WaypointPVBuilder$InterpolationFactory.h"

namespace org {
  namespace orekit {
    namespace utils {

      namespace units {
        void __install__(PyObject *module);
        void __initialize__(PyObject *module);
      }

      void __install__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "utils");

        t_AbsolutePVCoordinates::install(module);
        t_AbsolutePVCoordinatesHermiteInterpolator::install(module);
        t_AbstractMultipleShooting::install(module);
        t_AccurateFormatter::install(module);
        t_AggregatedPVCoordinatesProvider::install(module);
        t_AggregatedPVCoordinatesProvider$Builder::install(module);
        t_AggregatedPVCoordinatesProvider$InvalidPVProvider::install(module);
        t_AngularCoordinates::install(module);
        t_AngularDerivativesFilter::install(module);
        t_CartesianDerivativesFilter::install(module);
        t_ConstantPVCoordinatesProvider::install(module);
        t_Constants::install(module);
        t_DateDriver::install(module);
        t_Differentiation::install(module);
        t_DoubleArrayDictionary::install(module);
        t_DoubleArrayDictionary$Entry::install(module);
        t_ElevationMask::install(module);
        t_ExtendedPVCoordinatesProvider::install(module);
        t_ExtendedPVCoordinatesProviderAdapter::install(module);
        t_FieldAbsolutePVCoordinates::install(module);
        t_FieldAbsolutePVCoordinatesHermiteInterpolator::install(module);
        t_FieldAngularCoordinates::install(module);
        t_FieldArrayDictionary::install(module);
        t_FieldArrayDictionary$Entry::install(module);
        t_FieldLegendrePolynomials::install(module);
        t_FieldPVCoordinates::install(module);
        t_FieldPVCoordinatesProvider::install(module);
        t_FieldTimeSpanMap::install(module);
        t_FieldTimeSpanMap$Transition::install(module);
        t_FieldTimeStampedCache::install(module);
        t_FieldTrackingCoordinates::install(module);
        t_Fieldifier::install(module);
        t_FrameAdapter::install(module);
        t_GenericTimeStampedCache::install(module);
        t_IERSConventions::install(module);
        t_IERSConventions$NutationCorrectionConverter::install(module);
        t_ImmutableFieldTimeStampedCache::install(module);
        t_ImmutableTimeStampedCache::install(module);
        t_InterpolationTableLoader::install(module);
        t_LagrangianPoints::install(module);
        t_LegendrePolynomials::install(module);
        t_LoveNumbers::install(module);
        t_MultipleShooter::install(module);
        t_MultipleShooting::install(module);
        t_OccultationEngine::install(module);
        t_OccultationEngine$FieldOccultationAngles::install(module);
        t_OccultationEngine$OccultationAngles::install(module);
        t_OrekitConfiguration::install(module);
        t_PVCoordinates::install(module);
        t_PVCoordinatesProvider::install(module);
        t_ParameterDriver::install(module);
        t_ParameterDriversList::install(module);
        t_ParameterDriversList$DelegatingDriver::install(module);
        t_ParameterDriversProvider::install(module);
        t_ParameterFunction::install(module);
        t_ParameterObserver::install(module);
        t_PythonAbstractMultipleShooting::install(module);
        t_PythonConstants::install(module);
        t_PythonExtendedPVCoordinatesProvider::install(module);
        t_PythonFieldPVCoordinatesProvider::install(module);
        t_PythonFieldTimeStampedCache::install(module);
        t_PythonMultipleShooting::install(module);
        t_PythonPVCoordinatesProvider::install(module);
        t_PythonParameterDriversProvider::install(module);
        t_PythonParameterFunction::install(module);
        t_PythonParameterObserver::install(module);
        t_PythonStateFunction::install(module);
        t_PythonStateJacobian::install(module);
        t_PythonTimeStampedCache::install(module);
        t_PythonTimeStampedGenerator::install(module);
        t_SecularAndHarmonic::install(module);
        t_StateFunction::install(module);
        t_StateJacobian::install(module);
        t_TimeSpanMap::install(module);
        t_TimeSpanMap$Span::install(module);
        t_TimeSpanMap$Transition::install(module);
        t_TimeStampedAngularCoordinates::install(module);
        t_TimeStampedAngularCoordinatesHermiteInterpolator::install(module);
        t_TimeStampedCache::install(module);
        t_TimeStampedFieldAngularCoordinates::install(module);
        t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::install(module);
        t_TimeStampedFieldPVCoordinates::install(module);
        t_TimeStampedFieldPVCoordinatesHermiteInterpolator::install(module);
        t_TimeStampedGenerator::install(module);
        t_TimeStampedPVCoordinates::install(module);
        t_TimeStampedPVCoordinatesHermiteInterpolator::install(module);
        t_TrackingCoordinates::install(module);
        t_WaypointPVBuilder::install(module);
        t_WaypointPVBuilder$InterpolationFactory::install(module);
        units::__install__(module);
      }

      void __initialize__(PyObject *module)
      {
        module = getJavaModule(module, "org.orekit", "utils");

        t_AbsolutePVCoordinates::initialize(module);
        t_AbsolutePVCoordinatesHermiteInterpolator::initialize(module);
        t_AbstractMultipleShooting::initialize(module);
        t_AccurateFormatter::initialize(module);
        t_AggregatedPVCoordinatesProvider::initialize(module);
        t_AggregatedPVCoordinatesProvider$Builder::initialize(module);
        t_AggregatedPVCoordinatesProvider$InvalidPVProvider::initialize(module);
        t_AngularCoordinates::initialize(module);
        t_AngularDerivativesFilter::initialize(module);
        t_CartesianDerivativesFilter::initialize(module);
        t_ConstantPVCoordinatesProvider::initialize(module);
        t_Constants::initialize(module);
        t_DateDriver::initialize(module);
        t_Differentiation::initialize(module);
        t_DoubleArrayDictionary::initialize(module);
        t_DoubleArrayDictionary$Entry::initialize(module);
        t_ElevationMask::initialize(module);
        t_ExtendedPVCoordinatesProvider::initialize(module);
        t_ExtendedPVCoordinatesProviderAdapter::initialize(module);
        t_FieldAbsolutePVCoordinates::initialize(module);
        t_FieldAbsolutePVCoordinatesHermiteInterpolator::initialize(module);
        t_FieldAngularCoordinates::initialize(module);
        t_FieldArrayDictionary::initialize(module);
        t_FieldArrayDictionary$Entry::initialize(module);
        t_FieldLegendrePolynomials::initialize(module);
        t_FieldPVCoordinates::initialize(module);
        t_FieldPVCoordinatesProvider::initialize(module);
        t_FieldTimeSpanMap::initialize(module);
        t_FieldTimeSpanMap$Transition::initialize(module);
        t_FieldTimeStampedCache::initialize(module);
        t_FieldTrackingCoordinates::initialize(module);
        t_Fieldifier::initialize(module);
        t_FrameAdapter::initialize(module);
        t_GenericTimeStampedCache::initialize(module);
        t_IERSConventions::initialize(module);
        t_IERSConventions$NutationCorrectionConverter::initialize(module);
        t_ImmutableFieldTimeStampedCache::initialize(module);
        t_ImmutableTimeStampedCache::initialize(module);
        t_InterpolationTableLoader::initialize(module);
        t_LagrangianPoints::initialize(module);
        t_LegendrePolynomials::initialize(module);
        t_LoveNumbers::initialize(module);
        t_MultipleShooter::initialize(module);
        t_MultipleShooting::initialize(module);
        t_OccultationEngine::initialize(module);
        t_OccultationEngine$FieldOccultationAngles::initialize(module);
        t_OccultationEngine$OccultationAngles::initialize(module);
        t_OrekitConfiguration::initialize(module);
        t_PVCoordinates::initialize(module);
        t_PVCoordinatesProvider::initialize(module);
        t_ParameterDriver::initialize(module);
        t_ParameterDriversList::initialize(module);
        t_ParameterDriversList$DelegatingDriver::initialize(module);
        t_ParameterDriversProvider::initialize(module);
        t_ParameterFunction::initialize(module);
        t_ParameterObserver::initialize(module);
        t_PythonAbstractMultipleShooting::initialize(module);
        t_PythonConstants::initialize(module);
        t_PythonExtendedPVCoordinatesProvider::initialize(module);
        t_PythonFieldPVCoordinatesProvider::initialize(module);
        t_PythonFieldTimeStampedCache::initialize(module);
        t_PythonMultipleShooting::initialize(module);
        t_PythonPVCoordinatesProvider::initialize(module);
        t_PythonParameterDriversProvider::initialize(module);
        t_PythonParameterFunction::initialize(module);
        t_PythonParameterObserver::initialize(module);
        t_PythonStateFunction::initialize(module);
        t_PythonStateJacobian::initialize(module);
        t_PythonTimeStampedCache::initialize(module);
        t_PythonTimeStampedGenerator::initialize(module);
        t_SecularAndHarmonic::initialize(module);
        t_StateFunction::initialize(module);
        t_StateJacobian::initialize(module);
        t_TimeSpanMap::initialize(module);
        t_TimeSpanMap$Span::initialize(module);
        t_TimeSpanMap$Transition::initialize(module);
        t_TimeStampedAngularCoordinates::initialize(module);
        t_TimeStampedAngularCoordinatesHermiteInterpolator::initialize(module);
        t_TimeStampedCache::initialize(module);
        t_TimeStampedFieldAngularCoordinates::initialize(module);
        t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::initialize(module);
        t_TimeStampedFieldPVCoordinates::initialize(module);
        t_TimeStampedFieldPVCoordinatesHermiteInterpolator::initialize(module);
        t_TimeStampedGenerator::initialize(module);
        t_TimeStampedPVCoordinates::initialize(module);
        t_TimeStampedPVCoordinatesHermiteInterpolator::initialize(module);
        t_TrackingCoordinates::initialize(module);
        t_WaypointPVBuilder::initialize(module);
        t_WaypointPVBuilder$InterpolationFactory::initialize(module);
        units::__initialize__(module);
      }
    }
  }
}

#include "org/orekit/utils/units/Parser.h"
#include "org/orekit/utils/units/PowerTerm.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/utils/units/UnitsCache.h"
#include "org/orekit/utils/units/UnitsConverter.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {


        void __install__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.utils", "units");

          t_Parser::install(module);
          t_PowerTerm::install(module);
          t_Unit::install(module);
          t_UnitsCache::install(module);
          t_UnitsConverter::install(module);
        }

        void __initialize__(PyObject *module)
        {
          module = getJavaModule(module, "org.orekit.utils", "units");

          t_Parser::initialize(module);
          t_PowerTerm::initialize(module);
          t_Unit::initialize(module);
          t_UnitsCache::initialize(module);
          t_UnitsConverter::initialize(module);
        }
      }
    }
  }
}

