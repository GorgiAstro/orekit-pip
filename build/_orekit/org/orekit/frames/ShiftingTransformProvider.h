#ifndef org_orekit_frames_ShiftingTransformProvider_H
#define org_orekit_frames_ShiftingTransformProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
      class TransformProvider;
      class FieldTransform;
      class Transform;
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
          mid_init$_720281015ac47b21,
          mid_getGridPoints_570ce0828f81a2c1,
          mid_getRawProvider_b22bdbe9f9cd12d5,
          mid_getStaticTransform_edee248bbd22a723,
          mid_getStaticTransform_eae0db96fe973887,
          mid_getStep_dff5885c2c873297,
          mid_getTransform_687985c59478d29c,
          mid_getTransform_f7bf3269025b86c3,
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
