#ifndef java_io_File_H
#define java_io_File_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
    class FileFilter;
    class File;
    class FilenameFilter;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
  namespace net {
    class URL;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class File : public ::java::lang::Object {
     public:
      enum {
        mid_init$_734b91ac30d5f9b4,
        mid_init$_6e63b60ae073cb68,
        mid_init$_a627ad9c5959309d,
        mid_canExecute_9ab94ac1dc23b105,
        mid_canRead_9ab94ac1dc23b105,
        mid_canWrite_9ab94ac1dc23b105,
        mid_compareTo_d28517c799a232a1,
        mid_createNewFile_9ab94ac1dc23b105,
        mid_createTempFile_4b334f2b7c20f1fa,
        mid_createTempFile_17a9a3662a3a1e80,
        mid_delete_9ab94ac1dc23b105,
        mid_deleteOnExit_a1fa5dae97ea5ed2,
        mid_equals_460c5e2d9d51c6cc,
        mid_exists_9ab94ac1dc23b105,
        mid_getAbsoluteFile_dfe439e69c3f2d1a,
        mid_getAbsolutePath_1c1fa1e935d6cdcf,
        mid_getCanonicalFile_dfe439e69c3f2d1a,
        mid_getCanonicalPath_1c1fa1e935d6cdcf,
        mid_getFreeSpace_6c0ce7e438e5ded4,
        mid_getName_1c1fa1e935d6cdcf,
        mid_getParent_1c1fa1e935d6cdcf,
        mid_getParentFile_dfe439e69c3f2d1a,
        mid_getPath_1c1fa1e935d6cdcf,
        mid_getTotalSpace_6c0ce7e438e5ded4,
        mid_getUsableSpace_6c0ce7e438e5ded4,
        mid_hashCode_55546ef6a647f39b,
        mid_isAbsolute_9ab94ac1dc23b105,
        mid_isDirectory_9ab94ac1dc23b105,
        mid_isFile_9ab94ac1dc23b105,
        mid_isHidden_9ab94ac1dc23b105,
        mid_lastModified_6c0ce7e438e5ded4,
        mid_length_6c0ce7e438e5ded4,
        mid_list_0f94e41879ab7062,
        mid_list_854db0cab68c4b9e,
        mid_listFiles_bb33ba2b3bbb5885,
        mid_listFiles_170a82fdecc6cabb,
        mid_listFiles_55793f588f94a98c,
        mid_listRoots_bb33ba2b3bbb5885,
        mid_mkdir_9ab94ac1dc23b105,
        mid_mkdirs_9ab94ac1dc23b105,
        mid_renameTo_a49c91b14b47fa95,
        mid_setExecutable_52d2d2523d94d978,
        mid_setExecutable_9409adb0789a48aa,
        mid_setLastModified_ba9ecb578b8b76e7,
        mid_setReadOnly_9ab94ac1dc23b105,
        mid_setReadable_52d2d2523d94d978,
        mid_setReadable_9409adb0789a48aa,
        mid_setWritable_52d2d2523d94d978,
        mid_setWritable_9409adb0789a48aa,
        mid_toString_1c1fa1e935d6cdcf,
        mid_toURL_a6459b78443cf7d6,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit File(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      File(const File& obj) : ::java::lang::Object(obj) {}

      static ::java::lang::String *pathSeparator;
      static jchar pathSeparatorChar;
      static ::java::lang::String *separator;
      static jchar separatorChar;

      File(const ::java::lang::String &);
      File(const File &, const ::java::lang::String &);
      File(const ::java::lang::String &, const ::java::lang::String &);

      jboolean canExecute() const;
      jboolean canRead() const;
      jboolean canWrite() const;
      jint compareTo(const File &) const;
      jboolean createNewFile() const;
      static File createTempFile(const ::java::lang::String &, const ::java::lang::String &);
      static File createTempFile(const ::java::lang::String &, const ::java::lang::String &, const File &);
      jboolean delete$() const;
      void deleteOnExit() const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean exists() const;
      File getAbsoluteFile() const;
      ::java::lang::String getAbsolutePath() const;
      File getCanonicalFile() const;
      ::java::lang::String getCanonicalPath() const;
      jlong getFreeSpace() const;
      ::java::lang::String getName() const;
      ::java::lang::String getParent() const;
      File getParentFile() const;
      ::java::lang::String getPath() const;
      jlong getTotalSpace() const;
      jlong getUsableSpace() const;
      jint hashCode() const;
      jboolean isAbsolute() const;
      jboolean isDirectory() const;
      jboolean isFile() const;
      jboolean isHidden() const;
      jlong lastModified() const;
      jlong length() const;
      JArray< ::java::lang::String > list() const;
      JArray< ::java::lang::String > list(const ::java::io::FilenameFilter &) const;
      JArray< File > listFiles() const;
      JArray< File > listFiles(const ::java::io::FileFilter &) const;
      JArray< File > listFiles(const ::java::io::FilenameFilter &) const;
      static JArray< File > listRoots();
      jboolean mkdir() const;
      jboolean mkdirs() const;
      jboolean renameTo(const File &) const;
      jboolean setExecutable(jboolean) const;
      jboolean setExecutable(jboolean, jboolean) const;
      jboolean setLastModified(jlong) const;
      jboolean setReadOnly() const;
      jboolean setReadable(jboolean) const;
      jboolean setReadable(jboolean, jboolean) const;
      jboolean setWritable(jboolean) const;
      jboolean setWritable(jboolean, jboolean) const;
      ::java::lang::String toString() const;
      ::java::net::URL toURL() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(File);
    extern PyTypeObject *PY_TYPE(File);

    class t_File {
    public:
      PyObject_HEAD
      File object;
      static PyObject *wrap_Object(const File&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
