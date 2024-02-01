#ifndef java_lang_System_H
#define java_lang_System_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Properties;
    class ResourceBundle;
  }
  namespace io {
    class InputStream;
    class Console;
    class PrintStream;
  }
  namespace lang {
    class SecurityManager;
    class System$Logger;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System : public ::java::lang::Object {
     public:
      enum {
        mid_arraycopy_9ffe6c5e265c38cf,
        mid_clearProperty_95277969d373e11f,
        mid_console_2beedf7cadcea0bb,
        mid_currentTimeMillis_42c72b98e3c2e08a,
        mid_exit_8fd427ab23829bf5,
        mid_gc_ff7cb6c242604316,
        mid_getLogger_a9ce29de29c7962d,
        mid_getLogger_a8ca924d29f1b3ac,
        mid_getProperties_de246c017ced4e31,
        mid_getProperty_95277969d373e11f,
        mid_getProperty_91d6dcf90111829e,
        mid_getSecurityManager_46900078393b946d,
        mid_getenv_dbcb8bbac6b35e0d,
        mid_getenv_95277969d373e11f,
        mid_identityHashCode_9aa1a0d21cdeb90e,
        mid_lineSeparator_d2c8eb4129821f0e,
        mid_load_105e1eadb709d9ac,
        mid_loadLibrary_105e1eadb709d9ac,
        mid_mapLibraryName_95277969d373e11f,
        mid_nanoTime_42c72b98e3c2e08a,
        mid_runFinalization_ff7cb6c242604316,
        mid_setErr_7a6583f48fc2663f,
        mid_setIn_8f4bef0679d2f8d5,
        mid_setOut_7a6583f48fc2663f,
        mid_setProperties_7c18cb0182508f57,
        mid_setProperty_91d6dcf90111829e,
        mid_setSecurityManager_a905106515538997,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit System(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      System(const System& obj) : ::java::lang::Object(obj) {}

      static ::java::io::PrintStream *err;
      static ::java::io::InputStream *in;
      static ::java::io::PrintStream *out;

      static void arraycopy(const ::java::lang::Object &, jint, const ::java::lang::Object &, jint, jint);
      static ::java::lang::String clearProperty(const ::java::lang::String &);
      static ::java::io::Console console();
      static jlong currentTimeMillis();
      static void exit(jint);
      static void gc();
      static ::java::lang::System$Logger getLogger(const ::java::lang::String &);
      static ::java::lang::System$Logger getLogger(const ::java::lang::String &, const ::java::util::ResourceBundle &);
      static ::java::util::Properties getProperties();
      static ::java::lang::String getProperty(const ::java::lang::String &);
      static ::java::lang::String getProperty(const ::java::lang::String &, const ::java::lang::String &);
      static ::java::lang::SecurityManager getSecurityManager();
      static ::java::util::Map getenv();
      static ::java::lang::String getenv(const ::java::lang::String &);
      static jint identityHashCode(const ::java::lang::Object &);
      static ::java::lang::String lineSeparator();
      static void load(const ::java::lang::String &);
      static void loadLibrary(const ::java::lang::String &);
      static ::java::lang::String mapLibraryName(const ::java::lang::String &);
      static jlong nanoTime();
      static void runFinalization();
      static void setErr(const ::java::io::PrintStream &);
      static void setIn(const ::java::io::InputStream &);
      static void setOut(const ::java::io::PrintStream &);
      static void setProperties(const ::java::util::Properties &);
      static ::java::lang::String setProperty(const ::java::lang::String &, const ::java::lang::String &);
      static void setSecurityManager(const ::java::lang::SecurityManager &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(System);
    extern PyTypeObject *PY_TYPE(System);

    class t_System {
    public:
      PyObject_HEAD
      System object;
      static PyObject *wrap_Object(const System&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
