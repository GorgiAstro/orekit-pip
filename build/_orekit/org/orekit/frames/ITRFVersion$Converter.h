#ifndef org_orekit_frames_ITRFVersion$Converter_H
#define org_orekit_frames_ITRFVersion$Converter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class TransformProvider;
      class Transform;
      class FieldStaticTransform;
      class StaticTransform;
      class ITRFVersion;
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

      class ITRFVersion$Converter : public ::java::lang::Object {
       public:
        enum {
          mid_getDestination_b311296551ce8af2,
          mid_getOrigin_b311296551ce8af2,
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

        explicit ITRFVersion$Converter(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ITRFVersion$Converter(const ITRFVersion$Converter& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::frames::ITRFVersion getDestination() const;
        ::org::orekit::frames::ITRFVersion getOrigin() const;
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
      extern PyType_Def PY_TYPE_DEF(ITRFVersion$Converter);
      extern PyTypeObject *PY_TYPE(ITRFVersion$Converter);

      class t_ITRFVersion$Converter {
      public:
        PyObject_HEAD
        ITRFVersion$Converter object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ITRFVersion$Converter *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ITRFVersion$Converter&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ITRFVersion$Converter&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
