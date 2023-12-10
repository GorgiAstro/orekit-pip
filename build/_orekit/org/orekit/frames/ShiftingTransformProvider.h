#ifndef org_orekit_frames_ShiftingTransformProvider_H
#define org_orekit_frames_ShiftingTransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class AngularDerivativesFilter;
      class CartesianDerivativesFilter;
    }
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

      class ShiftingTransformProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_7257d660d04722f8,
          mid_getGridPoints_f2f64475e4580546,
          mid_getRawProvider_9b4010550f8e9669,
          mid_getStaticTransform_96493aacdf1acda1,
          mid_getStaticTransform_490485462b5938a0,
          mid_getStep_456d9a2f64d6b28d,
          mid_getTransform_d55545a64ea4a9a7,
          mid_getTransform_0b4f24249033b631,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ShiftingTransformProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ShiftingTransformProvider(const ShiftingTransformProvider& obj) : ::java::lang::Object(obj) {}

        ShiftingTransformProvider(const ::org::orekit::frames::TransformProvider &, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::org::orekit::utils::AngularDerivativesFilter &, jint, jdouble, jint, jdouble, jdouble);

        jint getGridPoints() const;
        ::org::orekit::frames::TransformProvider getRawProvider() const;
        ::org::orekit::frames::StaticTransform getStaticTransform(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::orekit::frames::FieldStaticTransform getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble getStep() const;
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
      extern PyType_Def PY_TYPE_DEF(ShiftingTransformProvider);
      extern PyTypeObject *PY_TYPE(ShiftingTransformProvider);

      class t_ShiftingTransformProvider {
      public:
        PyObject_HEAD
        ShiftingTransformProvider object;
        static PyObject *wrap_Object(const ShiftingTransformProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
