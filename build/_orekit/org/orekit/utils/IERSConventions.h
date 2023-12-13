#ifndef org_orekit_utils_IERSConventions_H
#define org_orekit_utils_IERSConventions_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace data {
      class FundamentalNutationArguments;
      class PoissonSeries$CompiledSeries;
    }
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
      class IERSConventions;
      class LoveNumbers;
    }
    namespace time {
      class TimeScalarFunction;
      class FieldAbsoluteDate;
      class TimeVectorFunction;
      class AbsoluteDate;
      class TimeScales;
      class TimeScale;
    }
    namespace frames {
      class EOPHistory;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
          mid_evaluateTC_fd347811007a6ba3,
          mid_evaluateTC_140b8964300ddedf,
          mid_evaluateTC_9a538b1a5d936574,
          mid_evaluateTC_8473c21b3708b391,
          mid_getEOPTidalCorrection_993e7a7f8f920b31,
          mid_getEOPTidalCorrection_3e31b1559a5d91ec,
          mid_getEarthOrientationAngleFunction_a76c7be685887fb8,
          mid_getEarthOrientationAngleFunction_d9ed9b7123329872,
          mid_getGASTFunction_17ca7688163ef7c3,
          mid_getGASTFunction_3d623f236f132123,
          mid_getGMSTFunction_a76c7be685887fb8,
          mid_getGMSTFunction_a0ca30a02329eec8,
          mid_getGMSTRateFunction_a76c7be685887fb8,
          mid_getGMSTRateFunction_a0ca30a02329eec8,
          mid_getLoveNumbers_51bbf924b608ef18,
          mid_getMeanObliquityFunction_42b94f9e14367556,
          mid_getMeanObliquityFunction_38ee1f0602177ed7,
          mid_getNominalTidalDisplacement_25e1757a36c4dde2,
          mid_getNutationArguments_844055074f7695cf,
          mid_getNutationArguments_419496b5ab61e079,
          mid_getNutationCorrectionConverter_4136999951aaddfb,
          mid_getNutationCorrectionConverter_d87614d91798fcb7,
          mid_getNutationFunction_993e7a7f8f920b31,
          mid_getNutationFunction_3e31b1559a5d91ec,
          mid_getNutationReferenceEpoch_c325492395d89b24,
          mid_getNutationReferenceEpoch_2f879ddf888ebd4c,
          mid_getOceanPoleTide_d454e789d89ec43b,
          mid_getPermanentTide_b74f83833fdad017,
          mid_getPrecessionFunction_993e7a7f8f920b31,
          mid_getPrecessionFunction_3e31b1559a5d91ec,
          mid_getSolidPoleTide_d454e789d89ec43b,
          mid_getTidalDisplacementFrequencyCorrectionDiurnal_4f5f606b4ceffcb8,
          mid_getTidalDisplacementFrequencyCorrectionZonal_4f5f606b4ceffcb8,
          mid_getTideFrequencyDependenceFunction_7caeaa26ef9e4fd2,
          mid_getTideFrequencyDependenceFunction_5d077ebb089cff43,
          mid_getXYSpXY2Function_993e7a7f8f920b31,
          mid_getXYSpXY2Function_3e31b1559a5d91ec,
          mid_valueOf_46305f8407d09490,
          mid_values_8edcfc2cf2fdd3bc,
          mid_getNutationArguments_cd1b6f5dfaf0692e,
          mid_getTidalDisplacementFrequencyCorrectionDiurnal_225b6ff6660e5c1b,
          mid_getTidalDisplacementFrequencyCorrectionZonal_225b6ff6660e5c1b,
          mid_loadLoveNumbers_d0c912d8f74c3d61,
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
