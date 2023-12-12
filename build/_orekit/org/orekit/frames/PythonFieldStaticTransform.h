#ifndef org_orekit_frames_PythonFieldStaticTransform_H
#define org_orekit_frames_PythonFieldStaticTransform_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class FieldRotation;
        }
      }
    }
    class CalculusFieldElement;
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
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getDate_7a97f7e149e79afb,
          mid_getInverse_fe2c5c7bc73a25b6,
          mid_getRotation_73da4eeccf2b7e14,
          mid_getTranslation_2d64addf4c3391d9,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
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
