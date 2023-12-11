#ifndef org_orekit_gnss_antenna_SatelliteType_H
#define org_orekit_gnss_antenna_SatelliteType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        class SatelliteType;
      }
      namespace attitude {
        class GNSSAttitudeProvider;
      }
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
    }
    namespace errors {
      class OrekitIllegalArgumentException;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
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

        class SatelliteType : public ::java::lang::Enum {
         public:
          enum {
            mid_buildAttitudeProvider_100eafc913713295,
            mid_getName_3cffd47377eca18a,
            mid_parseSatelliteType_d3855400a5de9c88,
            mid_valueOf_d3855400a5de9c88,
            mid_values_a783438e9dd7dd05,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SatelliteType(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SatelliteType(const SatelliteType& obj) : ::java::lang::Enum(obj) {}

          static SatelliteType *BEIDOU_2G;
          static SatelliteType *BEIDOU_2I;
          static SatelliteType *BEIDOU_2M;
          static SatelliteType *BEIDOU_3G_CAST;
          static SatelliteType *BEIDOU_3I;
          static SatelliteType *BEIDOU_3M_CAST;
          static SatelliteType *BEIDOU_3M_SECM;
          static SatelliteType *BEIDOU_3SI_CAST;
          static SatelliteType *BEIDOU_3SI_SECM;
          static SatelliteType *BEIDOU_3SM_CAST;
          static SatelliteType *BLOCK_I;
          static SatelliteType *BLOCK_II;
          static SatelliteType *BLOCK_IIA;
          static SatelliteType *BLOCK_IIF;
          static SatelliteType *BLOCK_IIIA;
          static SatelliteType *BLOCK_IIR_A;
          static SatelliteType *BLOCK_IIR_B;
          static SatelliteType *BLOCK_IIR_M;
          static SatelliteType *GALILEO_0A;
          static SatelliteType *GALILEO_0B;
          static SatelliteType *GALILEO_1;
          static SatelliteType *GALILEO_2;
          static SatelliteType *GLONASS;
          static SatelliteType *GLONASS_K1;
          static SatelliteType *GLONASS_K2;
          static SatelliteType *GLONASS_M;
          static SatelliteType *IRNSS_1GEO;
          static SatelliteType *IRNSS_1IGSO;
          static SatelliteType *QZSS;
          static SatelliteType *QZSS_2A;
          static SatelliteType *QZSS_2G;
          static SatelliteType *QZSS_2I;

          ::org::orekit::gnss::attitude::GNSSAttitudeProvider buildAttitudeProvider(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, const ::org::orekit::frames::Frame &, jint) const;
          ::java::lang::String getName() const;
          static SatelliteType parseSatelliteType(const ::java::lang::String &);
          static SatelliteType valueOf(const ::java::lang::String &);
          static JArray< SatelliteType > values();
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
        extern PyType_Def PY_TYPE_DEF(SatelliteType);
        extern PyTypeObject *PY_TYPE(SatelliteType);

        class t_SatelliteType {
        public:
          PyObject_HEAD
          SatelliteType object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SatelliteType *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SatelliteType&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SatelliteType&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
