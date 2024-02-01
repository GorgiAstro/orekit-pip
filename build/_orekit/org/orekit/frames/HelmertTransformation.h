#ifndef org_orekit_frames_HelmertTransformation_H
#define org_orekit_frames_HelmertTransformation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
      class FieldTransform;
      class Transform;
      class TransformProvider;
      class StaticTransform;
    }
    namespace time {
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

      class HelmertTransformation : public ::java::lang::Object {
       public:
        enum {
          mid_init$_c661e973f2425711,
          mid_getEpoch_80e11148db499dda,
          mid_getStaticTransform_6e492420312934f1,
          mid_getStaticTransform_3b5ee2ab7cc035a5,
          mid_getTransform_02ca17ac51b6a4b2,
          mid_getTransform_286745ef54e0a7f6,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit HelmertTransformation(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        HelmertTransformation(const HelmertTransformation& obj) : ::java::lang::Object(obj) {}

        HelmertTransformation(const ::org::orekit::time::AbsoluteDate &, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

        ::org::orekit::time::AbsoluteDate getEpoch() const;
        ::org::orekit::frames::StaticTransform getStaticTransform(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldStaticTransform getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate &) const;
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
      extern PyType_Def PY_TYPE_DEF(HelmertTransformation);
      extern PyTypeObject *PY_TYPE(HelmertTransformation);

      class t_HelmertTransformation {
      public:
        PyObject_HEAD
        HelmertTransformation object;
        static PyObject *wrap_Object(const HelmertTransformation&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
