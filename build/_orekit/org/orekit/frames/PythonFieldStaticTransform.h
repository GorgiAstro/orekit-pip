#ifndef org_orekit_frames_PythonFieldStaticTransform_H
#define org_orekit_frames_PythonFieldStaticTransform_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
        }
      }
    }
  }
  namespace orekit {
    namespace frames {
      class FieldStaticTransform;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonFieldStaticTransform : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getDate_85703d13e302437e,
          mid_getInverse_b4e9bd069b43219a,
          mid_getRotation_1d339a2ee3a3323a,
          mid_getTranslation_716f50c86ffc8da7,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFieldStaticTransform(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFieldStaticTransform(const PythonFieldStaticTransform& obj) : ::java::lang::Object(obj) {}

        PythonFieldStaticTransform();

        void finalize() const;
        ::org::orekit::time::AbsoluteDate getDate() const;
        ::org::orekit::frames::FieldStaticTransform getInverse() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation getRotation() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getTranslation() const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(PythonFieldStaticTransform);
      extern PyTypeObject *PY_TYPE(PythonFieldStaticTransform);

      class t_PythonFieldStaticTransform {
      public:
        PyObject_HEAD
        PythonFieldStaticTransform object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PythonFieldStaticTransform *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonFieldStaticTransform&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonFieldStaticTransform&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
