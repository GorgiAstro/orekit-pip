#ifndef org_orekit_frames_EclipticProvider_H
#define org_orekit_frames_EclipticProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeScales;
    }
    namespace frames {
      class FieldTransform;
      class Transform;
      class TransformProvider;
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
          mid_init$_ac70b017ca00646a,
          mid_init$_704fd9f6cce01267,
          mid_getTransform_02ca17ac51b6a4b2,
          mid_getTransform_286745ef54e0a7f6,
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
