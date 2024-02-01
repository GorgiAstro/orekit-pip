#ifndef org_orekit_rugged_los_PythonTimeIndependentLOSTransform_H
#define org_orekit_rugged_los_PythonTimeIndependentLOSTransform_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace stream {
      class Stream;
    }
  }
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
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace rugged {
      namespace los {
        class TimeIndependentLOSTransform;
      }
      namespace utils {
        class DerivativeGenerator;
      }
    }
    namespace utils {
      class ParameterDriver;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        class PythonTimeIndependentLOSTransform : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_finalize_ff7cb6c242604316,
            mid_getParametersDrivers_11e4ca8182c1933d,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            mid_transformLOS_228f1c415ce966c1,
            mid_transformLOS_abcb5ae819a3f86b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonTimeIndependentLOSTransform(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonTimeIndependentLOSTransform(const PythonTimeIndependentLOSTransform& obj) : ::java::lang::Object(obj) {}

          PythonTimeIndependentLOSTransform();

          void finalize() const;
          ::java::util::stream::Stream getParametersDrivers() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D transformLOS(jint, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D transformLOS(jint, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D &, const ::org::orekit::rugged::utils::DerivativeGenerator &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {
        extern PyType_Def PY_TYPE_DEF(PythonTimeIndependentLOSTransform);
        extern PyTypeObject *PY_TYPE(PythonTimeIndependentLOSTransform);

        class t_PythonTimeIndependentLOSTransform {
        public:
          PyObject_HEAD
          PythonTimeIndependentLOSTransform object;
          static PyObject *wrap_Object(const PythonTimeIndependentLOSTransform&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
