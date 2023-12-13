#ifndef org_orekit_frames_ShiftingTransformProvider_H
#define org_orekit_frames_ShiftingTransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldTransform;
      class TransformProvider;
      class Transform;
      class FieldStaticTransform;
      class StaticTransform;
    }
    namespace time {
      class FieldAbsoluteDate;
      class AbsoluteDate;
    }
    namespace utils {
      class AngularDerivativesFilter;
      class CartesianDerivativesFilter;
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
          mid_init$_b5ee83e9cfd012af,
          mid_getGridPoints_55546ef6a647f39b,
          mid_getRawProvider_51018934a5745bab,
          mid_getStaticTransform_5f13614b572308e8,
          mid_getStaticTransform_09ace34b8a3460b2,
          mid_getStep_b74f83833fdad017,
          mid_getTransform_976d4bc81671ce42,
          mid_getTransform_7a8ca6856fe3fc9e,
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
