#ifndef org_orekit_frames_PythonItrfVersionProvider_H
#define org_orekit_frames_PythonItrfVersionProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class ItrfVersionProvider;
      class ITRFVersionLoader$ITRFVersionConfiguration;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonItrfVersionProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getConfiguration_a005f84471bdab98,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonItrfVersionProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonItrfVersionProvider(const PythonItrfVersionProvider& obj) : ::java::lang::Object(obj) {}

        PythonItrfVersionProvider();

        void finalize() const;
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration getConfiguration(const ::java::lang::String &, jint) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(PythonItrfVersionProvider);
      extern PyTypeObject *PY_TYPE(PythonItrfVersionProvider);

      class t_PythonItrfVersionProvider {
      public:
        PyObject_HEAD
        PythonItrfVersionProvider object;
        static PyObject *wrap_Object(const PythonItrfVersionProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
