#ifndef java_lang_System_H
#define java_lang_System_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class ResourceBundle;
    class Properties;
  }
  namespace io {
    class InputStream;
    class Console;
    class PrintStream;
  }
  namespace lang {
    class System$Logger;
    class Class;
    class String;
    class SecurityManager;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System : public ::java::lang::Object {
     public:
      enum {
        mid_arraycopy_9c85428faa953ae4,
        mid_clearProperty_60bb1b490b673cbf,
        mid_console_d6f040d5f1d89911,
        mid_currentTimeMillis_9e26256fb0d384a2,
        mid_exit_a3da1a935cb37f7b,
        mid_gc_0640e6acf969ed28,
        mid_getLogger_04e24e1cf8b5e4f4,
        mid_getLogger_959e52365d007adc,
        mid_getProperties_61e0a00d9f74111b,
        mid_getProperty_60bb1b490b673cbf,
        mid_getProperty_495add03b8c9417b,
        mid_getSecurityManager_5be429c4111838b6,
        mid_getenv_1e62c2f73fbdd1c4,
        mid_getenv_60bb1b490b673cbf,
        mid_identityHashCode_38a1845c8d44a9b0,
        mid_lineSeparator_3cffd47377eca18a,
        mid_load_f5ffdf29129ef90a,
        mid_loadLibrary_f5ffdf29129ef90a,
        mid_mapLibraryName_60bb1b490b673cbf,
        mid_nanoTime_9e26256fb0d384a2,
        mid_runFinalization_0640e6acf969ed28,
        mid_setErr_bbeebf9dbb580a3d,
        mid_setIn_115bc9fcd812647a,
        mid_setOut_bbeebf9dbb580a3d,
        mid_setProperties_23f27d9a9ce3d8dc,
        mid_setProperty_495add03b8c9417b,
        mid_setSecurityManager_7edea743404d3596,
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
