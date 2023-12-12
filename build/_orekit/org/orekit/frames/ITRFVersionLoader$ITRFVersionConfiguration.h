#ifndef org_orekit_frames_ITRFVersionLoader$ITRFVersionConfiguration_H
#define org_orekit_frames_ITRFVersionLoader$ITRFVersionConfiguration_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class ITRFVersion;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class ITRFVersionLoader$ITRFVersionConfiguration : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0faa264352fa9521,
          mid_appliesTo_fd2162b8a05a22fe,
          mid_getVersion_b311296551ce8af2,
          mid_isValid_e034cac2b514bb09,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ITRFVersionLoader$ITRFVersionConfiguration(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ITRFVersionLoader$ITRFVersionConfiguration(const ITRFVersionLoader$ITRFVersionConfiguration& obj) : ::java::lang::Object(obj) {}

        ITRFVersionLoader$ITRFVersionConfiguration(const ::java::lang::String &, const ::org::orekit::frames::ITRFVersion &, jint, jint);

        jboolean appliesTo(const ::java::lang::String &) const;
        ::org::orekit::frames::ITRFVersion getVersion() const;
        jboolean isValid(jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(ITRFVersionLoader$ITRFVersionConfiguration);
      extern PyTypeObject *PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration);

      class t_ITRFVersionLoader$ITRFVersionConfiguration {
      public:
        PyObject_HEAD
        ITRFVersionLoader$ITRFVersionConfiguration object;
        static PyObject *wrap_Object(const ITRFVersionLoader$ITRFVersionConfiguration&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
