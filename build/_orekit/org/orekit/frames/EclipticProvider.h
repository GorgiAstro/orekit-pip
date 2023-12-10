#ifndef org_orekit_frames_EclipticProvider_H
#define org_orekit_frames_EclipticProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions;
    }
    namespace frames {
      class TransformProvider;
      class FieldTransform;
      class Transform;
    }
    namespace time {
      class TimeScales;
      class AbsoluteDate;
      class FieldAbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class EclipticProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7762a3bbe4c9b5d5,
          mid_init$_840415639e18784b,
          mid_getTransform_687985c59478d29c,
          mid_getTransform_f7bf3269025b86c3,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit EclipticProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        EclipticProvider(const EclipticProvider& obj) : ::java::lang::Object(obj) {}

        EclipticProvider(const ::org::orekit::utils::IERSConventions &);
        EclipticProvider(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::time::TimeScales &);

        ::org::orekit::frames::Transform getTransform(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldTransform getTransform(const ::org::orekit::time::FieldAbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(EclipticProvider);
      extern PyTypeObject *PY_TYPE(EclipticProvider);

      class t_EclipticProvider {
      public:
        PyObject_HEAD
        EclipticProvider object;
        static PyObject *wrap_Object(const EclipticProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
