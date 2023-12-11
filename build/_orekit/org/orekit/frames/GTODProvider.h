#ifndef org_orekit_frames_GTODProvider_H
#define org_orekit_frames_GTODProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Transform;
      class FieldStaticTransform;
      class GTODProvider;
      class EOPBasedTransformProvider;
      class StaticTransform;
      class FieldTransform;
      class EOPHistory;
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
          mid_getEOPHistory_9a64cc378cf7ab6b,
          mid_getNonInterpolatingProvider_082f42517b988af4,
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
