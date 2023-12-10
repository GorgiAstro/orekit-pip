#ifndef org_orekit_frames_FieldTransformGenerator_H
#define org_orekit_frames_FieldTransformGenerator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    class Field;
  }
  namespace orekit {
    namespace utils {
      class TimeStampedGenerator;
    }
    namespace frames {
      class TransformProvider;
      class FieldTransform;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class FieldTransformGenerator : public ::java::lang::Object {
       public:
        enum {
          mid_init$_220e84d724c5b9fb,
          mid_generate_b7149ea6787a6f3c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldTransformGenerator(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldTransformGenerator(const FieldTransformGenerator& obj) : ::java::lang::Object(obj) {}

        FieldTransformGenerator(const ::org::hipparchus::Field &, jint, const ::org::orekit::frames::TransformProvider &, jdouble);

        ::java::util::List generate(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(FieldTransformGenerator);
      extern PyTypeObject *PY_TYPE(FieldTransformGenerator);

      class t_FieldTransformGenerator {
      public:
        PyObject_HEAD
        FieldTransformGenerator object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldTransformGenerator *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldTransformGenerator&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldTransformGenerator&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif