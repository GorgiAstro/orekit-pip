#ifndef org_orekit_files_ilrs_ILRSHeader_H
#define org_orekit_files_ilrs_ILRSHeader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class DateComponents;
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class ILRSHeader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_getEndEpoch_85703d13e302437e,
            mid_getFormat_11b109bd155ca898,
            mid_getIlrsSatelliteId_11b109bd155ca898,
            mid_getName_11b109bd155ca898,
            mid_getNoradId_11b109bd155ca898,
            mid_getProductionEpoch_06e6477664d37caa,
            mid_getProductionHour_570ce0828f81a2c1,
            mid_getSequenceNumber_570ce0828f81a2c1,
            mid_getSic_11b109bd155ca898,
            mid_getStartEpoch_85703d13e302437e,
            mid_getTargetClass_570ce0828f81a2c1,
            mid_getTargetLocation_570ce0828f81a2c1,
            mid_getVersion_570ce0828f81a2c1,
            mid_setEndEpoch_600a2a61652bc473,
            mid_setFormat_d0bc48d5b00dc40c,
            mid_setIlrsSatelliteId_d0bc48d5b00dc40c,
            mid_setName_d0bc48d5b00dc40c,
            mid_setNoradId_d0bc48d5b00dc40c,
            mid_setProductionEpoch_56dc33c3871b1cb7,
            mid_setProductionHour_99803b0791f320ff,
            mid_setSequenceNumber_99803b0791f320ff,
            mid_setSic_d0bc48d5b00dc40c,
            mid_setStartEpoch_600a2a61652bc473,
            mid_setTargetClass_99803b0791f320ff,
            mid_setTargetLocation_99803b0791f320ff,
            mid_setVersion_99803b0791f320ff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ILRSHeader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ILRSHeader(const ILRSHeader& obj) : ::java::lang::Object(obj) {}

          ILRSHeader();

          ::org::orekit::time::AbsoluteDate getEndEpoch() const;
          ::java::lang::String getFormat() const;
          ::java::lang::String getIlrsSatelliteId() const;
          ::java::lang::String getName() const;
          ::java::lang::String getNoradId() const;
          ::org::orekit::time::DateComponents getProductionEpoch() const;
          jint getProductionHour() const;
          jint getSequenceNumber() const;
          ::java::lang::String getSic() const;
          ::org::orekit::time::AbsoluteDate getStartEpoch() const;
          jint getTargetClass() const;
          jint getTargetLocation() const;
          jint getVersion() const;
          void setEndEpoch(const ::org::orekit::time::AbsoluteDate &) const;
          void setFormat(const ::java::lang::String &) const;
          void setIlrsSatelliteId(const ::java::lang::String &) const;
          void setName(const ::java::lang::String &) const;
          void setNoradId(const ::java::lang::String &) const;
          void setProductionEpoch(const ::org::orekit::time::DateComponents &) const;
          void setProductionHour(jint) const;
          void setSequenceNumber(jint) const;
          void setSic(const ::java::lang::String &) const;
          void setStartEpoch(const ::org::orekit::time::AbsoluteDate &) const;
          void setTargetClass(jint) const;
          void setTargetLocation(jint) const;
          void setVersion(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(ILRSHeader);
        extern PyTypeObject *PY_TYPE(ILRSHeader);

        class t_ILRSHeader {
        public:
          PyObject_HEAD
          ILRSHeader object;
          static PyObject *wrap_Object(const ILRSHeader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
