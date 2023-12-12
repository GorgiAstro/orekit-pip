#ifndef org_orekit_frames_ItrfVersionProvider_H
#define org_orekit_frames_ItrfVersionProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class ITRFVersionLoader$ITRFVersionConfiguration;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class ItrfVersionProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getConfiguration_a005f84471bdab98,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ItrfVersionProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ItrfVersionProvider(const ItrfVersionProvider& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration getConfiguration(const ::java::lang::String &, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(ItrfVersionProvider);
      extern PyTypeObject *PY_TYPE(ItrfVersionProvider);

      class t_ItrfVersionProvider {
      public:
        PyObject_HEAD
        ItrfVersionProvider object;
        static PyObject *wrap_Object(const ItrfVersionProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
