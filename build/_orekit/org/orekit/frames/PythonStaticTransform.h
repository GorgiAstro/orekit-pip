#ifndef org_orekit_frames_PythonStaticTransform_H
#define org_orekit_frames_PythonStaticTransform_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class Rotation;
        }
      }
    }
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class StaticTransform;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonStaticTransform : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getDate_7a97f7e149e79afb,
          mid_getInverse_f798b00aed778de3,
          mid_getRotation_1e0dc1a6788897b9,
          mid_getTranslation_f88961cca75a2c0a,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonStaticTransform(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonStaticTransform(const PythonStaticTransform& obj) : ::java::lang::Object(obj) {}

        PythonStaticTransform();

        void finalize() const;
        ::org::orekit::time::AbsoluteDate getDate() const;
        ::org::orekit::frames::StaticTransform getInverse() const;
        ::org::hipparchus::geometry::euclidean::threed::Rotation getRotation() const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getTranslation() const;
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
      extern PyType_Def PY_TYPE_DEF(PythonStaticTransform);
      extern PyTypeObject *PY_TYPE(PythonStaticTransform);

      class t_PythonStaticTransform {
      public:
        PyObject_HEAD
        PythonStaticTransform object;
        static PyObject *wrap_Object(const PythonStaticTransform&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
