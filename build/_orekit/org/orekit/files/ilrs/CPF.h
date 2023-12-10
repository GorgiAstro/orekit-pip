#ifndef org_orekit_files_ilrs_CPF_H
#define org_orekit_files_ilrs_CPF_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CPF$CPFCoordinate;
        class CPF$CPFEphemeris;
        class CPFHeader;
      }
      namespace general {
        class EphemerisFile;
      }
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace time {
      class TimeScale;
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
  namespace util {
    class List;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CPF : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_addSatelliteCoordinate_2121cf57a15dacdf,
            mid_addSatelliteCoordinates_91fd4e71827f714e,
            mid_addSatelliteVelocityToCPFCoordinate_898ecd5be95da09c,
            mid_getComments_2afa36052df4765d,
            mid_getHeader_2291408dbd033b0e,
            mid_getSatellites_6f5a75ccd8c04465,
            mid_getTimeScale_c39031284193adbe,
            mid_setFilter_10d93bbae9f06624,
            mid_setInterpolationSample_99803b0791f320ff,
            mid_setMu_17db3a65980d3441,
            mid_setTimeScale_e93d77ad761aa1f2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CPF(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CPF(const CPF& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *DEFAULT_ID;

          CPF();

          void addSatelliteCoordinate(const ::java::lang::String &, const ::org::orekit::files::ilrs::CPF$CPFCoordinate &) const;
          void addSatelliteCoordinates(const ::java::lang::String &, const ::java::util::List &) const;
          void addSatelliteVelocityToCPFCoordinate(const ::java::lang::String &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          ::java::util::List getComments() const;
          ::org::orekit::files::ilrs::CPFHeader getHeader() const;
          ::java::util::Map getSatellites() const;
          ::org::orekit::time::TimeScale getTimeScale() const;
          void setFilter(const ::org::orekit::utils::CartesianDerivativesFilter &) const;
          void setInterpolationSample(jint) const;
          void setMu(jdouble) const;
          void setTimeScale(const ::org::orekit::time::TimeScale &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        extern PyType_Def PY_TYPE_DEF(CPF);
        extern PyTypeObject *PY_TYPE(CPF);

        class t_CPF {
        public:
          PyObject_HEAD
          CPF object;
          static PyObject *wrap_Object(const CPF&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
