#ifndef org_orekit_frames_GTODProvider_H
#define org_orekit_frames_GTODProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class FieldTransform;
      class EOPBasedTransformProvider;
      class Transform;
      class EOPHistory;
      class FieldStaticTransform;
      class StaticTransform;
      class GTODProvider;
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

      class GTODProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getEOPHistory_f9d30be358d43685,
          mid_getNonInterpolatingProvider_ef75ce810ae41bf2,
          mid_getStaticTransform_5f13614b572308e8,
          mid_getStaticTransform_09ace34b8a3460b2,
          mid_getTransform_976d4bc81671ce42,
          mid_getTransform_7a8ca6856fe3fc9e,
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
