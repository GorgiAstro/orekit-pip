#ifndef org_orekit_frames_GTODProvider_H
#define org_orekit_frames_GTODProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EOPBasedTransformProvider;
      class FieldStaticTransform;
      class GTODProvider;
      class FieldTransform;
      class Transform;
      class StaticTransform;
      class EOPHistory;
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

      class GTODProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getEOPHistory_867110817f590882,
          mid_getNonInterpolatingProvider_8f82c030e2817dc5,
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

        explicit GTODProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        GTODProvider(const GTODProvider& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::frames::EOPHistory getEOPHistory() const;
        GTODProvider getNonInterpolatingProvider() const;
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
      extern PyType_Def PY_TYPE_DEF(GTODProvider);
      extern PyTypeObject *PY_TYPE(GTODProvider);

      class t_GTODProvider {
      public:
        PyObject_HEAD
        GTODProvider object;
        static PyObject *wrap_Object(const GTODProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
