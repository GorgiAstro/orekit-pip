#ifndef org_orekit_frames_HelmertTransformation_H
#define org_orekit_frames_HelmertTransformation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
      class StaticTransform;
      class TransformProvider;
      class FieldTransform;
      class Transform;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
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
          mid_init$_dbe7ce1323037723,
          mid_getEpoch_aaa854c403487cf3,
          mid_getStaticTransform_96493aacdf1acda1,
          mid_getStaticTransform_490485462b5938a0,
          mid_getTransform_d55545a64ea4a9a7,
          mid_getTransform_0b4f24249033b631,
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
