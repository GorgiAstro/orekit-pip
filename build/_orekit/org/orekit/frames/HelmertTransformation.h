#ifndef org_orekit_frames_HelmertTransformation_H
#define org_orekit_frames_HelmertTransformation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class TransformProvider;
      class Transform;
      class FieldStaticTransform;
      class StaticTransform;
      class FieldTransform;
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
          mid_init$_426b0859dba72583,
          mid_getEpoch_7a97f7e149e79afb,
          mid_getStaticTransform_7265a2d9c3b9a38a,
          mid_getStaticTransform_68fd5b9bb9184393,
          mid_getTransform_df04e3927954349e,
          mid_getTransform_e70631ba002d9a32,
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
