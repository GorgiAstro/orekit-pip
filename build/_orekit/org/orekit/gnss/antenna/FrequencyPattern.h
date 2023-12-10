#ifndef org_orekit_gnss_antenna_FrequencyPattern_H
#define org_orekit_gnss_antenna_FrequencyPattern_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        class FrequencyPattern;
        class PhaseCenterVariationFunction;
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
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        class FrequencyPattern : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3c7311ce76e74007,
            mid_getEccentricities_17a952530a808943,
            mid_getPhaseCenterVariation_80b2470b9511edd1,
            mid_getPhaseCenterVariationFunction_c31e4831a8342524,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FrequencyPattern(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FrequencyPattern(const FrequencyPattern& obj) : ::java::lang::Object(obj) {}

          static FrequencyPattern *ZERO_CORRECTION;

          FrequencyPattern(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::gnss::antenna::PhaseCenterVariationFunction &);

          ::org::hipparchus::geometry::euclidean::threed::Vector3D getEccentricities() const;
          jdouble getPhaseCenterVariation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          ::org::orekit::gnss::antenna::PhaseCenterVariationFunction getPhaseCenterVariationFunction() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        extern PyType_Def PY_TYPE_DEF(FrequencyPattern);
        extern PyTypeObject *PY_TYPE(FrequencyPattern);

        class t_FrequencyPattern {
        public:
          PyObject_HEAD
          FrequencyPattern object;
          static PyObject *wrap_Object(const FrequencyPattern&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
