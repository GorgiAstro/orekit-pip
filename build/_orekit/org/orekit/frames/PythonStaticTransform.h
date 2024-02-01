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
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class StaticTransform;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Rotation;
          class Vector3D;
        }
      }
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
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getDate_80e11148db499dda,
          mid_getInverse_4707295cf0323d2d,
          mid_getRotation_4d68cff5f6e4403a,
          mid_getTranslation_032312bdeb3f2f93,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
