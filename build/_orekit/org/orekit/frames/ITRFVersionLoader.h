#ifndef org_orekit_frames_ITRFVersionLoader_H
#define org_orekit_frames_ITRFVersionLoader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class ITRFVersionLoader$ITRFVersionConfiguration;
      class ItrfVersionProvider;
    }
    namespace data {
      class DataProvidersManager;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class ITRFVersionLoader : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_init$_734b91ac30d5f9b4,
          mid_init$_0343d25c5af74eca,
          mid_getConfiguration_c175c26b8f14b277,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ITRFVersionLoader(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ITRFVersionLoader(const ITRFVersionLoader& obj) : ::java::lang::Object(obj) {}

        static ::java::lang::String *SUPPORTED_NAMES;

        ITRFVersionLoader();
        ITRFVersionLoader(const ::java::lang::String &);
        ITRFVersionLoader(const ::java::lang::String &, const ::org::orekit::data::DataProvidersManager &);

        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration getConfiguration(const ::java::lang::String &, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(ITRFVersionLoader);
      extern PyTypeObject *PY_TYPE(ITRFVersionLoader);

      class t_ITRFVersionLoader {
      public:
        PyObject_HEAD
        ITRFVersionLoader object;
        static PyObject *wrap_Object(const ITRFVersionLoader&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
