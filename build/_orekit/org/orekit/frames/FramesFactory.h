#ifndef org_orekit_frames_FramesFactory_H
#define org_orekit_frames_FramesFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EOPHistory;
      class LazyLoadedFrames;
      class FactoryManagedFrame;
      class Frame;
      class FieldTransform;
      class ITRFVersion;
      class Transform;
      class VersionedITRF;
      class Predefined;
      class EopHistoryLoader;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class UTCScale;
      class AbsoluteDate;
      class FieldAbsoluteDate;
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
    namespace frames {

      class FramesFactory : public ::java::lang::Object {
       public:
        enum {
          mid_addDefaultEOP1980HistoryLoaders_0be9bb25c5e386d0,
          mid_addDefaultEOP2000HistoryLoaders_0be9bb25c5e386d0,
          mid_addEOPHistoryLoader_0f554c95baa6eac9,
          mid_buildUncachedITRF_d6e2d1c3671a12eb,
          mid_clearEOPHistoryLoaders_0fa09c18fee449d5,
          mid_findEOP_2ac0748dcab95ef1,
          mid_getCIRF_0567c110431f823b,
          mid_getEME2000_5337b4e40b3fd7b7,
          mid_getEOPHistory_f7b9f8d7c24d861d,
          mid_getEcliptic_18c303577f427d2c,
          mid_getFrame_a045cc44324e9b37,
          mid_getFrames_ac56fa33f5ed59f4,
          mid_getGCRF_b86f9f61d97a7244,
          mid_getGTOD_af0cfaf732e2f76f,
          mid_getGTOD_0567c110431f823b,
          mid_getICRF_b86f9f61d97a7244,
          mid_getITRF_0567c110431f823b,
          mid_getITRF_ebe8ec05e13e16d0,
          mid_getITRFEquinox_0567c110431f823b,
          mid_getMOD_ab9f051c99cfdab5,
          mid_getMOD_af0cfaf732e2f76f,
          mid_getNonInterpolatingTransform_2508937098750551,
          mid_getNonInterpolatingTransform_a17e30870e142ded,
          mid_getPZ9011_0567c110431f823b,
          mid_getTEME_5337b4e40b3fd7b7,
          mid_getTIRF_ab9f051c99cfdab5,
          mid_getTIRF_0567c110431f823b,
          mid_getTOD_af0cfaf732e2f76f,
          mid_getTOD_0567c110431f823b,
          mid_getVeis1950_5337b4e40b3fd7b7,
          mid_setEOPContinuityThreshold_17db3a65980d3441,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FramesFactory(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FramesFactory(const FramesFactory& obj) : ::java::lang::Object(obj) {}

        static ::java::lang::String *BULLETINA_FILENAME;
        static ::java::lang::String *BULLETINB_1980_FILENAME;
        static ::java::lang::String *BULLETINB_2000_FILENAME;
        static ::java::lang::String *CSV_FILENAME;
        static ::java::lang::String *EOPC04_1980_FILENAME;
        static ::java::lang::String *EOPC04_2000_FILENAME;
        static ::java::lang::String *RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME;
        static ::java::lang::String *RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME;
        static ::java::lang::String *XML_1980_FILENAME;
        static ::java::lang::String *XML_2000_FILENAME;

        static void addDefaultEOP1980HistoryLoaders(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
        static void addDefaultEOP2000HistoryLoaders(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
        static void addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions &, const ::org::orekit::frames::EopHistoryLoader &);
        static ::org::orekit::frames::Frame buildUncachedITRF(const ::org::orekit::frames::EOPHistory &, const ::org::orekit::time::UTCScale &);
        static void clearEOPHistoryLoaders();
        static ::org::orekit::frames::EOPHistory findEOP(const ::org::orekit::frames::Frame &);
        static ::org::orekit::frames::FactoryManagedFrame getCIRF(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getEME2000();
        static ::org::orekit::frames::EOPHistory getEOPHistory(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::Frame getEcliptic(const ::org::orekit::utils::IERSConventions &);
        static ::org::orekit::frames::Frame getFrame(const ::org::orekit::frames::Predefined &);
        static ::org::orekit::frames::LazyLoadedFrames getFrames();
        static ::org::orekit::frames::Frame getGCRF();
        static ::org::orekit::frames::FactoryManagedFrame getGTOD(jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getGTOD(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::Frame getICRF();
        static ::org::orekit::frames::FactoryManagedFrame getITRF(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::VersionedITRF getITRF(const ::org::orekit::frames::ITRFVersion &, const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getITRFEquinox(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getMOD(const ::org::orekit::utils::IERSConventions &);
        static ::org::orekit::frames::FactoryManagedFrame getMOD(jboolean);
        static ::org::orekit::frames::Transform getNonInterpolatingTransform(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::AbsoluteDate &);
        static ::org::orekit::frames::FieldTransform getNonInterpolatingTransform(const ::org::orekit::frames::Frame &, const ::org::orekit::frames::Frame &, const ::org::orekit::time::FieldAbsoluteDate &);
        static ::org::orekit::frames::FactoryManagedFrame getPZ9011(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getTEME();
        static ::org::orekit::frames::FactoryManagedFrame getTIRF(const ::org::orekit::utils::IERSConventions &);
        static ::org::orekit::frames::FactoryManagedFrame getTIRF(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getTOD(jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getTOD(const ::org::orekit::utils::IERSConventions &, jboolean);
        static ::org::orekit::frames::FactoryManagedFrame getVeis1950();
        static void setEOPContinuityThreshold(jdouble);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(FramesFactory);
      extern PyTypeObject *PY_TYPE(FramesFactory);

      class t_FramesFactory {
      public:
        PyObject_HEAD
        FramesFactory object;
        static PyObject *wrap_Object(const FramesFactory&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
