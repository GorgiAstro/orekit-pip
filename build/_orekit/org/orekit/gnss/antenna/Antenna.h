#ifndef org_orekit_gnss_antenna_Antenna_H
#define org_orekit_gnss_antenna_Antenna_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace gnss {
      namespace antenna {
        class FrequencyPattern;
      }
      class Frequency;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        class Antenna : public ::java::lang::Object {
         public:
          enum {
            mid_getEccentricities_d0488333e6550601,
            mid_getFrequencies_e62d3bb06d56d7e3,
            mid_getPattern_653181fb59ddf806,
            mid_getPhaseCenterVariation_3f5cfe9e5195b182,
            mid_getSinexCode_1c1fa1e935d6cdcf,
            mid_getType_1c1fa1e935d6cdcf,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Antenna(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Antenna(const Antenna& obj) : ::java::lang::Object(obj) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D getEccentricities(const ::org::orekit::gnss::Frequency &) const;
          ::java::util::List getFrequencies() const;
          ::org::orekit::gnss::antenna::FrequencyPattern getPattern(const ::org::orekit::gnss::Frequency &) const;
          jdouble getPhaseCenterVariation(const ::org::orekit::gnss::Frequency &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          ::java::lang::String getSinexCode() const;
          ::java::lang::String getType() const;
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
        extern PyType_Def PY_TYPE_DEF(Antenna);
        extern PyTypeObject *PY_TYPE(Antenna);

        class t_Antenna {
        public:
          PyObject_HEAD
          Antenna object;
          static PyObject *wrap_Object(const Antenna&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
