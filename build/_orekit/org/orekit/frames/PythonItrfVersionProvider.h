#ifndef org_orekit_frames_PythonItrfVersionProvider_H
#define org_orekit_frames_PythonItrfVersionProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class ITRFVersionLoader$ITRFVersionConfiguration;
      class ItrfVersionProvider;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonItrfVersionProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7ae3461a92a43152,
          mid_finalize_7ae3461a92a43152,
          mid_getConfiguration_b4e9a20fc9bc25eb,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
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
