#ifndef org_orekit_files_ilrs_CPF_H
#define org_orekit_files_ilrs_CPF_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CPF$CPFCoordinate;
        class CPFHeader;
        class CPF$CPFEphemeris;
      }
      namespace general {
        class EphemerisFile;
      }
    }
    namespace time {
      class TimeScale;
    }
    namespace utils {
      class CartesianDerivativesFilter;
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
            mid_init$_7ae3461a92a43152,
            mid_addSatelliteCoordinate_c3cd3ea9a0404274,
            mid_addSatelliteCoordinates_6ea6ec8379c9f4a5,
            mid_addSatelliteVelocityToCPFCoordinate_ff42c417021079b7,
            mid_getComments_a6156df500549a58,
            mid_getHeader_79ac7ef6978f6ee0,
            mid_getSatellites_d6753b7055940a54,
            mid_getTimeScale_63ac10047983bd43,
            mid_setFilter_8aadfa247de709c5,
            mid_setInterpolationSample_0a2a1ac2721c0336,
            mid_setMu_77e0f9a1f260e2e5,
            mid_setTimeScale_6d73d536a2f24dd5,
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
