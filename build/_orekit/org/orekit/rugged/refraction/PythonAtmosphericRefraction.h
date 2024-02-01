#ifndef org_orekit_rugged_refraction_PythonAtmosphericRefraction_H
#define org_orekit_rugged_refraction_PythonAtmosphericRefraction_H

#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        class NormalizedGeodeticPoint;
      }
      namespace intersection {
        class IntersectionAlgorithm;
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        class PythonAtmosphericRefraction : public ::org::orekit::rugged::refraction::AtmosphericRefraction {
         public:
          enum {
            mid_init$_ff7cb6c242604316,
            mid_applyCorrection_1ebaacadb4fd5fdc,
            mid_finalize_ff7cb6c242604316,
            mid_pythonDecRef_ff7cb6c242604316,
            mid_pythonExtension_42c72b98e3c2e08a,
            mid_pythonExtension_f5bbab7e97879358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonAtmosphericRefraction(jobject obj) : ::org::orekit::rugged::refraction::AtmosphericRefraction(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonAtmosphericRefraction(const PythonAtmosphericRefraction& obj) : ::org::orekit::rugged::refraction::AtmosphericRefraction(obj) {}

          PythonAtmosphericRefraction();

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint applyCorrection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint &, const ::org::orekit::rugged::intersection::IntersectionAlgorithm &) const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {
        extern PyType_Def PY_TYPE_DEF(PythonAtmosphericRefraction);
        extern PyTypeObject *PY_TYPE(PythonAtmosphericRefraction);

        class t_PythonAtmosphericRefraction {
        public:
          PyObject_HEAD
          PythonAtmosphericRefraction object;
          static PyObject *wrap_Object(const PythonAtmosphericRefraction&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
