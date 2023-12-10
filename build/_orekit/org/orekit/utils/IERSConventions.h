#ifndef org_orekit_utils_IERSConventions_H
#define org_orekit_utils_IERSConventions_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace frames {
      class EOPHistory;
    }
    namespace utils {
      class IERSConventions;
      class LoveNumbers;
      class IERSConventions$NutationCorrectionConverter;
    }
    namespace data {
      class PoissonSeries$CompiledSeries;
      class FundamentalNutationArguments;
    }
    namespace time {
      class TimeScales;
      class TimeScalarFunction;
      class AbsoluteDate;
      class FieldAbsoluteDate;
      class TimeVectorFunction;
      class TimeScale;
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
    namespace utils {

      class IERSConventions : public ::java::lang::Enum {
       public:
        enum {
          mid_evaluateTC_bf1d7732f1acb697,
          mid_evaluateTC_2a5f05be83ff251d,
          mid_evaluateTC_77a84556e854cabe,
          mid_evaluateTC_202c67cceb997c33,
          mid_getEOPTidalCorrection_2029114ac725bb80,
          mid_getEOPTidalCorrection_388ffaf18cf259ad,
          mid_getEarthOrientationAngleFunction_4f84269f5949ae74,
          mid_getEarthOrientationAngleFunction_49033c7bb7135703,
          mid_getGASTFunction_0f1253b45c45601c,
          mid_getGASTFunction_01618c29039035a5,
          mid_getGMSTFunction_4f84269f5949ae74,
          mid_getGMSTFunction_4026e3bd370d7174,
          mid_getGMSTRateFunction_4f84269f5949ae74,
          mid_getGMSTRateFunction_4026e3bd370d7174,
          mid_getLoveNumbers_07dbee69df37c1f2,
          mid_getMeanObliquityFunction_e5e32d8601923166,
          mid_getMeanObliquityFunction_6070dbe839741045,
          mid_getNominalTidalDisplacement_60c7040667a7dc5c,
          mid_getNutationArguments_8dda5d7b821bcb03,
          mid_getNutationArguments_bf8e13b455a844df,
          mid_getNutationCorrectionConverter_0c47cb966ded8a1b,
          mid_getNutationCorrectionConverter_90ad6aea41ec9c7a,
          mid_getNutationFunction_2029114ac725bb80,
          mid_getNutationFunction_388ffaf18cf259ad,
          mid_getNutationReferenceEpoch_85703d13e302437e,
          mid_getNutationReferenceEpoch_d8a78748e466a958,
          mid_getOceanPoleTide_51b2cbed57d6565b,
          mid_getPermanentTide_dff5885c2c873297,
          mid_getPrecessionFunction_2029114ac725bb80,
          mid_getPrecessionFunction_388ffaf18cf259ad,
          mid_getSolidPoleTide_51b2cbed57d6565b,
          mid_getTidalDisplacementFrequencyCorrectionDiurnal_750c1a26cb878eba,
          mid_getTidalDisplacementFrequencyCorrectionZonal_750c1a26cb878eba,
          mid_getTideFrequencyDependenceFunction_894febc40533d83e,
          mid_getTideFrequencyDependenceFunction_a641939742e1d64f,
          mid_getXYSpXY2Function_2029114ac725bb80,
          mid_getXYSpXY2Function_388ffaf18cf259ad,
          mid_valueOf_9198903a32309f8c,
          mid_values_02521f9540354471,
          mid_getNutationArguments_9f8d6c56795a04cd,
          mid_getTidalDisplacementFrequencyCorrectionDiurnal_198e36ee8b14f9cf,
          mid_getTidalDisplacementFrequencyCorrectionZonal_198e36ee8b14f9cf,
          mid_loadLoveNumbers_7f265c46e8c28dcf,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit IERSConventions(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        IERSConventions(const IERSConventions& obj) : ::java::lang::Enum(obj) {}

        static IERSConventions *IERS_1996;
        static IERSConventions *IERS_2003;
        static IERSConventions *IERS_2010;

        jdouble evaluateTC(const ::org::orekit::time::AbsoluteDate &) const;
        ::org::hipparchus::CalculusFieldElement evaluateTC(const ::org::orekit::time::FieldAbsoluteDate &) const;
        jdouble evaluateTC(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::TimeScales &) const;
        ::org::hipparchus::CalculusFieldElement evaluateTC(const ::org::orekit::time::FieldAbsoluteDate &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getEOPTidalCorrection() const;
        ::org::orekit::time::TimeVectorFunction getEOPTidalCorrection(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeScalarFunction getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeScalarFunction getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeScalarFunction getGASTFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::frames::EOPHistory &) const;
        ::org::orekit::time::TimeScalarFunction getGASTFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::frames::EOPHistory &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeScalarFunction getGMSTFunction(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeScalarFunction getGMSTFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeScalarFunction getGMSTRateFunction(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeScalarFunction getGMSTRateFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::utils::LoveNumbers getLoveNumbers() const;
        ::org::orekit::time::TimeScalarFunction getMeanObliquityFunction() const;
        ::org::orekit::time::TimeScalarFunction getMeanObliquityFunction(const ::org::orekit::time::TimeScales &) const;
        JArray< jdouble > getNominalTidalDisplacement() const;
        ::org::orekit::data::FundamentalNutationArguments getNutationArguments(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::data::FundamentalNutationArguments getNutationArguments(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter getNutationCorrectionConverter() const;
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter getNutationCorrectionConverter(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getNutationFunction() const;
        ::org::orekit::time::TimeVectorFunction getNutationFunction(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::AbsoluteDate getNutationReferenceEpoch() const;
        ::org::orekit::time::AbsoluteDate getNutationReferenceEpoch(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getOceanPoleTide(const ::org::orekit::frames::EOPHistory &) const;
        jdouble getPermanentTide() const;
        ::org::orekit::time::TimeVectorFunction getPrecessionFunction() const;
        ::org::orekit::time::TimeVectorFunction getPrecessionFunction(const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getSolidPoleTide(const ::org::orekit::frames::EOPHistory &) const;
        ::org::orekit::data::PoissonSeries$CompiledSeries getTidalDisplacementFrequencyCorrectionDiurnal() const;
        ::org::orekit::data::PoissonSeries$CompiledSeries getTidalDisplacementFrequencyCorrectionZonal() const;
        ::org::orekit::time::TimeVectorFunction getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::time::TimeVectorFunction getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale &, const ::org::orekit::time::TimeScales &) const;
        ::org::orekit::time::TimeVectorFunction getXYSpXY2Function() const;
        ::org::orekit::time::TimeVectorFunction getXYSpXY2Function(const ::org::orekit::time::TimeScales &) const;
        static IERSConventions valueOf(const ::java::lang::String &);
        static JArray< IERSConventions > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace utils {
      extern PyType_Def PY_TYPE_DEF(IERSConventions);
      extern PyTypeObject *PY_TYPE(IERSConventions);

      class t_IERSConventions {
      public:
        PyObject_HEAD
        IERSConventions object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_IERSConventions *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const IERSConventions&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const IERSConventions&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
