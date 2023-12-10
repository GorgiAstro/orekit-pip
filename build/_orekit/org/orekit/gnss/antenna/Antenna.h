#ifndef org_orekit_gnss_antenna_Antenna_H
#define org_orekit_gnss_antenna_Antenna_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        class Antenna : public ::java::lang::Object {
         public:
          enum {
            mid_getEccentricities_53fff387f14fabf8,
            mid_getFrequencies_2afa36052df4765d,
            mid_getPattern_54cb1a16386102e4,
            mid_getPhaseCenterVariation_79cf2d2802e92516,
            mid_getSinexCode_11b109bd155ca898,
            mid_getType_11b109bd155ca898,
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
