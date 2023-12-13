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
    class SecurityManager;
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
        mid_arraycopy_5ef86faafe5c5319,
        mid_clearProperty_6f0f3576df9f75ee,
        mid_console_b356a13e79791853,
        mid_currentTimeMillis_6c0ce7e438e5ded4,
        mid_exit_44ed599e93e8a30c,
        mid_gc_a1fa5dae97ea5ed2,
        mid_getLogger_166034580d25badb,
        mid_getLogger_95c3b777b3e0ddbd,
        mid_getProperties_445d7f36702bb006,
        mid_getProperty_6f0f3576df9f75ee,
        mid_getProperty_88f2f8c619f3cbd0,
        mid_getSecurityManager_b096220aecda9b75,
        mid_getenv_810bed48fafb0b9a,
        mid_getenv_6f0f3576df9f75ee,
        mid_identityHashCode_b7898c5e94612125,
        mid_lineSeparator_1c1fa1e935d6cdcf,
        mid_load_734b91ac30d5f9b4,
        mid_loadLibrary_734b91ac30d5f9b4,
        mid_mapLibraryName_6f0f3576df9f75ee,
        mid_nanoTime_6c0ce7e438e5ded4,
        mid_runFinalization_a1fa5dae97ea5ed2,
        mid_setErr_5820b90479773400,
        mid_setIn_471a178453aa39ad,
        mid_setOut_5820b90479773400,
        mid_setProperties_8d64b213c25ee01e,
        mid_setProperty_88f2f8c619f3cbd0,
        mid_setSecurityManager_d90250d0a4a5dad5,
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
