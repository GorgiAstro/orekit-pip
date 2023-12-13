#ifndef org_orekit_files_ilrs_ILRSHeader_H
#define org_orekit_files_ilrs_ILRSHeader_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class DateComponents;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_getEndEpoch_c325492395d89b24,
            mid_getFormat_1c1fa1e935d6cdcf,
            mid_getIlrsSatelliteId_1c1fa1e935d6cdcf,
            mid_getName_1c1fa1e935d6cdcf,
            mid_getNoradId_1c1fa1e935d6cdcf,
            mid_getProductionEpoch_357436921b6db81c,
            mid_getProductionHour_55546ef6a647f39b,
            mid_getSequenceNumber_55546ef6a647f39b,
            mid_getSic_1c1fa1e935d6cdcf,
            mid_getStartEpoch_c325492395d89b24,
            mid_getTargetClass_55546ef6a647f39b,
            mid_getTargetLocation_55546ef6a647f39b,
            mid_getVersion_55546ef6a647f39b,
            mid_setEndEpoch_02135a6ef25adb4b,
            mid_setFormat_734b91ac30d5f9b4,
            mid_setIlrsSatelliteId_734b91ac30d5f9b4,
            mid_setName_734b91ac30d5f9b4,
            mid_setNoradId_734b91ac30d5f9b4,
            mid_setProductionEpoch_a97e9138404c69cd,
            mid_setProductionHour_44ed599e93e8a30c,
            mid_setSequenceNumber_44ed599e93e8a30c,
            mid_setSic_734b91ac30d5f9b4,
            mid_setStartEpoch_02135a6ef25adb4b,
            mid_setTargetClass_44ed599e93e8a30c,
            mid_setTargetLocation_44ed599e93e8a30c,
            mid_setVersion_44ed599e93e8a30c,
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
