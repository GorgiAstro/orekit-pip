#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *MelbourneWubbenaCombination::class$ = NULL;
          jmethodID *MelbourneWubbenaCombination::mids$ = NULL;
          bool MelbourneWubbenaCombination::live$ = false;

          jclass MelbourneWubbenaCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_d8c8276403544c3f] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet MelbourneWubbenaCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_d8c8276403544c3f], a0.this$));
          }

          ::java::lang::String MelbourneWubbenaCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_MelbourneWubbenaCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MelbourneWubbenaCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MelbourneWubbenaCombination_combine(t_MelbourneWubbenaCombination *self, PyObject *arg);
          static PyObject *t_MelbourneWubbenaCombination_getName(t_MelbourneWubbenaCombination *self);
          static PyObject *t_MelbourneWubbenaCombination_get__name(t_MelbourneWubbenaCombination *self, void *data);
          static PyGetSetDef t_MelbourneWubbenaCombination__fields_[] = {
            DECLARE_GET_FIELD(t_MelbourneWubbenaCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MelbourneWubbenaCombination__methods_[] = {
            DECLARE_METHOD(t_MelbourneWubbenaCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MelbourneWubbenaCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MelbourneWubbenaCombination, combine, METH_O),
            DECLARE_METHOD(t_MelbourneWubbenaCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MelbourneWubbenaCombination)[] = {
            { Py_tp_methods, t_MelbourneWubbenaCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MelbourneWubbenaCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MelbourneWubbenaCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MelbourneWubbenaCombination, t_MelbourneWubbenaCombination, MelbourneWubbenaCombination);

          void t_MelbourneWubbenaCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(MelbourneWubbenaCombination), &PY_TYPE_DEF(MelbourneWubbenaCombination), module, "MelbourneWubbenaCombination", 0);
          }

          void t_MelbourneWubbenaCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MelbourneWubbenaCombination), "class_", make_descriptor(MelbourneWubbenaCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MelbourneWubbenaCombination), "wrapfn_", make_descriptor(t_MelbourneWubbenaCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MelbourneWubbenaCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MelbourneWubbenaCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MelbourneWubbenaCombination::initializeClass, 1)))
              return NULL;
            return t_MelbourneWubbenaCombination::wrap_Object(MelbourneWubbenaCombination(((t_MelbourneWubbenaCombination *) arg)->object.this$));
          }
          static PyObject *t_MelbourneWubbenaCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MelbourneWubbenaCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MelbourneWubbenaCombination_combine(t_MelbourneWubbenaCombination *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combine(a0));
              return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combine", arg);
            return NULL;
          }

          static PyObject *t_MelbourneWubbenaCombination_getName(t_MelbourneWubbenaCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MelbourneWubbenaCombination_get__name(t_MelbourneWubbenaCombination *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeVectorFunction::class$ = NULL;
      jmethodID *TimeVectorFunction::mids$ = NULL;
      bool TimeVectorFunction::live$ = false;

      jclass TimeVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_e586dea4c0bad69b] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_value_263b2fd0cf81fe4d] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > TimeVectorFunction::value(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_e586dea4c0bad69b], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > TimeVectorFunction::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_263b2fd0cf81fe4d], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeVectorFunction_value(t_TimeVectorFunction *self, PyObject *args);

      static PyMethodDef t_TimeVectorFunction__methods_[] = {
        DECLARE_METHOD(t_TimeVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeVectorFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeVectorFunction)[] = {
        { Py_tp_methods, t_TimeVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeVectorFunction, t_TimeVectorFunction, TimeVectorFunction);

      void t_TimeVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeVectorFunction), &PY_TYPE_DEF(TimeVectorFunction), module, "TimeVectorFunction", 0);
      }

      void t_TimeVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeVectorFunction), "class_", make_descriptor(TimeVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeVectorFunction), "wrapfn_", make_descriptor(t_TimeVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeVectorFunction::initializeClass, 1)))
          return NULL;
        return t_TimeVectorFunction::wrap_Object(TimeVectorFunction(((t_TimeVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_TimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeVectorFunction_value(t_TimeVectorFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile.h"
#include "java/util/Map.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile::live$ = false;

        jclass OrekitAttitudeEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatellite_4e53322f52133f1e] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)Lorg/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris;");
            mids$[mid_getSatellites_d6753b7055940a54] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile::OrekitAttitudeEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris OrekitAttitudeEphemerisFile::addSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(env->callObjectMethod(this$, mids$[mid_addSatellite_4e53322f52133f1e], a0.this$));
        }

        ::java::util::Map OrekitAttitudeEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_d6753b7055940a54]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_OrekitAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile_init_(t_OrekitAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile_addSatellite(t_OrekitAttitudeEphemerisFile *self, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile_getSatellites(t_OrekitAttitudeEphemerisFile *self);
        static PyObject *t_OrekitAttitudeEphemerisFile_get__satellites(t_OrekitAttitudeEphemerisFile *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, addSatellite, METH_O),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile, t_OrekitAttitudeEphemerisFile, OrekitAttitudeEphemerisFile);

        void t_OrekitAttitudeEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile), module, "OrekitAttitudeEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "OrekitAttitudeEphemerisSegment", make_descriptor(&PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "OrekitSatelliteAttitudeEphemeris", make_descriptor(&PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)));
        }

        void t_OrekitAttitudeEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "class_", make_descriptor(OrekitAttitudeEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile::wrap_Object(OrekitAttitudeEphemerisFile(((t_OrekitAttitudeEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile_init_(t_OrekitAttitudeEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          OrekitAttitudeEphemerisFile object((jobject) NULL);

          INT_CALL(object = OrekitAttitudeEphemerisFile());
          self->object = object;

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_addSatellite(t_OrekitAttitudeEphemerisFile *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.addSatellite(a0));
            return ::org::orekit::files::general::t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
          return NULL;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_getSatellites(t_OrekitAttitudeEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::general::PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile_get__satellites(t_OrekitAttitudeEphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/CombinatoricsUtils.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CombinatoricsUtils::class$ = NULL;
      jmethodID *CombinatoricsUtils::mids$ = NULL;
      bool CombinatoricsUtils::live$ = false;
      jint CombinatoricsUtils::MAX_BELL = (jint) 0;

      jclass CombinatoricsUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CombinatoricsUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_bellNumber_3f523e51b2989e1f] = env->getStaticMethodID(cls, "bellNumber", "(I)J");
          mids$[mid_binomialCoefficient_c8198fb6cafc4f66] = env->getStaticMethodID(cls, "binomialCoefficient", "(II)J");
          mids$[mid_binomialCoefficientDouble_a84e4ee1da3f1ab8] = env->getStaticMethodID(cls, "binomialCoefficientDouble", "(II)D");
          mids$[mid_binomialCoefficientLog_a84e4ee1da3f1ab8] = env->getStaticMethodID(cls, "binomialCoefficientLog", "(II)D");
          mids$[mid_checkBinomial_8dbc1129a3c2557a] = env->getStaticMethodID(cls, "checkBinomial", "(II)V");
          mids$[mid_combinationsIterator_3ea7f5e4233fdf2d] = env->getStaticMethodID(cls, "combinationsIterator", "(II)Ljava/util/Iterator;");
          mids$[mid_factorial_3f523e51b2989e1f] = env->getStaticMethodID(cls, "factorial", "(I)J");
          mids$[mid_factorialDouble_b772323fc98b7293] = env->getStaticMethodID(cls, "factorialDouble", "(I)D");
          mids$[mid_factorialLog_b772323fc98b7293] = env->getStaticMethodID(cls, "factorialLog", "(I)D");
          mids$[mid_partitions_3399c247d1137cbd] = env->getStaticMethodID(cls, "partitions", "(Ljava/util/List;)Ljava/util/stream/Stream;");
          mids$[mid_permutations_3399c247d1137cbd] = env->getStaticMethodID(cls, "permutations", "(Ljava/util/List;)Ljava/util/stream/Stream;");
          mids$[mid_stirlingS2_c8198fb6cafc4f66] = env->getStaticMethodID(cls, "stirlingS2", "(II)J");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MAX_BELL = env->getStaticIntField(cls, "MAX_BELL");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jlong CombinatoricsUtils::bellNumber(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_bellNumber_3f523e51b2989e1f], a0);
      }

      jlong CombinatoricsUtils::binomialCoefficient(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_binomialCoefficient_c8198fb6cafc4f66], a0, a1);
      }

      jdouble CombinatoricsUtils::binomialCoefficientDouble(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_binomialCoefficientDouble_a84e4ee1da3f1ab8], a0, a1);
      }

      jdouble CombinatoricsUtils::binomialCoefficientLog(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_binomialCoefficientLog_a84e4ee1da3f1ab8], a0, a1);
      }

      void CombinatoricsUtils::checkBinomial(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkBinomial_8dbc1129a3c2557a], a0, a1);
      }

      ::java::util::Iterator CombinatoricsUtils::combinationsIterator(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::Iterator(env->callStaticObjectMethod(cls, mids$[mid_combinationsIterator_3ea7f5e4233fdf2d], a0, a1));
      }

      jlong CombinatoricsUtils::factorial(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_factorial_3f523e51b2989e1f], a0);
      }

      jdouble CombinatoricsUtils::factorialDouble(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_factorialDouble_b772323fc98b7293], a0);
      }

      jdouble CombinatoricsUtils::factorialLog(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_factorialLog_b772323fc98b7293], a0);
      }

      ::java::util::stream::Stream CombinatoricsUtils::partitions(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_partitions_3399c247d1137cbd], a0.this$));
      }

      ::java::util::stream::Stream CombinatoricsUtils::permutations(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_permutations_3399c247d1137cbd], a0.this$));
      }

      jlong CombinatoricsUtils::stirlingS2(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_stirlingS2_c8198fb6cafc4f66], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_CombinatoricsUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_bellNumber(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_binomialCoefficient(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_binomialCoefficientDouble(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_binomialCoefficientLog(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_checkBinomial(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_combinationsIterator(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_factorial(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_factorialDouble(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_factorialLog(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_partitions(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_permutations(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_stirlingS2(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_CombinatoricsUtils__methods_[] = {
        DECLARE_METHOD(t_CombinatoricsUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, bellNumber, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficient, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficientDouble, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficientLog, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, checkBinomial, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, combinationsIterator, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorial, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorialDouble, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorialLog, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, partitions, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, permutations, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, stirlingS2, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CombinatoricsUtils)[] = {
        { Py_tp_methods, t_CombinatoricsUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CombinatoricsUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CombinatoricsUtils, t_CombinatoricsUtils, CombinatoricsUtils);

      void t_CombinatoricsUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(CombinatoricsUtils), &PY_TYPE_DEF(CombinatoricsUtils), module, "CombinatoricsUtils", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "FactorialLog", make_descriptor(&PY_TYPE_DEF(CombinatoricsUtils$FactorialLog)));
      }

      void t_CombinatoricsUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "class_", make_descriptor(CombinatoricsUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "wrapfn_", make_descriptor(t_CombinatoricsUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(CombinatoricsUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "MAX_BELL", make_descriptor(CombinatoricsUtils::MAX_BELL));
      }

      static PyObject *t_CombinatoricsUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CombinatoricsUtils::initializeClass, 1)))
          return NULL;
        return t_CombinatoricsUtils::wrap_Object(CombinatoricsUtils(((t_CombinatoricsUtils *) arg)->object.this$));
      }
      static PyObject *t_CombinatoricsUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CombinatoricsUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CombinatoricsUtils_bellNumber(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jlong result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::bellNumber(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "bellNumber", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficient(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficient(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficient", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficientDouble(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficientDouble(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficientDouble", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficientLog(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficientLog(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficientLog", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_checkBinomial(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::CombinatoricsUtils::checkBinomial(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkBinomial", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_combinationsIterator(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        ::java::util::Iterator result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::combinationsIterator(a0, a1));
          return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
        }

        PyErr_SetArgsError(type, "combinationsIterator", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorial(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jlong result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorial(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "factorial", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorialDouble(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorialDouble(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "factorialDouble", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorialLog(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorialLog(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "factorialLog", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_partitions(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::partitions(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "partitions", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_permutations(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::permutations(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "permutations", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_stirlingS2(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::stirlingS2(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "stirlingS2", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeRateIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *RangeRateIonosphericDelayModifier::mids$ = NULL;
          bool RangeRateIonosphericDelayModifier::live$ = false;

          jclass RangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_284d4a3af96a95d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;DZ)V");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_rangeRateErrorIonosphericModel_452a588415b00924] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeRateErrorIonosphericModel_79833a4daf329f8b] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeRateIonosphericDelayModifier::RangeRateIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1, jboolean a2) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_284d4a3af96a95d2, a0.this$, a1, a2)) {}

          void RangeRateIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void RangeRateIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_RangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RangeRateIonosphericDelayModifier_init_(t_RangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeRateIonosphericDelayModifier_modify(t_RangeRateIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_RangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeRateIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_RangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_RangeRateIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_RangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_RangeRateIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(RangeRateIonosphericDelayModifier, t_RangeRateIonosphericDelayModifier, RangeRateIonosphericDelayModifier);

          void t_RangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeRateIonosphericDelayModifier), &PY_TYPE_DEF(RangeRateIonosphericDelayModifier), module, "RangeRateIonosphericDelayModifier", 0);
          }

          void t_RangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "class_", make_descriptor(RangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_RangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_RangeRateIonosphericDelayModifier::wrap_Object(RangeRateIonosphericDelayModifier(((t_RangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_RangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RangeRateIonosphericDelayModifier_init_(t_RangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            RangeRateIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = RangeRateIonosphericDelayModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeRateIonosphericDelayModifier_modify(t_RangeRateIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_RangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_RangeRateIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEStepEndHandler::class$ = NULL;
        jmethodID *ODEStepEndHandler::mids$ = NULL;
        bool ODEStepEndHandler::live$ = false;

        jclass ODEStepEndHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEStepEndHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init_85808f3d6374b436] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_resetState_52892c12768be639] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ODEState;");
            mids$[mid_stepEndOccurred_b31cfb323299b4ae] = env->getMethodID(cls, "stepEndOccurred", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Z)Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEStepEndHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_85808f3d6374b436], a0.this$, a1);
        }

        ::org::hipparchus::ode::ODEState ODEStepEndHandler::resetState(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_resetState_52892c12768be639], a0.this$));
        }

        ::org::hipparchus::ode::events::Action ODEStepEndHandler::stepEndOccurred(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jboolean a1) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_stepEndOccurred_b31cfb323299b4ae], a0.this$, a1));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_ODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_init(t_ODEStepEndHandler *self, PyObject *args);
        static PyObject *t_ODEStepEndHandler_resetState(t_ODEStepEndHandler *self, PyObject *arg);
        static PyObject *t_ODEStepEndHandler_stepEndOccurred(t_ODEStepEndHandler *self, PyObject *args);

        static PyMethodDef t_ODEStepEndHandler__methods_[] = {
          DECLARE_METHOD(t_ODEStepEndHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepEndHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepEndHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_ODEStepEndHandler, resetState, METH_O),
          DECLARE_METHOD(t_ODEStepEndHandler, stepEndOccurred, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStepEndHandler)[] = {
          { Py_tp_methods, t_ODEStepEndHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStepEndHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEStepEndHandler, t_ODEStepEndHandler, ODEStepEndHandler);

        void t_ODEStepEndHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStepEndHandler), &PY_TYPE_DEF(ODEStepEndHandler), module, "ODEStepEndHandler", 0);
        }

        void t_ODEStepEndHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "class_", make_descriptor(ODEStepEndHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "wrapfn_", make_descriptor(t_ODEStepEndHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepEndHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStepEndHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStepEndHandler::initializeClass, 1)))
            return NULL;
          return t_ODEStepEndHandler::wrap_Object(ODEStepEndHandler(((t_ODEStepEndHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEStepEndHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStepEndHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStepEndHandler_init(t_ODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_ODEStepEndHandler_resetState(t_ODEStepEndHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.resetState(a0));
            return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", arg);
          return NULL;
        }

        static PyObject *t_ODEStepEndHandler_stepEndOccurred(t_ODEStepEndHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jboolean a1;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "kZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.stepEndOccurred(a0, a1));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "stepEndOccurred", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LevenbergMarquardtOptimizer::class$ = NULL;
            jmethodID *LevenbergMarquardtOptimizer::mids$ = NULL;
            bool LevenbergMarquardtOptimizer::live$ = false;

            jclass LevenbergMarquardtOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_1dc1968396ae9d11] = env->getMethodID(cls, "<init>", "(DDDDD)V");
                mids$[mid_getCostRelativeTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getCostRelativeTolerance", "()D");
                mids$[mid_getInitialStepBoundFactor_456d9a2f64d6b28d] = env->getMethodID(cls, "getInitialStepBoundFactor", "()D");
                mids$[mid_getOrthoTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getOrthoTolerance", "()D");
                mids$[mid_getParameterRelativeTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getParameterRelativeTolerance", "()D");
                mids$[mid_getRankingThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getRankingThreshold", "()D");
                mids$[mid_optimize_15b17ff9a423a2d3] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_withCostRelativeTolerance_773a169573cd7fc8] = env->getMethodID(cls, "withCostRelativeTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withInitialStepBoundFactor_773a169573cd7fc8] = env->getMethodID(cls, "withInitialStepBoundFactor", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withOrthoTolerance_773a169573cd7fc8] = env->getMethodID(cls, "withOrthoTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withParameterRelativeTolerance_773a169573cd7fc8] = env->getMethodID(cls, "withParameterRelativeTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withRankingThreshold_773a169573cd7fc8] = env->getMethodID(cls, "withRankingThreshold", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LevenbergMarquardtOptimizer::LevenbergMarquardtOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            LevenbergMarquardtOptimizer::LevenbergMarquardtOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1dc1968396ae9d11, a0, a1, a2, a3, a4)) {}

            jdouble LevenbergMarquardtOptimizer::getCostRelativeTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCostRelativeTolerance_456d9a2f64d6b28d]);
            }

            jdouble LevenbergMarquardtOptimizer::getInitialStepBoundFactor() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInitialStepBoundFactor_456d9a2f64d6b28d]);
            }

            jdouble LevenbergMarquardtOptimizer::getOrthoTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOrthoTolerance_456d9a2f64d6b28d]);
            }

            jdouble LevenbergMarquardtOptimizer::getParameterRelativeTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getParameterRelativeTolerance_456d9a2f64d6b28d]);
            }

            jdouble LevenbergMarquardtOptimizer::getRankingThreshold() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRankingThreshold_456d9a2f64d6b28d]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LevenbergMarquardtOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_15b17ff9a423a2d3], a0.this$));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withCostRelativeTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withCostRelativeTolerance_773a169573cd7fc8], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withInitialStepBoundFactor(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withInitialStepBoundFactor_773a169573cd7fc8], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withOrthoTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withOrthoTolerance_773a169573cd7fc8], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withParameterRelativeTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withParameterRelativeTolerance_773a169573cd7fc8], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withRankingThreshold(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withRankingThreshold_773a169573cd7fc8], a0));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LevenbergMarquardtOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LevenbergMarquardtOptimizer_init_(t_LevenbergMarquardtOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LevenbergMarquardtOptimizer_getCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getOrthoTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getRankingThreshold(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_optimize(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withOrthoTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withRankingThreshold(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_get__costRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__initialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__orthoTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__parameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__rankingThreshold(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyGetSetDef t_LevenbergMarquardtOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, costRelativeTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, initialStepBoundFactor),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, orthoTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, parameterRelativeTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, rankingThreshold),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LevenbergMarquardtOptimizer__methods_[] = {
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getCostRelativeTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getInitialStepBoundFactor, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getOrthoTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getParameterRelativeTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getRankingThreshold, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withCostRelativeTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withInitialStepBoundFactor, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withOrthoTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withParameterRelativeTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withRankingThreshold, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LevenbergMarquardtOptimizer)[] = {
              { Py_tp_methods, t_LevenbergMarquardtOptimizer__methods_ },
              { Py_tp_init, (void *) t_LevenbergMarquardtOptimizer_init_ },
              { Py_tp_getset, t_LevenbergMarquardtOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LevenbergMarquardtOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LevenbergMarquardtOptimizer, t_LevenbergMarquardtOptimizer, LevenbergMarquardtOptimizer);

            void t_LevenbergMarquardtOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(LevenbergMarquardtOptimizer), &PY_TYPE_DEF(LevenbergMarquardtOptimizer), module, "LevenbergMarquardtOptimizer", 0);
            }

            void t_LevenbergMarquardtOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "class_", make_descriptor(LevenbergMarquardtOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "wrapfn_", make_descriptor(t_LevenbergMarquardtOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LevenbergMarquardtOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LevenbergMarquardtOptimizer::initializeClass, 1)))
                return NULL;
              return t_LevenbergMarquardtOptimizer::wrap_Object(LevenbergMarquardtOptimizer(((t_LevenbergMarquardtOptimizer *) arg)->object.this$));
            }
            static PyObject *t_LevenbergMarquardtOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LevenbergMarquardtOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LevenbergMarquardtOptimizer_init_(t_LevenbergMarquardtOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  LevenbergMarquardtOptimizer object((jobject) NULL);

                  INT_CALL(object = LevenbergMarquardtOptimizer());
                  self->object = object;
                  break;
                }
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  LevenbergMarquardtOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = LevenbergMarquardtOptimizer(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
               default:
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCostRelativeTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getInitialStepBoundFactor());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getOrthoTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOrthoTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getParameterRelativeTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getRankingThreshold(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRankingThreshold());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_optimize(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "optimize", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withCostRelativeTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withCostRelativeTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withInitialStepBoundFactor(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withInitialStepBoundFactor", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withOrthoTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withOrthoTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withOrthoTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withParameterRelativeTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withParameterRelativeTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withRankingThreshold(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withRankingThreshold(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withRankingThreshold", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__costRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCostRelativeTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__initialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getInitialStepBoundFactor());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__orthoTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOrthoTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__parameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getParameterRelativeTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__rankingThreshold(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRankingThreshold());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedIntConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedIntConsumer::mids$ = NULL;
            bool ParseToken$IndexedIntConsumer::live$ = false;

            jclass ParseToken$IndexedIntConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_8dbc1129a3c2557a] = env->getMethodID(cls, "accept", "(II)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedIntConsumer::accept(jint a0, jint a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_8dbc1129a3c2557a], a0, a1);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$IndexedIntConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedIntConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedIntConsumer_accept(t_ParseToken$IndexedIntConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedIntConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedIntConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedIntConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedIntConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedIntConsumer, t_ParseToken$IndexedIntConsumer, ParseToken$IndexedIntConsumer);

            void t_ParseToken$IndexedIntConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedIntConsumer), &PY_TYPE_DEF(ParseToken$IndexedIntConsumer), module, "ParseToken$IndexedIntConsumer", 0);
            }

            void t_ParseToken$IndexedIntConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "class_", make_descriptor(ParseToken$IndexedIntConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedIntConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedIntConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedIntConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedIntConsumer::wrap_Object(ParseToken$IndexedIntConsumer(((t_ParseToken$IndexedIntConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedIntConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedIntConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedIntConsumer_accept(t_ParseToken$IndexedIntConsumer *self, PyObject *args)
            {
              jint a0;
              jint a1;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldSecondaryODE.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldSecondaryODE::class$ = NULL;
      jmethodID *FieldSecondaryODE::mids$ = NULL;
      bool FieldSecondaryODE::live$ = false;

      jclass FieldSecondaryODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldSecondaryODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_493e9accb34ba8d9] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_0d379d27c7d38d91] = env->getMethodID(cls, "init", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSecondaryODE::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_493e9accb34ba8d9], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      jint FieldSecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      void FieldSecondaryODE::init(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_0d379d27c7d38d91], a0.this$, a1.this$, a2.this$, a3.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_FieldSecondaryODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSecondaryODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSecondaryODE_of_(t_FieldSecondaryODE *self, PyObject *args);
      static PyObject *t_FieldSecondaryODE_computeDerivatives(t_FieldSecondaryODE *self, PyObject *args);
      static PyObject *t_FieldSecondaryODE_getDimension(t_FieldSecondaryODE *self);
      static PyObject *t_FieldSecondaryODE_init(t_FieldSecondaryODE *self, PyObject *args);
      static PyObject *t_FieldSecondaryODE_get__dimension(t_FieldSecondaryODE *self, void *data);
      static PyObject *t_FieldSecondaryODE_get__parameters_(t_FieldSecondaryODE *self, void *data);
      static PyGetSetDef t_FieldSecondaryODE__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSecondaryODE, dimension),
        DECLARE_GET_FIELD(t_FieldSecondaryODE, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSecondaryODE__methods_[] = {
        DECLARE_METHOD(t_FieldSecondaryODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSecondaryODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSecondaryODE, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSecondaryODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldSecondaryODE, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldSecondaryODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSecondaryODE)[] = {
        { Py_tp_methods, t_FieldSecondaryODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldSecondaryODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSecondaryODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSecondaryODE, t_FieldSecondaryODE, FieldSecondaryODE);
      PyObject *t_FieldSecondaryODE::wrap_Object(const FieldSecondaryODE& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSecondaryODE::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSecondaryODE *self = (t_FieldSecondaryODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSecondaryODE::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSecondaryODE::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSecondaryODE *self = (t_FieldSecondaryODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSecondaryODE::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSecondaryODE), &PY_TYPE_DEF(FieldSecondaryODE), module, "FieldSecondaryODE", 0);
      }

      void t_FieldSecondaryODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSecondaryODE), "class_", make_descriptor(FieldSecondaryODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSecondaryODE), "wrapfn_", make_descriptor(t_FieldSecondaryODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSecondaryODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSecondaryODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSecondaryODE::initializeClass, 1)))
          return NULL;
        return t_FieldSecondaryODE::wrap_Object(FieldSecondaryODE(((t_FieldSecondaryODE *) arg)->object.this$));
      }
      static PyObject *t_FieldSecondaryODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSecondaryODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSecondaryODE_of_(t_FieldSecondaryODE *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldSecondaryODE_computeDerivatives(t_FieldSecondaryODE *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;
        JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
        PyTypeObject **p3;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1, a2, a3));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldSecondaryODE_getDimension(t_FieldSecondaryODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldSecondaryODE_init(t_FieldSecondaryODE *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;

        if (!parseArgs(args, "K[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldSecondaryODE_get__parameters_(t_FieldSecondaryODE *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSecondaryODE_get__dimension(t_FieldSecondaryODE *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalMagneticFieldFrame$LOFBuilderVector::class$ = NULL;
      jmethodID *LocalMagneticFieldFrame$LOFBuilderVector::mids$ = NULL;
      bool LocalMagneticFieldFrame$LOFBuilderVector::live$ = false;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_MOMENTUM = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_POSITION = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_VELOCITY = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_MOMENTUM = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_POSITION = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_VELOCITY = NULL;

      jclass LocalMagneticFieldFrame$LOFBuilderVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_b1e1f43f3642f4b8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;");
          mids$[mid_values_9a063c3daced432c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MINUS_MOMENTUM = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_MOMENTUM", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          MINUS_POSITION = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_POSITION", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          MINUS_VELOCITY = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_VELOCITY", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_MOMENTUM = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_MOMENTUM", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_POSITION = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_POSITION", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_VELOCITY = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_VELOCITY", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalMagneticFieldFrame$LOFBuilderVector LocalMagneticFieldFrame$LOFBuilderVector::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalMagneticFieldFrame$LOFBuilderVector(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b1e1f43f3642f4b8], a0.this$));
      }

      JArray< LocalMagneticFieldFrame$LOFBuilderVector > LocalMagneticFieldFrame$LOFBuilderVector::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalMagneticFieldFrame$LOFBuilderVector >(env->callStaticObjectMethod(cls, mids$[mid_values_9a063c3daced432c]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_of_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_values(PyTypeObject *type);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_get__parameters_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, void *data);
      static PyGetSetDef t_LocalMagneticFieldFrame$LOFBuilderVector__fields_[] = {
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame$LOFBuilderVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalMagneticFieldFrame$LOFBuilderVector__methods_[] = {
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalMagneticFieldFrame$LOFBuilderVector)[] = {
        { Py_tp_methods, t_LocalMagneticFieldFrame$LOFBuilderVector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalMagneticFieldFrame$LOFBuilderVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalMagneticFieldFrame$LOFBuilderVector)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalMagneticFieldFrame$LOFBuilderVector, t_LocalMagneticFieldFrame$LOFBuilderVector, LocalMagneticFieldFrame$LOFBuilderVector);
      PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(const LocalMagneticFieldFrame$LOFBuilderVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalMagneticFieldFrame$LOFBuilderVector *self = (t_LocalMagneticFieldFrame$LOFBuilderVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalMagneticFieldFrame$LOFBuilderVector *self = (t_LocalMagneticFieldFrame$LOFBuilderVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalMagneticFieldFrame$LOFBuilderVector::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), &PY_TYPE_DEF(LocalMagneticFieldFrame$LOFBuilderVector), module, "LocalMagneticFieldFrame$LOFBuilderVector", 0);
      }

      void t_LocalMagneticFieldFrame$LOFBuilderVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "class_", make_descriptor(LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "wrapfn_", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalMagneticFieldFrame$LOFBuilderVector::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_MOMENTUM", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_MOMENTUM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_POSITION", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_VELOCITY", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_VELOCITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_MOMENTUM", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_MOMENTUM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_POSITION", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_VELOCITY", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_VELOCITY)));
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 1)))
          return NULL;
        return t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(LocalMagneticFieldFrame$LOFBuilderVector(((t_LocalMagneticFieldFrame$LOFBuilderVector *) arg)->object.this$));
      }
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_of_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalMagneticFieldFrame$LOFBuilderVector result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::valueOf(a0));
          return t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_values(PyTypeObject *type)
      {
        JArray< LocalMagneticFieldFrame$LOFBuilderVector > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::values());
        return JArray<jobject>(result.this$).wrap(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject);
      }
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_get__parameters_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Abs.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Abs::class$ = NULL;
        jmethodID *Abs::mids$ = NULL;
        bool Abs::live$ = false;

        jclass Abs::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Abs");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Abs::Abs() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Abs::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Abs::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Abs_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Abs_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Abs_init_(t_Abs *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Abs_value(t_Abs *self, PyObject *args);

        static PyMethodDef t_Abs__methods_[] = {
          DECLARE_METHOD(t_Abs, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Abs, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Abs, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Abs)[] = {
          { Py_tp_methods, t_Abs__methods_ },
          { Py_tp_init, (void *) t_Abs_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Abs)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Abs, t_Abs, Abs);

        void t_Abs::install(PyObject *module)
        {
          installType(&PY_TYPE(Abs), &PY_TYPE_DEF(Abs), module, "Abs", 0);
        }

        void t_Abs::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "class_", make_descriptor(Abs::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "wrapfn_", make_descriptor(t_Abs::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Abs), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Abs_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Abs::initializeClass, 1)))
            return NULL;
          return t_Abs::wrap_Object(Abs(((t_Abs *) arg)->object.this$));
        }
        static PyObject *t_Abs_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Abs::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Abs_init_(t_Abs *self, PyObject *args, PyObject *kwds)
        {
          Abs object((jobject) NULL);

          INT_CALL(object = Abs());
          self->object = object;

          return 0;
        }

        static PyObject *t_Abs_value(t_Abs *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVectorKey::class$ = NULL;
            jmethodID *StateVectorKey::mids$ = NULL;
            bool StateVectorKey::live$ = false;
            StateVectorKey *StateVectorKey::COMMENT = NULL;
            StateVectorKey *StateVectorKey::X = NULL;
            StateVectorKey *StateVectorKey::X_DOT = NULL;
            StateVectorKey *StateVectorKey::Y = NULL;
            StateVectorKey *StateVectorKey::Y_DOT = NULL;
            StateVectorKey *StateVectorKey::Z = NULL;
            StateVectorKey *StateVectorKey::Z_DOT = NULL;

            jclass StateVectorKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVectorKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_f14cb17eabe77de8] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;)Z");
                mids$[mid_valueOf_f5a9d2543c537b87] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;");
                mids$[mid_values_4bf250de44d625ca] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new StateVectorKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                X = new StateVectorKey(env->getStaticObjectField(cls, "X", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                X_DOT = new StateVectorKey(env->getStaticObjectField(cls, "X_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Y = new StateVectorKey(env->getStaticObjectField(cls, "Y", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Y_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Y_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Z = new StateVectorKey(env->getStaticObjectField(cls, "Z", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                Z_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Z_DOT", "Lorg/orekit/files/ccsds/ndm/cdm/StateVectorKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean StateVectorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_f14cb17eabe77de8], a0.this$, a1.this$, a2.this$);
            }

            StateVectorKey StateVectorKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return StateVectorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f5a9d2543c537b87], a0.this$));
            }

            JArray< StateVectorKey > StateVectorKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< StateVectorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_4bf250de44d625ca]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_StateVectorKey_values(PyTypeObject *type);
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data);
            static PyGetSetDef t_StateVectorKey__fields_[] = {
              DECLARE_GET_FIELD(t_StateVectorKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVectorKey__methods_[] = {
              DECLARE_METHOD(t_StateVectorKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, process, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorKey)[] = {
              { Py_tp_methods, t_StateVectorKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_StateVectorKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(StateVectorKey, t_StateVectorKey, StateVectorKey);
            PyObject *t_StateVectorKey::wrap_Object(const StateVectorKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_StateVectorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_StateVectorKey::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorKey), &PY_TYPE_DEF(StateVectorKey), module, "StateVectorKey", 0);
            }

            void t_StateVectorKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "class_", make_descriptor(StateVectorKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "wrapfn_", make_descriptor(t_StateVectorKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(StateVectorKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "COMMENT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z_DOT)));
            }

            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorKey::initializeClass, 1)))
                return NULL;
              return t_StateVectorKey::wrap_Object(StateVectorKey(((t_StateVectorKey *) arg)->object.this$));
            }
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::StateVector a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              StateVectorKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::StateVectorKey::valueOf(a0));
                return t_StateVectorKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_StateVectorKey_values(PyTypeObject *type)
            {
              JArray< StateVectorKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::StateVectorKey::values());
              return JArray<jobject>(result.this$).wrap(t_StateVectorKey::wrap_jobject);
            }
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldDerivativeStructure::class$ = NULL;
        jmethodID *FieldDerivativeStructure::mids$ = NULL;
        bool FieldDerivativeStructure::live$ = false;

        jclass FieldDerivativeStructure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldDerivativeStructure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_7208bb4259086f92] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_acos_7208bb4259086f92] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_acosh_7208bb4259086f92] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_4bc698b278a3f902] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_4695b8f2ebeb7167] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_add_a88d27168b002560] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_asin_7208bb4259086f92] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_asinh_7208bb4259086f92] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan_7208bb4259086f92] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan2_4bc698b278a3f902] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atan2_cb1f209a45bf6e2f] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_atanh_7208bb4259086f92] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cbrt_7208bb4259086f92] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_ceil_7208bb4259086f92] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_compose_7d4cf49ebbb0b728] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_compose_6b2f4e12f71db966] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_4bc698b278a3f902] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_4695b8f2ebeb7167] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_copySign_a88d27168b002560] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cos_7208bb4259086f92] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_cosh_7208bb4259086f92] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_differentiate_75c1c568aaa91952] = env->getMethodID(cls, "differentiate", "(II)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_4bc698b278a3f902] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_4695b8f2ebeb7167] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_divide_a88d27168b002560] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_exp_7208bb4259086f92] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_expm1_7208bb4259086f92] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_floor_7208bb4259086f92] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getAllDerivatives_01c7d10e96d5cf94] = env->getMethodID(cls, "getAllDerivatives", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_f2f64475e4580546] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getFactory_7a7e13b950af160a] = env->getMethodID(cls, "getFactory", "()Lorg/hipparchus/analysis/differentiation/FDSFactory;");
            mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getFreeParameters_f2f64475e4580546] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_f622835d869c0081] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPi_7208bb4259086f92] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_e6d4d3215c30992a] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_hypot_4bc698b278a3f902] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_hypot_cb1f209a45bf6e2f] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_integrate_75c1c568aaa91952] = env->getMethodID(cls, "integrate", "(II)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_04f59918c5be4fed] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_d170ed074b45048a] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_8f2c4f90fc13ec76] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;[Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_81351117920dfb9b] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_8627910626466fda] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_5acc22dcbdcda82a] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_aed2dc34d0c27da9] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_454b8357f671987b] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_a7317bb066b39ec1] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_450714fafa47a57c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_86808445940b778b] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_linearCombination_a845a3d968074247] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log_7208bb4259086f92] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log10_7208bb4259086f92] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_log1p_7208bb4259086f92] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_4bc698b278a3f902] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_4695b8f2ebeb7167] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_ee1359d8f0ec1f6b] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_multiply_a88d27168b002560] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_negate_7208bb4259086f92] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_newInstance_4695b8f2ebeb7167] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_4bc698b278a3f902] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_4695b8f2ebeb7167] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_ee1359d8f0ec1f6b] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_pow_17f6b1a6bd642b8f] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rebase_19e3165dd888e700] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_reciprocal_7208bb4259086f92] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_4bc698b278a3f902] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_4695b8f2ebeb7167] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_remainder_a88d27168b002560] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rint_7208bb4259086f92] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_rootN_ee1359d8f0ec1f6b] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_scalb_ee1359d8f0ec1f6b] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sign_7208bb4259086f92] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sin_7208bb4259086f92] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_7208bb4259086f92] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_7208bb4259086f92] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_4bc698b278a3f902] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_4695b8f2ebeb7167] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_subtract_a88d27168b002560] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_tan_7208bb4259086f92] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_tanh_7208bb4259086f92] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_taylor_5e09d3ff87d23c4c] = env->getMethodID(cls, "taylor", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_05c598bf3375e090] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_7208bb4259086f92] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_7208bb4259086f92] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_ulp_7208bb4259086f92] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDerivativeStructure FieldDerivativeStructure::abs() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_abs_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::acos() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_acos_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::acosh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_acosh_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_4bc698b278a3f902], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_4695b8f2ebeb7167], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_a88d27168b002560], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::asin() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_asin_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::asinh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_asinh_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan2(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan2_4bc698b278a3f902], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atan2(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_atan2_cb1f209a45bf6e2f], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::atanh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_atanh_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cbrt() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cbrt_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::ceil() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_ceil_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::compose(const JArray< jdouble > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_7d4cf49ebbb0b728], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_6b2f4e12f71db966], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_4bc698b278a3f902], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_4695b8f2ebeb7167], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_a88d27168b002560], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cos() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cos_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::cosh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_cosh_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::differentiate(jint a0, jint a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_differentiate_75c1c568aaa91952], a0, a1));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_4bc698b278a3f902], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_4695b8f2ebeb7167], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_a88d27168b002560], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::exp() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_exp_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::expm1() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_expm1_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::floor() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_floor_7208bb4259086f92]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldDerivativeStructure::getAllDerivatives() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAllDerivatives_01c7d10e96d5cf94]));
        }

        jint FieldDerivativeStructure::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_f2f64475e4580546]);
        }

        ::org::hipparchus::analysis::differentiation::FDSFactory FieldDerivativeStructure::getFactory() const
        {
          return ::org::hipparchus::analysis::differentiation::FDSFactory(env->callObjectMethod(this$, mids$[mid_getFactory_7a7e13b950af160a]));
        }

        ::org::hipparchus::Field FieldDerivativeStructure::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
        }

        jint FieldDerivativeStructure::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_f2f64475e4580546]);
        }

        jint FieldDerivativeStructure::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_f622835d869c0081], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::getPi() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_7208bb4259086f92]));
        }

        jdouble FieldDerivativeStructure::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_e6d4d3215c30992a]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::hypot(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_hypot_4bc698b278a3f902], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::hypot(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_hypot_cb1f209a45bf6e2f], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::integrate(jint a0, jint a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_integrate_75c1c568aaa91952], a0, a1));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< jdouble > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_04f59918c5be4fed], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_d170ed074b45048a], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const JArray< FieldDerivativeStructure > & a0, const JArray< FieldDerivativeStructure > & a1) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_8f2c4f90fc13ec76], a0.this$, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_81351117920dfb9b], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_8627910626466fda], a0, a1.this$, a2, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_5acc22dcbdcda82a], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3, const FieldDerivativeStructure & a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_aed2dc34d0c27da9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3, jdouble a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_454b8357f671987b], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldDerivativeStructure & a5) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_a7317bb066b39ec1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const FieldDerivativeStructure & a0, const FieldDerivativeStructure & a1, const FieldDerivativeStructure & a2, const FieldDerivativeStructure & a3, const FieldDerivativeStructure & a4, const FieldDerivativeStructure & a5, const FieldDerivativeStructure & a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_450714fafa47a57c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(jdouble a0, const FieldDerivativeStructure & a1, jdouble a2, const FieldDerivativeStructure & a3, jdouble a4, const FieldDerivativeStructure & a5, jdouble a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_86808445940b778b], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldDerivativeStructure & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldDerivativeStructure & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldDerivativeStructure & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldDerivativeStructure & a7) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_a845a3d968074247], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log10() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log10_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::log1p() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_log1p_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_4bc698b278a3f902], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_4695b8f2ebeb7167], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_ee1359d8f0ec1f6b], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_a88d27168b002560], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::negate() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_negate_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::newInstance(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_newInstance_4695b8f2ebeb7167], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_4bc698b278a3f902], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_4695b8f2ebeb7167], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_ee1359d8f0ec1f6b], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::pow(jdouble a0, const FieldDerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldDerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_pow_17f6b1a6bd642b8f], a0, a1.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rebase(const JArray< FieldDerivativeStructure > & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rebase_19e3165dd888e700], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::reciprocal() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_reciprocal_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_4bc698b278a3f902], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_4695b8f2ebeb7167], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_a88d27168b002560], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rint() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rint_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::rootN(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_rootN_ee1359d8f0ec1f6b], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::scalb(jint a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_scalb_ee1359d8f0ec1f6b], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sign() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sign_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sin() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sin_7208bb4259086f92]));
        }

        ::org::hipparchus::util::FieldSinCos FieldDerivativeStructure::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sinh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sinh_7208bb4259086f92]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldDerivativeStructure::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::sqrt() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_sqrt_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(const FieldDerivativeStructure & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_4bc698b278a3f902], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(jdouble a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_4695b8f2ebeb7167], a0));
        }

        FieldDerivativeStructure FieldDerivativeStructure::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_a88d27168b002560], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::tan() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_tan_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::tanh() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_tanh_7208bb4259086f92]));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::taylor(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_5e09d3ff87d23c4c], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivativeStructure::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_05c598bf3375e090], a0.this$));
        }

        FieldDerivativeStructure FieldDerivativeStructure::toDegrees() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDegrees_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::toRadians() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toRadians_7208bb4259086f92]));
        }

        FieldDerivativeStructure FieldDerivativeStructure::ulp() const
        {
          return FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_ulp_7208bb4259086f92]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_FieldDerivativeStructure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_of_(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_abs(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_acos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_acosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_add(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_asin(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_asinh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_atan(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_atan2(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_atanh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_cbrt(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_ceil(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_compose(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_copySign(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_cos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_cosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_differentiate(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_divide(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_exp(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_expm1(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_floor(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getAllDerivatives(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getExponent(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getFactory(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getField(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getFreeParameters(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getOrder(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getPartialDerivative(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_getPi(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getReal(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_getValue(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_hypot(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_integrate(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_linearCombination(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_log(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_log10(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_log1p(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_multiply(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_negate(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_newInstance(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_pow(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_rebase(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_reciprocal(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_remainder(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_rint(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_rootN(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_scalb(t_FieldDerivativeStructure *self, PyObject *arg);
        static PyObject *t_FieldDerivativeStructure_sign(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sin(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinCos(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sinhCosh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_sqrt(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_subtract(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_tan(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_tanh(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_taylor(t_FieldDerivativeStructure *self, PyObject *args);
        static PyObject *t_FieldDerivativeStructure_toDegrees(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_toRadians(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_ulp(t_FieldDerivativeStructure *self);
        static PyObject *t_FieldDerivativeStructure_get__allDerivatives(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__exponent(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__factory(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__field(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__freeParameters(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__order(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__pi(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__real(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__value(t_FieldDerivativeStructure *self, void *data);
        static PyObject *t_FieldDerivativeStructure_get__parameters_(t_FieldDerivativeStructure *self, void *data);
        static PyGetSetDef t_FieldDerivativeStructure__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, allDerivatives),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, exponent),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, factory),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, field),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, freeParameters),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, order),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, pi),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, real),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, value),
          DECLARE_GET_FIELD(t_FieldDerivativeStructure, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDerivativeStructure__methods_[] = {
          DECLARE_METHOD(t_FieldDerivativeStructure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, abs, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, acos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, acosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, asin, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, asinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan2, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, atanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, ceil, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, cosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, exp, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, expm1, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, floor, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getAllDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getFactory, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getReal, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, hypot, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, integrate, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log10, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, log1p, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, newInstance, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rebase, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rint, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, rootN, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, scalb, METH_O),
          DECLARE_METHOD(t_FieldDerivativeStructure, sign, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sin, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, tan, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, tanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivativeStructure, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDerivativeStructure)[] = {
          { Py_tp_methods, t_FieldDerivativeStructure__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldDerivativeStructure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDerivativeStructure)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldDerivativeStructure, t_FieldDerivativeStructure, FieldDerivativeStructure);
        PyObject *t_FieldDerivativeStructure::wrap_Object(const FieldDerivativeStructure& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDerivativeStructure::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivativeStructure *self = (t_FieldDerivativeStructure *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDerivativeStructure::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDerivativeStructure::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivativeStructure *self = (t_FieldDerivativeStructure *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDerivativeStructure::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDerivativeStructure), &PY_TYPE_DEF(FieldDerivativeStructure), module, "FieldDerivativeStructure", 0);
        }

        void t_FieldDerivativeStructure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "class_", make_descriptor(FieldDerivativeStructure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "wrapfn_", make_descriptor(t_FieldDerivativeStructure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivativeStructure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDerivativeStructure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDerivativeStructure::initializeClass, 1)))
            return NULL;
          return t_FieldDerivativeStructure::wrap_Object(FieldDerivativeStructure(((t_FieldDerivativeStructure *) arg)->object.this$));
        }
        static PyObject *t_FieldDerivativeStructure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDerivativeStructure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDerivativeStructure_of_(t_FieldDerivativeStructure *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldDerivativeStructure_abs(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_acos(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_acosh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_add(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_asin(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_asinh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_atan(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_atan2(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_atan2_(PyTypeObject *type, PyObject *args)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "KK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::atan2(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_atanh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_cbrt(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_ceil(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_compose(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.compose(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.compose(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_copySign(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_cos(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_cosh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_differentiate(t_FieldDerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.differentiate(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_divide(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_exp(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_expm1(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_floor(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getAllDerivatives(t_FieldDerivativeStructure *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllDerivatives());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldDerivativeStructure_getExponent(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getFactory(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory result((jobject) NULL);
          OBJ_CALL(result = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getField(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_getFreeParameters(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getOrder(t_FieldDerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivativeStructure_getPartialDerivative(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_getPi(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_getReal(t_FieldDerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldDerivativeStructure_getValue(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_hypot(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_hypot_(PyTypeObject *type, PyObject *args)
        {
          FieldDerivativeStructure a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "KK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::hypot(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_integrate(t_FieldDerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_linearCombination(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldDerivativeStructure > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldDerivativeStructure > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, t_FieldDerivativeStructure::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              FieldDerivativeStructure a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              FieldDerivativeStructure a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              FieldDerivativeStructure a6((jobject) NULL);
              PyTypeObject **p6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, t_FieldDerivativeStructure::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, t_FieldDerivativeStructure::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &p6, t_FieldDerivativeStructure::parameters_, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldDerivativeStructure a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldDerivativeStructure a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              FieldDerivativeStructure a7((jobject) NULL);
              PyTypeObject **p7;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldDerivativeStructure::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldDerivativeStructure::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldDerivativeStructure::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_log(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_log10(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_log1p(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_multiply(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_negate(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_newInstance(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jdouble a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_pow(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldDerivativeStructure a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldDerivativeStructure::initializeClass, &a0, &a1, &p1, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::pow(a0, a1));
            return t_FieldDerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_rebase(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          JArray< FieldDerivativeStructure > a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
          {
            OBJ_CALL(result = self->object.rebase(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_reciprocal(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_remainder(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_rint(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_rootN(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_scalb(t_FieldDerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          FieldDerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_sign(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sin(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sinCos(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_sinh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_sinhCosh(t_FieldDerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
        }

        static PyObject *t_FieldDerivativeStructure_sqrt(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_subtract(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", FieldDerivativeStructure::initializeClass, &a0, &p0, t_FieldDerivativeStructure::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_tan(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_tanh(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_taylor(t_FieldDerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldDerivativeStructure_toDegrees(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_toRadians(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDerivativeStructure_ulp(t_FieldDerivativeStructure *self)
        {
          FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldDerivativeStructure_get__parameters_(t_FieldDerivativeStructure *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDerivativeStructure_get__allDerivatives(t_FieldDerivativeStructure *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllDerivatives());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldDerivativeStructure_get__exponent(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__factory(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory value((jobject) NULL);
          OBJ_CALL(value = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__field(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__freeParameters(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__order(t_FieldDerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__pi(t_FieldDerivativeStructure *self, void *data)
        {
          FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FieldDerivativeStructure_get__real(t_FieldDerivativeStructure *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldDerivativeStructure_get__value(t_FieldDerivativeStructure *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *ODEEventHandler::class$ = NULL;
        jmethodID *ODEEventHandler::mids$ = NULL;
        bool ODEEventHandler::live$ = false;

        jclass ODEEventHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/ODEEventHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventOccurred_b44a5bd8164db790] = env->getMethodID(cls, "eventOccurred", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/events/ODEEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_init_b04fdf194c7cd3ab] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;DLorg/hipparchus/ode/events/ODEEventDetector;)V");
            mids$[mid_resetState_77c214d3969e685d] = env->getMethodID(cls, "resetState", "(Lorg/hipparchus/ode/events/ODEEventDetector;Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/ODEState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action ODEEventHandler::eventOccurred(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::events::ODEEventDetector & a1, jboolean a2) const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_b44a5bd8164db790], a0.this$, a1.this$, a2));
        }

        void ODEEventHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1, const ::org::hipparchus::ode::events::ODEEventDetector & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_b04fdf194c7cd3ab], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::ode::ODEState ODEEventHandler::resetState(const ::org::hipparchus::ode::events::ODEEventDetector & a0, const ::org::hipparchus::ode::ODEStateAndDerivative & a1) const
        {
          return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_resetState_77c214d3969e685d], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_ODEEventHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEEventHandler_eventOccurred(t_ODEEventHandler *self, PyObject *args);
        static PyObject *t_ODEEventHandler_init(t_ODEEventHandler *self, PyObject *args);
        static PyObject *t_ODEEventHandler_resetState(t_ODEEventHandler *self, PyObject *args);

        static PyMethodDef t_ODEEventHandler__methods_[] = {
          DECLARE_METHOD(t_ODEEventHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEEventHandler, eventOccurred, METH_VARARGS),
          DECLARE_METHOD(t_ODEEventHandler, init, METH_VARARGS),
          DECLARE_METHOD(t_ODEEventHandler, resetState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEEventHandler)[] = {
          { Py_tp_methods, t_ODEEventHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEEventHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEEventHandler, t_ODEEventHandler, ODEEventHandler);

        void t_ODEEventHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEEventHandler), &PY_TYPE_DEF(ODEEventHandler), module, "ODEEventHandler", 0);
        }

        void t_ODEEventHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "class_", make_descriptor(ODEEventHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "wrapfn_", make_descriptor(t_ODEEventHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEEventHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEEventHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEEventHandler::initializeClass, 1)))
            return NULL;
          return t_ODEEventHandler::wrap_Object(ODEEventHandler(((t_ODEEventHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEEventHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEEventHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEEventHandler_eventOccurred(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::ODEEventDetector a1((jobject) NULL);
          jboolean a2;
          ::org::hipparchus::ode::events::Action result((jobject) NULL);

          if (!parseArgs(args, "kkZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
            return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
          return NULL;
        }

        static PyObject *t_ODEEventHandler_init(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::ode::events::ODEEventDetector a2((jobject) NULL);

          if (!parseArgs(args, "kDk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_ODEEventHandler_resetState(t_ODEEventHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a1((jobject) NULL);
          ::org::hipparchus::ode::ODEState result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.resetState(a0, a1));
            return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "resetState", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "org/orekit/files/rinex/clock/RinexClock$Receiver.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataLine.h"
#include "java/util/Map.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/clock/RinexClock$ReferenceClock.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock::class$ = NULL;
          jmethodID *RinexClock::mids$ = NULL;
          bool RinexClock::live$ = false;

          jclass RinexClock::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addAppliedDCBS_ff0e7309079f40cf] = env->getMethodID(cls, "addAppliedDCBS", "(Lorg/orekit/files/rinex/AppliedDCBS;)V");
              mids$[mid_addAppliedPCVS_53fc7a51ceba7c31] = env->getMethodID(cls, "addAppliedPCVS", "(Lorg/orekit/files/rinex/AppliedPCVS;)V");
              mids$[mid_addClockData_853597fc786f0a99] = env->getMethodID(cls, "addClockData", "(Ljava/lang/String;Lorg/orekit/files/rinex/clock/RinexClock$ClockDataLine;)V");
              mids$[mid_addClockDataType_781543b0db33d67f] = env->getMethodID(cls, "addClockDataType", "(Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;)V");
              mids$[mid_addComment_e939c6558ae8d313] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
              mids$[mid_addReceiver_67434d0ce85d1c38] = env->getMethodID(cls, "addReceiver", "(Lorg/orekit/files/rinex/clock/RinexClock$Receiver;)V");
              mids$[mid_addReferenceClockList_9864bb25319e03a0] = env->getMethodID(cls, "addReferenceClockList", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_addSatellite_e939c6558ae8d313] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)V");
              mids$[mid_addSystemObservationType_f4e16160174a8974] = env->getMethodID(cls, "addSystemObservationType", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getAgencyName_0090f7797e403f43] = env->getMethodID(cls, "getAgencyName", "()Ljava/lang/String;");
              mids$[mid_getAnalysisCenterID_0090f7797e403f43] = env->getMethodID(cls, "getAnalysisCenterID", "()Ljava/lang/String;");
              mids$[mid_getAnalysisCenterName_0090f7797e403f43] = env->getMethodID(cls, "getAnalysisCenterName", "()Ljava/lang/String;");
              mids$[mid_getClockData_d6753b7055940a54] = env->getMethodID(cls, "getClockData", "()Ljava/util/Map;");
              mids$[mid_getClockDataTypes_a6156df500549a58] = env->getMethodID(cls, "getClockDataTypes", "()Ljava/util/List;");
              mids$[mid_getComments_0090f7797e403f43] = env->getMethodID(cls, "getComments", "()Ljava/lang/String;");
              mids$[mid_getCreationDate_aaa854c403487cf3] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCreationDateString_0090f7797e403f43] = env->getMethodID(cls, "getCreationDateString", "()Ljava/lang/String;");
              mids$[mid_getCreationTimeString_0090f7797e403f43] = env->getMethodID(cls, "getCreationTimeString", "()Ljava/lang/String;");
              mids$[mid_getCreationTimeZoneString_0090f7797e403f43] = env->getMethodID(cls, "getCreationTimeZoneString", "()Ljava/lang/String;");
              mids$[mid_getExternalClockReference_0090f7797e403f43] = env->getMethodID(cls, "getExternalClockReference", "()Ljava/lang/String;");
              mids$[mid_getFormatVersion_456d9a2f64d6b28d] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrameName_0090f7797e403f43] = env->getMethodID(cls, "getFrameName", "()Ljava/lang/String;");
              mids$[mid_getListAppliedDCBS_a6156df500549a58] = env->getMethodID(cls, "getListAppliedDCBS", "()Ljava/util/List;");
              mids$[mid_getListAppliedPCVS_a6156df500549a58] = env->getMethodID(cls, "getListAppliedPCVS", "()Ljava/util/List;");
              mids$[mid_getNumberOfClockDataTypes_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfClockDataTypes", "()I");
              mids$[mid_getNumberOfLeapSeconds_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfLeapSeconds", "()I");
              mids$[mid_getNumberOfLeapSecondsGNSS_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfLeapSecondsGNSS", "()I");
              mids$[mid_getNumberOfReceivers_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfReceivers", "()I");
              mids$[mid_getNumberOfSatellites_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
              mids$[mid_getProgramName_0090f7797e403f43] = env->getMethodID(cls, "getProgramName", "()Ljava/lang/String;");
              mids$[mid_getReceivers_a6156df500549a58] = env->getMethodID(cls, "getReceivers", "()Ljava/util/List;");
              mids$[mid_getReferenceClocks_afbf756dd3c251fe] = env->getMethodID(cls, "getReferenceClocks", "()Lorg/orekit/utils/TimeSpanMap;");
              mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getSatellites_a6156df500549a58] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
              mids$[mid_getStationIdentifier_0090f7797e403f43] = env->getMethodID(cls, "getStationIdentifier", "()Ljava/lang/String;");
              mids$[mid_getStationName_0090f7797e403f43] = env->getMethodID(cls, "getStationName", "()Ljava/lang/String;");
              mids$[mid_getSystemObservationTypes_d6753b7055940a54] = env->getMethodID(cls, "getSystemObservationTypes", "()Ljava/util/Map;");
              mids$[mid_getTimeScale_63ac10047983bd43] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_getTimeSystem_b58d3545739694ee] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getTotalNumberOfDataLines_f2f64475e4580546] = env->getMethodID(cls, "getTotalNumberOfDataLines", "()I");
              mids$[mid_numberOfObsTypes_09b6d9ee3b290945] = env->getMethodID(cls, "numberOfObsTypes", "(Lorg/orekit/gnss/SatelliteSystem;)I");
              mids$[mid_setAgencyName_e939c6558ae8d313] = env->getMethodID(cls, "setAgencyName", "(Ljava/lang/String;)V");
              mids$[mid_setAnalysisCenterID_e939c6558ae8d313] = env->getMethodID(cls, "setAnalysisCenterID", "(Ljava/lang/String;)V");
              mids$[mid_setAnalysisCenterName_e939c6558ae8d313] = env->getMethodID(cls, "setAnalysisCenterName", "(Ljava/lang/String;)V");
              mids$[mid_setCreationDate_e82d68cd9f886886] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setCreationDateString_e939c6558ae8d313] = env->getMethodID(cls, "setCreationDateString", "(Ljava/lang/String;)V");
              mids$[mid_setCreationTimeString_e939c6558ae8d313] = env->getMethodID(cls, "setCreationTimeString", "(Ljava/lang/String;)V");
              mids$[mid_setCreationTimeZoneString_e939c6558ae8d313] = env->getMethodID(cls, "setCreationTimeZoneString", "(Ljava/lang/String;)V");
              mids$[mid_setExternalClockReference_e939c6558ae8d313] = env->getMethodID(cls, "setExternalClockReference", "(Ljava/lang/String;)V");
              mids$[mid_setFormatVersion_77e0f9a1f260e2e5] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setFrameName_e939c6558ae8d313] = env->getMethodID(cls, "setFrameName", "(Ljava/lang/String;)V");
              mids$[mid_setNumberOfLeapSeconds_0a2a1ac2721c0336] = env->getMethodID(cls, "setNumberOfLeapSeconds", "(I)V");
              mids$[mid_setNumberOfLeapSecondsGNSS_0a2a1ac2721c0336] = env->getMethodID(cls, "setNumberOfLeapSecondsGNSS", "(I)V");
              mids$[mid_setProgramName_e939c6558ae8d313] = env->getMethodID(cls, "setProgramName", "(Ljava/lang/String;)V");
              mids$[mid_setSatelliteSystem_a9204a81fe55aebe] = env->getMethodID(cls, "setSatelliteSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setStationIdentifier_e939c6558ae8d313] = env->getMethodID(cls, "setStationIdentifier", "(Ljava/lang/String;)V");
              mids$[mid_setStationName_e939c6558ae8d313] = env->getMethodID(cls, "setStationName", "(Ljava/lang/String;)V");
              mids$[mid_setTimeScale_6d73d536a2f24dd5] = env->getMethodID(cls, "setTimeScale", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_setTimeSystem_4733fc8266dc541c] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void RinexClock::addAppliedDCBS(const ::org::orekit::files::rinex::AppliedDCBS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedDCBS_ff0e7309079f40cf], a0.this$);
          }

          void RinexClock::addAppliedPCVS(const ::org::orekit::files::rinex::AppliedPCVS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedPCVS_53fc7a51ceba7c31], a0.this$);
          }

          void RinexClock::addClockData(const ::java::lang::String & a0, const ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addClockData_853597fc786f0a99], a0.this$, a1.this$);
          }

          void RinexClock::addClockDataType(const ::org::orekit::files::rinex::clock::RinexClock$ClockDataType & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addClockDataType_781543b0db33d67f], a0.this$);
          }

          void RinexClock::addComment(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addComment_e939c6558ae8d313], a0.this$);
          }

          void RinexClock::addReceiver(const ::org::orekit::files::rinex::clock::RinexClock$Receiver & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addReceiver_67434d0ce85d1c38], a0.this$);
          }

          void RinexClock::addReferenceClockList(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addReferenceClockList_9864bb25319e03a0], a0.this$, a1.this$);
          }

          void RinexClock::addSatellite(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSatellite_e939c6558ae8d313], a0.this$);
          }

          void RinexClock::addSystemObservationType(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::gnss::ObservationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addSystemObservationType_f4e16160174a8974], a0.this$, a1.this$);
          }

          ::java::lang::String RinexClock::getAgencyName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgencyName_0090f7797e403f43]));
          }

          ::java::lang::String RinexClock::getAnalysisCenterID() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAnalysisCenterID_0090f7797e403f43]));
          }

          ::java::lang::String RinexClock::getAnalysisCenterName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAnalysisCenterName_0090f7797e403f43]));
          }

          ::java::util::Map RinexClock::getClockData() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getClockData_d6753b7055940a54]));
          }

          ::java::util::List RinexClock::getClockDataTypes() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getClockDataTypes_a6156df500549a58]));
          }

          ::java::lang::String RinexClock::getComments() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getComments_0090f7797e403f43]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_aaa854c403487cf3]));
          }

          ::java::lang::String RinexClock::getCreationDateString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationDateString_0090f7797e403f43]));
          }

          ::java::lang::String RinexClock::getCreationTimeString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeString_0090f7797e403f43]));
          }

          ::java::lang::String RinexClock::getCreationTimeZoneString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeZoneString_0090f7797e403f43]));
          }

          ::java::lang::String RinexClock::getExternalClockReference() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExternalClockReference_0090f7797e403f43]));
          }

          jdouble RinexClock::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_456d9a2f64d6b28d]);
          }

          ::org::orekit::frames::Frame RinexClock::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
          }

          ::java::lang::String RinexClock::getFrameName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFrameName_0090f7797e403f43]));
          }

          ::java::util::List RinexClock::getListAppliedDCBS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedDCBS_a6156df500549a58]));
          }

          ::java::util::List RinexClock::getListAppliedPCVS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedPCVS_a6156df500549a58]));
          }

          jint RinexClock::getNumberOfClockDataTypes() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfClockDataTypes_f2f64475e4580546]);
          }

          jint RinexClock::getNumberOfLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSeconds_f2f64475e4580546]);
          }

          jint RinexClock::getNumberOfLeapSecondsGNSS() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSecondsGNSS_f2f64475e4580546]);
          }

          jint RinexClock::getNumberOfReceivers() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfReceivers_f2f64475e4580546]);
          }

          jint RinexClock::getNumberOfSatellites() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_f2f64475e4580546]);
          }

          ::java::lang::String RinexClock::getProgramName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgramName_0090f7797e403f43]));
          }

          ::java::util::List RinexClock::getReceivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getReceivers_a6156df500549a58]));
          }

          ::org::orekit::utils::TimeSpanMap RinexClock::getReferenceClocks() const
          {
            return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getReferenceClocks_afbf756dd3c251fe]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexClock::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7]));
          }

          ::java::util::List RinexClock::getSatellites() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_a6156df500549a58]));
          }

          ::java::lang::String RinexClock::getStationIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationIdentifier_0090f7797e403f43]));
          }

          ::java::lang::String RinexClock::getStationName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationName_0090f7797e403f43]));
          }

          ::java::util::Map RinexClock::getSystemObservationTypes() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSystemObservationTypes_d6753b7055940a54]));
          }

          ::org::orekit::time::TimeScale RinexClock::getTimeScale() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_63ac10047983bd43]));
          }

          ::org::orekit::gnss::TimeSystem RinexClock::getTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_b58d3545739694ee]));
          }

          jint RinexClock::getTotalNumberOfDataLines() const
          {
            return env->callIntMethod(this$, mids$[mid_getTotalNumberOfDataLines_f2f64475e4580546]);
          }

          jint RinexClock::numberOfObsTypes(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfObsTypes_09b6d9ee3b290945], a0.this$);
          }

          void RinexClock::setAgencyName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAgencyName_e939c6558ae8d313], a0.this$);
          }

          void RinexClock::setAnalysisCenterID(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAnalysisCenterID_e939c6558ae8d313], a0.this$);
          }

          void RinexClock::setAnalysisCenterName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAnalysisCenterName_e939c6558ae8d313], a0.this$);
          }

          void RinexClock::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_e82d68cd9f886886], a0.this$);
          }

          void RinexClock::setCreationDateString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDateString_e939c6558ae8d313], a0.this$);
          }

          void RinexClock::setCreationTimeString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeString_e939c6558ae8d313], a0.this$);
          }

          void RinexClock::setCreationTimeZoneString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeZoneString_e939c6558ae8d313], a0.this$);
          }

          void RinexClock::setExternalClockReference(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setExternalClockReference_e939c6558ae8d313], a0.this$);
          }

          void RinexClock::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_77e0f9a1f260e2e5], a0);
          }

          void RinexClock::setFrameName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFrameName_e939c6558ae8d313], a0.this$);
          }

          void RinexClock::setNumberOfLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSeconds_0a2a1ac2721c0336], a0);
          }

          void RinexClock::setNumberOfLeapSecondsGNSS(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSecondsGNSS_0a2a1ac2721c0336], a0);
          }

          void RinexClock::setProgramName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setProgramName_e939c6558ae8d313], a0.this$);
          }

          void RinexClock::setSatelliteSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteSystem_a9204a81fe55aebe], a0.this$);
          }

          void RinexClock::setStationIdentifier(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationIdentifier_e939c6558ae8d313], a0.this$);
          }

          void RinexClock::setStationName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationName_e939c6558ae8d313], a0.this$);
          }

          void RinexClock::setTimeScale(const ::org::orekit::time::TimeScale & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeScale_6d73d536a2f24dd5], a0.this$);
          }

          void RinexClock::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeSystem_4733fc8266dc541c], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {
          static PyObject *t_RinexClock_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock_addAppliedDCBS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addAppliedPCVS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addClockData(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_addClockDataType(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addComment(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addReceiver(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addReferenceClockList(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_addSatellite(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addSystemObservationType(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_getAgencyName(t_RinexClock *self);
          static PyObject *t_RinexClock_getAnalysisCenterID(t_RinexClock *self);
          static PyObject *t_RinexClock_getAnalysisCenterName(t_RinexClock *self);
          static PyObject *t_RinexClock_getClockData(t_RinexClock *self);
          static PyObject *t_RinexClock_getClockDataTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getComments(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationDate(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationDateString(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationTimeString(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationTimeZoneString(t_RinexClock *self);
          static PyObject *t_RinexClock_getExternalClockReference(t_RinexClock *self);
          static PyObject *t_RinexClock_getFormatVersion(t_RinexClock *self);
          static PyObject *t_RinexClock_getFrame(t_RinexClock *self);
          static PyObject *t_RinexClock_getFrameName(t_RinexClock *self);
          static PyObject *t_RinexClock_getListAppliedDCBS(t_RinexClock *self);
          static PyObject *t_RinexClock_getListAppliedPCVS(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfClockDataTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfLeapSeconds(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfLeapSecondsGNSS(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfReceivers(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfSatellites(t_RinexClock *self);
          static PyObject *t_RinexClock_getProgramName(t_RinexClock *self);
          static PyObject *t_RinexClock_getReceivers(t_RinexClock *self);
          static PyObject *t_RinexClock_getReferenceClocks(t_RinexClock *self);
          static PyObject *t_RinexClock_getSatelliteSystem(t_RinexClock *self);
          static PyObject *t_RinexClock_getSatellites(t_RinexClock *self);
          static PyObject *t_RinexClock_getStationIdentifier(t_RinexClock *self);
          static PyObject *t_RinexClock_getStationName(t_RinexClock *self);
          static PyObject *t_RinexClock_getSystemObservationTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getTimeScale(t_RinexClock *self);
          static PyObject *t_RinexClock_getTimeSystem(t_RinexClock *self);
          static PyObject *t_RinexClock_getTotalNumberOfDataLines(t_RinexClock *self);
          static PyObject *t_RinexClock_numberOfObsTypes(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAgencyName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAnalysisCenterID(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAnalysisCenterName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationDate(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationDateString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationTimeString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationTimeZoneString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setExternalClockReference(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setFormatVersion(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setFrameName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setNumberOfLeapSeconds(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setNumberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setProgramName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setSatelliteSystem(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setStationIdentifier(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setStationName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setTimeScale(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setTimeSystem(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_get__agencyName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__agencyName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__analysisCenterID(t_RinexClock *self, void *data);
          static int t_RinexClock_set__analysisCenterID(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__analysisCenterName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__analysisCenterName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__clockData(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__clockDataTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__comments(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__creationDate(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationDate(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationDateString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationDateString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationTimeString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationTimeString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationTimeZoneString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationTimeZoneString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__externalClockReference(t_RinexClock *self, void *data);
          static int t_RinexClock_set__externalClockReference(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__formatVersion(t_RinexClock *self, void *data);
          static int t_RinexClock_set__formatVersion(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__frame(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__frameName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__frameName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__listAppliedDCBS(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__listAppliedPCVS(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfClockDataTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfLeapSeconds(t_RinexClock *self, void *data);
          static int t_RinexClock_set__numberOfLeapSeconds(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__numberOfLeapSecondsGNSS(t_RinexClock *self, void *data);
          static int t_RinexClock_set__numberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__numberOfReceivers(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfSatellites(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__programName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__programName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__receivers(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__referenceClocks(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__satelliteSystem(t_RinexClock *self, void *data);
          static int t_RinexClock_set__satelliteSystem(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__satellites(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__stationIdentifier(t_RinexClock *self, void *data);
          static int t_RinexClock_set__stationIdentifier(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__stationName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__stationName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__systemObservationTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__timeScale(t_RinexClock *self, void *data);
          static int t_RinexClock_set__timeScale(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__timeSystem(t_RinexClock *self, void *data);
          static int t_RinexClock_set__timeSystem(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__totalNumberOfDataLines(t_RinexClock *self, void *data);
          static PyGetSetDef t_RinexClock__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexClock, agencyName),
            DECLARE_GETSET_FIELD(t_RinexClock, analysisCenterID),
            DECLARE_GETSET_FIELD(t_RinexClock, analysisCenterName),
            DECLARE_GET_FIELD(t_RinexClock, clockData),
            DECLARE_GET_FIELD(t_RinexClock, clockDataTypes),
            DECLARE_GET_FIELD(t_RinexClock, comments),
            DECLARE_GETSET_FIELD(t_RinexClock, creationDate),
            DECLARE_GETSET_FIELD(t_RinexClock, creationDateString),
            DECLARE_GETSET_FIELD(t_RinexClock, creationTimeString),
            DECLARE_GETSET_FIELD(t_RinexClock, creationTimeZoneString),
            DECLARE_GETSET_FIELD(t_RinexClock, externalClockReference),
            DECLARE_GETSET_FIELD(t_RinexClock, formatVersion),
            DECLARE_GET_FIELD(t_RinexClock, frame),
            DECLARE_GETSET_FIELD(t_RinexClock, frameName),
            DECLARE_GET_FIELD(t_RinexClock, listAppliedDCBS),
            DECLARE_GET_FIELD(t_RinexClock, listAppliedPCVS),
            DECLARE_GET_FIELD(t_RinexClock, numberOfClockDataTypes),
            DECLARE_GETSET_FIELD(t_RinexClock, numberOfLeapSeconds),
            DECLARE_GETSET_FIELD(t_RinexClock, numberOfLeapSecondsGNSS),
            DECLARE_GET_FIELD(t_RinexClock, numberOfReceivers),
            DECLARE_GET_FIELD(t_RinexClock, numberOfSatellites),
            DECLARE_GETSET_FIELD(t_RinexClock, programName),
            DECLARE_GET_FIELD(t_RinexClock, receivers),
            DECLARE_GET_FIELD(t_RinexClock, referenceClocks),
            DECLARE_GETSET_FIELD(t_RinexClock, satelliteSystem),
            DECLARE_GET_FIELD(t_RinexClock, satellites),
            DECLARE_GETSET_FIELD(t_RinexClock, stationIdentifier),
            DECLARE_GETSET_FIELD(t_RinexClock, stationName),
            DECLARE_GET_FIELD(t_RinexClock, systemObservationTypes),
            DECLARE_GETSET_FIELD(t_RinexClock, timeScale),
            DECLARE_GETSET_FIELD(t_RinexClock, timeSystem),
            DECLARE_GET_FIELD(t_RinexClock, totalNumberOfDataLines),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock__methods_[] = {
            DECLARE_METHOD(t_RinexClock, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock, addAppliedDCBS, METH_O),
            DECLARE_METHOD(t_RinexClock, addAppliedPCVS, METH_O),
            DECLARE_METHOD(t_RinexClock, addClockData, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, addClockDataType, METH_O),
            DECLARE_METHOD(t_RinexClock, addComment, METH_O),
            DECLARE_METHOD(t_RinexClock, addReceiver, METH_O),
            DECLARE_METHOD(t_RinexClock, addReferenceClockList, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, addSatellite, METH_O),
            DECLARE_METHOD(t_RinexClock, addSystemObservationType, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, getAgencyName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getAnalysisCenterID, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getAnalysisCenterName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getClockData, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getClockDataTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getComments, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationDateString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationTimeString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationTimeZoneString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getExternalClockReference, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFormatVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFrameName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getListAppliedDCBS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getListAppliedPCVS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfClockDataTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfLeapSecondsGNSS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfReceivers, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfSatellites, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getProgramName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getReceivers, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getReferenceClocks, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSatelliteSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getStationIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getStationName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSystemObservationTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTimeScale, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTotalNumberOfDataLines, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, numberOfObsTypes, METH_O),
            DECLARE_METHOD(t_RinexClock, setAgencyName, METH_O),
            DECLARE_METHOD(t_RinexClock, setAnalysisCenterID, METH_O),
            DECLARE_METHOD(t_RinexClock, setAnalysisCenterName, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationDate, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationDateString, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationTimeString, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationTimeZoneString, METH_O),
            DECLARE_METHOD(t_RinexClock, setExternalClockReference, METH_O),
            DECLARE_METHOD(t_RinexClock, setFormatVersion, METH_O),
            DECLARE_METHOD(t_RinexClock, setFrameName, METH_O),
            DECLARE_METHOD(t_RinexClock, setNumberOfLeapSeconds, METH_O),
            DECLARE_METHOD(t_RinexClock, setNumberOfLeapSecondsGNSS, METH_O),
            DECLARE_METHOD(t_RinexClock, setProgramName, METH_O),
            DECLARE_METHOD(t_RinexClock, setSatelliteSystem, METH_O),
            DECLARE_METHOD(t_RinexClock, setStationIdentifier, METH_O),
            DECLARE_METHOD(t_RinexClock, setStationName, METH_O),
            DECLARE_METHOD(t_RinexClock, setTimeScale, METH_O),
            DECLARE_METHOD(t_RinexClock, setTimeSystem, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock)[] = {
            { Py_tp_methods, t_RinexClock__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexClock__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock, t_RinexClock, RinexClock);

          void t_RinexClock::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock), &PY_TYPE_DEF(RinexClock), module, "RinexClock", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "ClockDataType", make_descriptor(&PY_TYPE_DEF(RinexClock$ClockDataType)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "Receiver", make_descriptor(&PY_TYPE_DEF(RinexClock$Receiver)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "ReferenceClock", make_descriptor(&PY_TYPE_DEF(RinexClock$ReferenceClock)));
          }

          void t_RinexClock::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "class_", make_descriptor(RinexClock::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "wrapfn_", make_descriptor(t_RinexClock::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock::initializeClass, 1)))
              return NULL;
            return t_RinexClock::wrap_Object(RinexClock(((t_RinexClock *) arg)->object.this$));
          }
          static PyObject *t_RinexClock_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexClock_addAppliedDCBS(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedDCBS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedDCBS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedDCBS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedDCBS", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addAppliedPCVS(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedPCVS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedPCVS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedPCVS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedPCVS", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addClockData(t_RinexClock *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine a1((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addClockData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addClockData", args);
            return NULL;
          }

          static PyObject *t_RinexClock_addClockDataType(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::initializeClass, &a0, &p0, ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::parameters_))
            {
              OBJ_CALL(self->object.addClockDataType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addClockDataType", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addComment(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.addComment(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addComment", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addReceiver(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::clock::RinexClock$Receiver a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::clock::RinexClock$Receiver::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addReceiver(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addReceiver", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addReferenceClockList(t_RinexClock *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
            {
              OBJ_CALL(self->object.addReferenceClockList(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addReferenceClockList", args);
            return NULL;
          }

          static PyObject *t_RinexClock_addSatellite(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.addSatellite(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addSystemObservationType(t_RinexClock *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.addSystemObservationType(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSystemObservationType", args);
            return NULL;
          }

          static PyObject *t_RinexClock_getAgencyName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAgencyName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getAnalysisCenterID(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAnalysisCenterID());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getAnalysisCenterName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAnalysisCenterName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getClockData(t_RinexClock *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockData());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getClockDataTypes(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockDataTypes());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::clock::PY_TYPE(RinexClock$ClockDataType));
          }

          static PyObject *t_RinexClock_getComments(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationDate(t_RinexClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getCreationDateString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDateString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationTimeString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationTimeZoneString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeZoneString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getExternalClockReference(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getExternalClockReference());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getFormatVersion(t_RinexClock *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock_getFrame(t_RinexClock *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getFrameName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrameName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getListAppliedDCBS(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedDCBS));
          }

          static PyObject *t_RinexClock_getListAppliedPCVS(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedPCVS));
          }

          static PyObject *t_RinexClock_getNumberOfClockDataTypes(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfClockDataTypes());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfLeapSeconds(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfLeapSecondsGNSS(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSecondsGNSS());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfReceivers(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfReceivers());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfSatellites(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfSatellites());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getProgramName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getProgramName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getReceivers(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::clock::PY_TYPE(RinexClock$Receiver));
          }

          static PyObject *t_RinexClock_getReferenceClocks(t_RinexClock *self)
          {
            ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceClocks());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getSatelliteSystem(t_RinexClock *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getSatellites(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_RinexClock_getStationIdentifier(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationIdentifier());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getStationName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getSystemObservationTypes(t_RinexClock *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystemObservationTypes());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTimeScale(t_RinexClock *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTimeSystem(t_RinexClock *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTotalNumberOfDataLines(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTotalNumberOfDataLines());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_numberOfObsTypes(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.numberOfObsTypes(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "numberOfObsTypes", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setAgencyName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAgencyName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAgencyName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setAnalysisCenterID(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAnalysisCenterID(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAnalysisCenterID", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setAnalysisCenterName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAnalysisCenterName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAnalysisCenterName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationDate(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDate", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationDateString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationDateString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDateString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationTimeString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationTimeZoneString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeZoneString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeZoneString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setExternalClockReference(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setExternalClockReference(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setExternalClockReference", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setFormatVersion(t_RinexClock *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setFormatVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFormatVersion", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setFrameName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setFrameName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFrameName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setNumberOfLeapSeconds(t_RinexClock *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setNumberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSecondsGNSS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSecondsGNSS", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setProgramName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setProgramName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setProgramName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setSatelliteSystem(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(self->object.setSatelliteSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setStationIdentifier(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setStationIdentifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setStationIdentifier", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setStationName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setStationName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setStationName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setTimeScale(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTimeScale(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeScale", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setTimeSystem(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_get__agencyName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAgencyName());
            return j2p(value);
          }
          static int t_RinexClock_set__agencyName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAgencyName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "agencyName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__analysisCenterID(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAnalysisCenterID());
            return j2p(value);
          }
          static int t_RinexClock_set__analysisCenterID(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAnalysisCenterID(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "analysisCenterID", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__analysisCenterName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAnalysisCenterName());
            return j2p(value);
          }
          static int t_RinexClock_set__analysisCenterName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAnalysisCenterName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "analysisCenterName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__clockData(t_RinexClock *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockData());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__clockDataTypes(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockDataTypes());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__comments(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return j2p(value);
          }

          static PyObject *t_RinexClock_get__creationDate(t_RinexClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexClock_set__creationDate(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDate", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationDateString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDateString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationDateString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationDateString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDateString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationTimeString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationTimeString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationTimeZoneString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeZoneString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationTimeZoneString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeZoneString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeZoneString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__externalClockReference(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getExternalClockReference());
            return j2p(value);
          }
          static int t_RinexClock_set__externalClockReference(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setExternalClockReference(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "externalClockReference", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__formatVersion(t_RinexClock *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexClock_set__formatVersion(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setFormatVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "formatVersion", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__frame(t_RinexClock *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__frameName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrameName());
            return j2p(value);
          }
          static int t_RinexClock_set__frameName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setFrameName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "frameName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__listAppliedDCBS(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__listAppliedPCVS(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__numberOfClockDataTypes(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfClockDataTypes());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__numberOfLeapSeconds(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexClock_set__numberOfLeapSeconds(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__numberOfLeapSecondsGNSS(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSecondsGNSS());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexClock_set__numberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSecondsGNSS(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSecondsGNSS", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__numberOfReceivers(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfReceivers());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__numberOfSatellites(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfSatellites());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__programName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getProgramName());
            return j2p(value);
          }
          static int t_RinexClock_set__programName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setProgramName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "programName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__receivers(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__referenceClocks(t_RinexClock *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceClocks());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__satelliteSystem(t_RinexClock *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexClock_set__satelliteSystem(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::SatelliteSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setSatelliteSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteSystem", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__satellites(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__stationIdentifier(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationIdentifier());
            return j2p(value);
          }
          static int t_RinexClock_set__stationIdentifier(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setStationIdentifier(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "stationIdentifier", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__stationName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationName());
            return j2p(value);
          }
          static int t_RinexClock_set__stationName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setStationName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "stationName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__systemObservationTypes(t_RinexClock *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystemObservationTypes());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__timeScale(t_RinexClock *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
          static int t_RinexClock_set__timeScale(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::TimeScale value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeScale(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeScale", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__timeSystem(t_RinexClock *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_RinexClock_set__timeSystem(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__totalNumberOfDataLines(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTotalNumberOfDataLines());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::class$ = NULL;
          jmethodID *DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::mids$ = NULL;
          bool DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::live$ = false;

          jclass DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_partialsComputed_e0569d03317baf3a] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/linear/RealMatrix;[D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::partialsComputed(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::linear::RealMatrix & a1, const JArray< jdouble > & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_partialsComputed_e0569d03317baf3a], a0.this$, a1.this$, a2.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_partialsComputed(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *self, PyObject *args);

          static PyMethodDef t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver__methods_[] = {
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, partialsComputed, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver)[] = {
            { Py_tp_methods, t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver);

          void t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), &PY_TYPE_DEF(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), module, "DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver", 0);
          }

          void t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "class_", make_descriptor(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "wrapfn_", make_descriptor(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 1)))
              return NULL;
            return t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::wrap_Object(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver(((t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *) arg)->object.this$));
          }
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_partialsComputed(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);

            if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.partialsComputed(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "partialsComputed", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FilesListCrawler.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FilesListCrawler::class$ = NULL;
      jmethodID *FilesListCrawler::mids$ = NULL;
      bool FilesListCrawler::live$ = false;

      jclass FilesListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FilesListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_890a2dfd24c3cadc] = env->getMethodID(cls, "<init>", "([Ljava/io/File;)V");
          mids$[mid_getStream_7fae51e7cfe91ce7] = env->getMethodID(cls, "getStream", "(Ljava/io/File;)Ljava/io/InputStream;");
          mids$[mid_getCompleteName_259b0019ab7aa9fd] = env->getMethodID(cls, "getCompleteName", "(Ljava/io/File;)Ljava/lang/String;");
          mids$[mid_getBaseName_259b0019ab7aa9fd] = env->getMethodID(cls, "getBaseName", "(Ljava/io/File;)Ljava/lang/String;");
          mids$[mid_getZipJarCrawler_702af3fe6b3a612f] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/io/File;)Lorg/orekit/data/ZipJarCrawler;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FilesListCrawler::FilesListCrawler(const JArray< ::java::io::File > & a0) : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_890a2dfd24c3cadc, a0.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_FilesListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FilesListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FilesListCrawler_of_(t_FilesListCrawler *self, PyObject *args);
      static int t_FilesListCrawler_init_(t_FilesListCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FilesListCrawler_get__parameters_(t_FilesListCrawler *self, void *data);
      static PyGetSetDef t_FilesListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_FilesListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FilesListCrawler__methods_[] = {
        DECLARE_METHOD(t_FilesListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FilesListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FilesListCrawler, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FilesListCrawler)[] = {
        { Py_tp_methods, t_FilesListCrawler__methods_ },
        { Py_tp_init, (void *) t_FilesListCrawler_init_ },
        { Py_tp_getset, t_FilesListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FilesListCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(FilesListCrawler, t_FilesListCrawler, FilesListCrawler);
      PyObject *t_FilesListCrawler::wrap_Object(const FilesListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FilesListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FilesListCrawler *self = (t_FilesListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FilesListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FilesListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FilesListCrawler *self = (t_FilesListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FilesListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(FilesListCrawler), &PY_TYPE_DEF(FilesListCrawler), module, "FilesListCrawler", 0);
      }

      void t_FilesListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FilesListCrawler), "class_", make_descriptor(FilesListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FilesListCrawler), "wrapfn_", make_descriptor(t_FilesListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FilesListCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FilesListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FilesListCrawler::initializeClass, 1)))
          return NULL;
        return t_FilesListCrawler::wrap_Object(FilesListCrawler(((t_FilesListCrawler *) arg)->object.this$));
      }
      static PyObject *t_FilesListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FilesListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FilesListCrawler_of_(t_FilesListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FilesListCrawler_init_(t_FilesListCrawler *self, PyObject *args, PyObject *kwds)
      {
        JArray< ::java::io::File > a0((jobject) NULL);
        FilesListCrawler object((jobject) NULL);

        if (!parseArgs(args, "[k", ::java::io::File::initializeClass, &a0))
        {
          INT_CALL(object = FilesListCrawler(a0));
          self->object = object;
          self->parameters[0] = ::java::io::PY_TYPE(File);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
      static PyObject *t_FilesListCrawler_get__parameters_(t_FilesListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LagrangianPoints::class$ = NULL;
      jmethodID *LagrangianPoints::mids$ = NULL;
      bool LagrangianPoints::live$ = false;
      LagrangianPoints *LagrangianPoints::L1 = NULL;
      LagrangianPoints *LagrangianPoints::L2 = NULL;
      LagrangianPoints *LagrangianPoints::L3 = NULL;
      LagrangianPoints *LagrangianPoints::L4 = NULL;
      LagrangianPoints *LagrangianPoints::L5 = NULL;

      jclass LagrangianPoints::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LagrangianPoints");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_fb92f5216db1480d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/LagrangianPoints;");
          mids$[mid_values_23018153ccde58e4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/LagrangianPoints;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          L1 = new LagrangianPoints(env->getStaticObjectField(cls, "L1", "Lorg/orekit/utils/LagrangianPoints;"));
          L2 = new LagrangianPoints(env->getStaticObjectField(cls, "L2", "Lorg/orekit/utils/LagrangianPoints;"));
          L3 = new LagrangianPoints(env->getStaticObjectField(cls, "L3", "Lorg/orekit/utils/LagrangianPoints;"));
          L4 = new LagrangianPoints(env->getStaticObjectField(cls, "L4", "Lorg/orekit/utils/LagrangianPoints;"));
          L5 = new LagrangianPoints(env->getStaticObjectField(cls, "L5", "Lorg/orekit/utils/LagrangianPoints;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LagrangianPoints LagrangianPoints::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LagrangianPoints(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fb92f5216db1480d], a0.this$));
      }

      JArray< LagrangianPoints > LagrangianPoints::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LagrangianPoints >(env->callStaticObjectMethod(cls, mids$[mid_values_23018153ccde58e4]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_LagrangianPoints_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LagrangianPoints_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LagrangianPoints_of_(t_LagrangianPoints *self, PyObject *args);
      static PyObject *t_LagrangianPoints_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LagrangianPoints_values(PyTypeObject *type);
      static PyObject *t_LagrangianPoints_get__parameters_(t_LagrangianPoints *self, void *data);
      static PyGetSetDef t_LagrangianPoints__fields_[] = {
        DECLARE_GET_FIELD(t_LagrangianPoints, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LagrangianPoints__methods_[] = {
        DECLARE_METHOD(t_LagrangianPoints, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LagrangianPoints, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LagrangianPoints, of_, METH_VARARGS),
        DECLARE_METHOD(t_LagrangianPoints, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LagrangianPoints, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LagrangianPoints)[] = {
        { Py_tp_methods, t_LagrangianPoints__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LagrangianPoints__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LagrangianPoints)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LagrangianPoints, t_LagrangianPoints, LagrangianPoints);
      PyObject *t_LagrangianPoints::wrap_Object(const LagrangianPoints& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LagrangianPoints::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LagrangianPoints *self = (t_LagrangianPoints *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LagrangianPoints::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LagrangianPoints::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LagrangianPoints *self = (t_LagrangianPoints *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LagrangianPoints::install(PyObject *module)
      {
        installType(&PY_TYPE(LagrangianPoints), &PY_TYPE_DEF(LagrangianPoints), module, "LagrangianPoints", 0);
      }

      void t_LagrangianPoints::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "class_", make_descriptor(LagrangianPoints::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "wrapfn_", make_descriptor(t_LagrangianPoints::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "boxfn_", make_descriptor(boxObject));
        env->getClass(LagrangianPoints::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L1", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L2", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L3", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L3)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L4", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L4)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L5", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L5)));
      }

      static PyObject *t_LagrangianPoints_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LagrangianPoints::initializeClass, 1)))
          return NULL;
        return t_LagrangianPoints::wrap_Object(LagrangianPoints(((t_LagrangianPoints *) arg)->object.this$));
      }
      static PyObject *t_LagrangianPoints_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LagrangianPoints::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LagrangianPoints_of_(t_LagrangianPoints *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LagrangianPoints_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LagrangianPoints result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::LagrangianPoints::valueOf(a0));
          return t_LagrangianPoints::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LagrangianPoints_values(PyTypeObject *type)
      {
        JArray< LagrangianPoints > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::LagrangianPoints::values());
        return JArray<jobject>(result.this$).wrap(t_LagrangianPoints::wrap_jobject);
      }
      static PyObject *t_LagrangianPoints_get__parameters_(t_LagrangianPoints *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemSatelliteEphemeris::class$ = NULL;
              jmethodID *OemSatelliteEphemeris::mids$ = NULL;
              bool OemSatelliteEphemeris::live$ = false;

              jclass OemSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d0a6ea578b35c45e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLjava/util/List;)V");
                  mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemSatelliteEphemeris::OemSatelliteEphemeris(const ::java::lang::String & a0, jdouble a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0a6ea578b35c45e, a0.this$, a1, a2.this$)) {}

              ::java::lang::String OemSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
              }

              jdouble OemSatelliteEphemeris::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
              }

              ::java::util::List OemSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
              }

              ::org::orekit::time::AbsoluteDate OemSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate OemSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              static PyObject *t_OemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemSatelliteEphemeris_init_(t_OemSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemSatelliteEphemeris_getId(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getMu(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getSegments(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getStart(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_getStop(t_OemSatelliteEphemeris *self);
              static PyObject *t_OemSatelliteEphemeris_get__id(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__mu(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__segments(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__start(t_OemSatelliteEphemeris *self, void *data);
              static PyObject *t_OemSatelliteEphemeris_get__stop(t_OemSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_OemSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, mu),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_OemSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_OemSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OemSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemSatelliteEphemeris)[] = {
                { Py_tp_methods, t_OemSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_OemSatelliteEphemeris_init_ },
                { Py_tp_getset, t_OemSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OemSatelliteEphemeris, t_OemSatelliteEphemeris, OemSatelliteEphemeris);

              void t_OemSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(OemSatelliteEphemeris), &PY_TYPE_DEF(OemSatelliteEphemeris), module, "OemSatelliteEphemeris", 0);
              }

              void t_OemSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "class_", make_descriptor(OemSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "wrapfn_", make_descriptor(t_OemSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_OemSatelliteEphemeris::wrap_Object(OemSatelliteEphemeris(((t_OemSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_OemSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemSatelliteEphemeris_init_(t_OemSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                OemSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sDK", ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OemSatelliteEphemeris(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemSatelliteEphemeris_getId(t_OemSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_OemSatelliteEphemeris_getMu(t_OemSatelliteEphemeris *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OemSatelliteEphemeris_getSegments(t_OemSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment));
              }

              static PyObject *t_OemSatelliteEphemeris_getStart(t_OemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSatelliteEphemeris_getStop(t_OemSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSatelliteEphemeris_get__id(t_OemSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__mu(t_OemSatelliteEphemeris *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__segments(t_OemSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__start(t_OemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OemSatelliteEphemeris_get__stop(t_OemSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIOffset.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIOffset::class$ = NULL;
      jmethodID *UTCTAIOffset::mids$ = NULL;
      bool UTCTAIOffset::live$ = false;

      jclass UTCTAIOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLeap_456d9a2f64d6b28d] = env->getMethodID(cls, "getLeap", "()D");
          mids$[mid_getMJD_f2f64475e4580546] = env->getMethodID(cls, "getMJD", "()I");
          mids$[mid_getOffset_e912d21057defe63] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getOffset_7bc0fd76ee915b72] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOffset_ceb6ee9e1c4bbdb1] = env->getMethodID(cls, "getOffset", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_getValidityStart_aaa854c403487cf3] = env->getMethodID(cls, "getValidityStart", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate UTCTAIOffset::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      jdouble UTCTAIOffset::getLeap() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_456d9a2f64d6b28d]);
      }

      jint UTCTAIOffset::getMJD() const
      {
        return env->callIntMethod(this$, mids$[mid_getMJD_f2f64475e4580546]);
      }

      jdouble UTCTAIOffset::getOffset(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCTAIOffset::getOffset(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOffset_7bc0fd76ee915b72], a0.this$));
      }

      jdouble UTCTAIOffset::getOffset(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOffset_ceb6ee9e1c4bbdb1], a0.this$, a1.this$);
      }

      ::org::orekit::time::AbsoluteDate UTCTAIOffset::getValidityStart() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidityStart_aaa854c403487cf3]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffset_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIOffset_getDate(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getLeap(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getMJD(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_getOffset(t_UTCTAIOffset *self, PyObject *args);
      static PyObject *t_UTCTAIOffset_getValidityStart(t_UTCTAIOffset *self);
      static PyObject *t_UTCTAIOffset_get__date(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__leap(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__mJD(t_UTCTAIOffset *self, void *data);
      static PyObject *t_UTCTAIOffset_get__validityStart(t_UTCTAIOffset *self, void *data);
      static PyGetSetDef t_UTCTAIOffset__fields_[] = {
        DECLARE_GET_FIELD(t_UTCTAIOffset, date),
        DECLARE_GET_FIELD(t_UTCTAIOffset, leap),
        DECLARE_GET_FIELD(t_UTCTAIOffset, mJD),
        DECLARE_GET_FIELD(t_UTCTAIOffset, validityStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UTCTAIOffset__methods_[] = {
        DECLARE_METHOD(t_UTCTAIOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIOffset, getDate, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getLeap, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getMJD, METH_NOARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getOffset, METH_VARARGS),
        DECLARE_METHOD(t_UTCTAIOffset, getValidityStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIOffset)[] = {
        { Py_tp_methods, t_UTCTAIOffset__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UTCTAIOffset__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCTAIOffset, t_UTCTAIOffset, UTCTAIOffset);

      void t_UTCTAIOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIOffset), &PY_TYPE_DEF(UTCTAIOffset), module, "UTCTAIOffset", 0);
      }

      void t_UTCTAIOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "class_", make_descriptor(UTCTAIOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "wrapfn_", make_descriptor(t_UTCTAIOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIOffset::initializeClass, 1)))
          return NULL;
        return t_UTCTAIOffset::wrap_Object(UTCTAIOffset(((t_UTCTAIOffset *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCTAIOffset_getDate(t_UTCTAIOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCTAIOffset_getLeap(t_UTCTAIOffset *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLeap());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_UTCTAIOffset_getMJD(t_UTCTAIOffset *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMJD());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_UTCTAIOffset_getOffset(t_UTCTAIOffset *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getOffset(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getOffset(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getOffset", args);
        return NULL;
      }

      static PyObject *t_UTCTAIOffset_getValidityStart(t_UTCTAIOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getValidityStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCTAIOffset_get__date(t_UTCTAIOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_UTCTAIOffset_get__leap(t_UTCTAIOffset *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLeap());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_UTCTAIOffset_get__mJD(t_UTCTAIOffset *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMJD());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_UTCTAIOffset_get__validityStart(t_UTCTAIOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getValidityStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonManeuverTriggersResetter.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonManeuverTriggersResetter::class$ = NULL;
          jmethodID *PythonManeuverTriggersResetter::mids$ = NULL;
          bool PythonManeuverTriggersResetter::live$ = false;

          jclass PythonManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_maneuverTriggered_9658cf3eaef14ef5] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_81fc6fb6078d2aa7] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonManeuverTriggersResetter::PythonManeuverTriggersResetter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonManeuverTriggersResetter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          void PythonManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_9658cf3eaef14ef5], a0.this$, a1);
          }

          jlong PythonManeuverTriggersResetter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonManeuverTriggersResetter::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_PythonManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonManeuverTriggersResetter_init_(t_PythonManeuverTriggersResetter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonManeuverTriggersResetter_finalize(t_PythonManeuverTriggersResetter *self);
          static PyObject *t_PythonManeuverTriggersResetter_maneuverTriggered(t_PythonManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_PythonManeuverTriggersResetter_pythonExtension(t_PythonManeuverTriggersResetter *self, PyObject *args);
          static void JNICALL t_PythonManeuverTriggersResetter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonManeuverTriggersResetter_resetState1(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonManeuverTriggersResetter_get__self(t_PythonManeuverTriggersResetter *self, void *data);
          static PyGetSetDef t_PythonManeuverTriggersResetter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonManeuverTriggersResetter, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_PythonManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) t_PythonManeuverTriggersResetter_init_ },
            { Py_tp_getset, t_PythonManeuverTriggersResetter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonManeuverTriggersResetter, t_PythonManeuverTriggersResetter, PythonManeuverTriggersResetter);

          void t_PythonManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonManeuverTriggersResetter), &PY_TYPE_DEF(PythonManeuverTriggersResetter), module, "PythonManeuverTriggersResetter", 1);
          }

          void t_PythonManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "class_", make_descriptor(PythonManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "wrapfn_", make_descriptor(t_PythonManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonManeuverTriggersResetter::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonManeuverTriggersResetter_pythonDecRef0 },
              { "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonManeuverTriggersResetter_resetState1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_PythonManeuverTriggersResetter::wrap_Object(PythonManeuverTriggersResetter(((t_PythonManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_PythonManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonManeuverTriggersResetter_init_(t_PythonManeuverTriggersResetter *self, PyObject *args, PyObject *kwds)
          {
            PythonManeuverTriggersResetter object((jobject) NULL);

            INT_CALL(object = PythonManeuverTriggersResetter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonManeuverTriggersResetter_finalize(t_PythonManeuverTriggersResetter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonManeuverTriggersResetter_maneuverTriggered(t_PythonManeuverTriggersResetter *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean a1;

            if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_PythonManeuverTriggersResetter_pythonExtension(t_PythonManeuverTriggersResetter *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static void JNICALL t_PythonManeuverTriggersResetter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonManeuverTriggersResetter_resetState1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static PyObject *t_PythonManeuverTriggersResetter_get__self(t_PythonManeuverTriggersResetter *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/PythonOdmParser.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *PythonOdmParser::class$ = NULL;
            jmethodID *PythonOdmParser::mids$ = NULL;
            bool PythonOdmParser::live$ = false;

            jclass PythonOdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/PythonOdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_3d5ffc54bfa065da] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getFileFormat_b51f613f857a5e84] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getHeader_720b26b998d380f3] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                mids$[mid_getMuSet_456d9a2f64d6b28d] = env->getMethodID(cls, "getMuSet", "()D");
                mids$[mid_inData_e470b6d9e0d979db] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_e470b6d9e0d979db] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_e470b6d9e0d979db] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_e470b6d9e0d979db] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");
                mids$[mid_setMuCreated_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMuCreated", "(D)V");
                mids$[mid_setMuParsed_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMuParsed", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonOdmParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            ::org::orekit::files::ccsds::utils::FileFormat PythonOdmParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_b51f613f857a5e84]));
            }

            jdouble PythonOdmParser::getMuSet() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuSet_456d9a2f64d6b28d]);
            }

            jlong PythonOdmParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonOdmParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
            }

            void PythonOdmParser::setMuCreated(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMuCreated_77e0f9a1f260e2e5], a0);
            }

            void PythonOdmParser::setMuParsed(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMuParsed_77e0f9a1f260e2e5], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            static PyObject *t_PythonOdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonOdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonOdmParser_of_(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_finalize(t_PythonOdmParser *self);
            static PyObject *t_PythonOdmParser_getFileFormat(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_getMuSet(t_PythonOdmParser *self);
            static PyObject *t_PythonOdmParser_pythonExtension(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_setMuCreated(t_PythonOdmParser *self, PyObject *arg);
            static PyObject *t_PythonOdmParser_setMuParsed(t_PythonOdmParser *self, PyObject *arg);
            static jobject JNICALL t_PythonOdmParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonOdmParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonOdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonOdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonOdmParser_get__self(t_PythonOdmParser *self, void *data);
            static PyObject *t_PythonOdmParser_get__fileFormat(t_PythonOdmParser *self, void *data);
            static int t_PythonOdmParser_set__muCreated(t_PythonOdmParser *self, PyObject *arg, void *data);
            static int t_PythonOdmParser_set__muParsed(t_PythonOdmParser *self, PyObject *arg, void *data);
            static PyObject *t_PythonOdmParser_get__muSet(t_PythonOdmParser *self, void *data);
            static PyObject *t_PythonOdmParser_get__parameters_(t_PythonOdmParser *self, void *data);
            static PyGetSetDef t_PythonOdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonOdmParser, fileFormat),
              DECLARE_SET_FIELD(t_PythonOdmParser, muCreated),
              DECLARE_SET_FIELD(t_PythonOdmParser, muParsed),
              DECLARE_GET_FIELD(t_PythonOdmParser, muSet),
              DECLARE_GET_FIELD(t_PythonOdmParser, self),
              DECLARE_GET_FIELD(t_PythonOdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonOdmParser__methods_[] = {
              DECLARE_METHOD(t_PythonOdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonOdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonOdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonOdmParser, getFileFormat, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, getMuSet, METH_NOARGS),
              DECLARE_METHOD(t_PythonOdmParser, pythonExtension, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, setMuCreated, METH_O),
              DECLARE_METHOD(t_PythonOdmParser, setMuParsed, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonOdmParser)[] = {
              { Py_tp_methods, t_PythonOdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonOdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonOdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
              NULL
            };

            DEFINE_TYPE(PythonOdmParser, t_PythonOdmParser, PythonOdmParser);
            PyObject *t_PythonOdmParser::wrap_Object(const PythonOdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonOdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonOdmParser *self = (t_PythonOdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonOdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonOdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonOdmParser *self = (t_PythonOdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonOdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonOdmParser), &PY_TYPE_DEF(PythonOdmParser), module, "PythonOdmParser", 1);
            }

            void t_PythonOdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "class_", make_descriptor(PythonOdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "wrapfn_", make_descriptor(t_PythonOdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonOdmParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonOdmParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonOdmParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonOdmParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonOdmParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;", (void *) t_PythonOdmParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonOdmParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonOdmParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonOdmParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonOdmParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonOdmParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonOdmParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonOdmParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonOdmParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonOdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonOdmParser::initializeClass, 1)))
                return NULL;
              return t_PythonOdmParser::wrap_Object(PythonOdmParser(((t_PythonOdmParser *) arg)->object.this$));
            }
            static PyObject *t_PythonOdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonOdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonOdmParser_of_(t_PythonOdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonOdmParser_finalize(t_PythonOdmParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonOdmParser_getFileFormat(t_PythonOdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFileFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(PythonOdmParser), (PyObject *) self, "getFileFormat", args, 2);
            }

            static PyObject *t_PythonOdmParser_getMuSet(t_PythonOdmParser *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuSet());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_PythonOdmParser_pythonExtension(t_PythonOdmParser *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  jlong result;
                  OBJ_CALL(result = self->object.pythonExtension());
                  return PyLong_FromLongLong((PY_LONG_LONG) result);
                }
                break;
               case 1:
                {
                  jlong a0;

                  if (!parseArgs(args, "J", &a0))
                  {
                    OBJ_CALL(self->object.pythonExtension(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
              return NULL;
            }

            static PyObject *t_PythonOdmParser_setMuCreated(t_PythonOdmParser *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMuCreated(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMuCreated", arg);
              return NULL;
            }

            static PyObject *t_PythonOdmParser_setMuParsed(t_PythonOdmParser *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMuParsed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMuParsed", arg);
              return NULL;
            }

            static jobject JNICALL t_PythonOdmParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::NdmConstituent value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &value))
              {
                throwTypeError("build", result);
                Py_DECREF(result);
              }
              else
              {
                jobj = jenv->NewLocalRef(value.this$);
                Py_DECREF(result);
                return jobj;
              }

              return (jobject) NULL;
            }

            static jboolean JNICALL t_PythonOdmParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jobject JNICALL t_PythonOdmParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, &value))
              {
                throwTypeError("getHeader", result);
                Py_DECREF(result);
              }
              else
              {
                jobj = jenv->NewLocalRef(value.this$);
                Py_DECREF(result);
                return jobj;
              }

              return (jobject) NULL;
            }

            static jboolean JNICALL t_PythonOdmParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonOdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonOdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonOdmParser_get__self(t_PythonOdmParser *self, void *data)
            {
              jlong ptr;
              OBJ_CALL(ptr = self->object.pythonExtension());
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                Py_INCREF(obj);
                return obj;
              }
              else
                Py_RETURN_NONE;
            }
            static PyObject *t_PythonOdmParser_get__parameters_(t_PythonOdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_PythonOdmParser_get__fileFormat(t_PythonOdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static int t_PythonOdmParser_set__muCreated(t_PythonOdmParser *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMuCreated(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "muCreated", arg);
              return -1;
            }

            static int t_PythonOdmParser_set__muParsed(t_PythonOdmParser *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMuParsed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "muParsed", arg);
              return -1;
            }

            static PyObject *t_PythonOdmParser_get__muSet(t_PythonOdmParser *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuSet());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AggregateBoundedPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "java/util/Collection.h"
#include "java/util/NavigableMap.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AggregateBoundedPropagator::class$ = NULL;
        jmethodID *AggregateBoundedPropagator::mids$ = NULL;
        bool AggregateBoundedPropagator::live$ = false;

        jclass AggregateBoundedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AggregateBoundedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_26b3669ec54017ce] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
            mids$[mid_init$_66ccee43e2526fcb] = env->getMethodID(cls, "<init>", "(Ljava/util/NavigableMap;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getInitialState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPropagators_08b23a9584a26070] = env->getMethodID(cls, "getPropagators", "()Ljava/util/NavigableMap;");
            mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getMass_e912d21057defe63] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_9658cf3eaef14ef5] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_propagateOrbit_6f58641238e8a9c4] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_basicPropagate_889031abe87f3b14] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AggregateBoundedPropagator::AggregateBoundedPropagator(const ::java::util::Collection & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_26b3669ec54017ce, a0.this$)) {}

        AggregateBoundedPropagator::AggregateBoundedPropagator(const ::java::util::NavigableMap & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_66ccee43e2526fcb, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::propagation::SpacecraftState AggregateBoundedPropagator::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_dd3e4a8d51055f1f]));
        }

        ::org::orekit::time::AbsoluteDate AggregateBoundedPropagator::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate AggregateBoundedPropagator::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates AggregateBoundedPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_20557c175f7cd899], a0.this$, a1.this$));
        }

        ::java::util::NavigableMap AggregateBoundedPropagator::getPropagators() const
        {
          return ::java::util::NavigableMap(env->callObjectMethod(this$, mids$[mid_getPropagators_08b23a9584a26070]));
        }

        void AggregateBoundedPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        static PyObject *t_AggregateBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregateBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AggregateBoundedPropagator_init_(t_AggregateBoundedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AggregateBoundedPropagator_getInitialState(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_getMaxDate(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_getMinDate(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_getPVCoordinates(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_getPropagators(t_AggregateBoundedPropagator *self);
        static PyObject *t_AggregateBoundedPropagator_resetInitialState(t_AggregateBoundedPropagator *self, PyObject *args);
        static PyObject *t_AggregateBoundedPropagator_get__initialState(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__maxDate(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__minDate(t_AggregateBoundedPropagator *self, void *data);
        static PyObject *t_AggregateBoundedPropagator_get__propagators(t_AggregateBoundedPropagator *self, void *data);
        static PyGetSetDef t_AggregateBoundedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, initialState),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, maxDate),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, minDate),
          DECLARE_GET_FIELD(t_AggregateBoundedPropagator, propagators),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AggregateBoundedPropagator__methods_[] = {
          DECLARE_METHOD(t_AggregateBoundedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, getPropagators, METH_NOARGS),
          DECLARE_METHOD(t_AggregateBoundedPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AggregateBoundedPropagator)[] = {
          { Py_tp_methods, t_AggregateBoundedPropagator__methods_ },
          { Py_tp_init, (void *) t_AggregateBoundedPropagator_init_ },
          { Py_tp_getset, t_AggregateBoundedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AggregateBoundedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(AggregateBoundedPropagator, t_AggregateBoundedPropagator, AggregateBoundedPropagator);

        void t_AggregateBoundedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AggregateBoundedPropagator), &PY_TYPE_DEF(AggregateBoundedPropagator), module, "AggregateBoundedPropagator", 0);
        }

        void t_AggregateBoundedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "class_", make_descriptor(AggregateBoundedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "wrapfn_", make_descriptor(t_AggregateBoundedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AggregateBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AggregateBoundedPropagator::initializeClass, 1)))
            return NULL;
          return t_AggregateBoundedPropagator::wrap_Object(AggregateBoundedPropagator(((t_AggregateBoundedPropagator *) arg)->object.this$));
        }
        static PyObject *t_AggregateBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AggregateBoundedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AggregateBoundedPropagator_init_(t_AggregateBoundedPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              AggregateBoundedPropagator object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                INT_CALL(object = AggregateBoundedPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::NavigableMap a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              AggregateBoundedPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::java::util::NavigableMap::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_, &a1, &a2))
              {
                INT_CALL(object = AggregateBoundedPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AggregateBoundedPropagator_getInitialState(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_getMaxDate(t_AggregateBoundedPropagator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_getMinDate(t_AggregateBoundedPropagator *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_getPVCoordinates(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_getPropagators(t_AggregateBoundedPropagator *self)
        {
          ::java::util::NavigableMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagators());
          return ::java::util::t_NavigableMap::wrap_Object(result);
        }

        static PyObject *t_AggregateBoundedPropagator_resetInitialState(t_AggregateBoundedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AggregateBoundedPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_AggregateBoundedPropagator_get__initialState(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__maxDate(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__minDate(t_AggregateBoundedPropagator *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AggregateBoundedPropagator_get__propagators(t_AggregateBoundedPropagator *self, void *data)
        {
          ::java::util::NavigableMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagators());
          return ::java::util::t_NavigableMap::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmWriter::class$ = NULL;
              jmethodID *AcmWriter::mids$ = NULL;
              bool AcmWriter::live$ = false;
              jdouble AcmWriter::CCSDS_ACM_VERS = (jdouble) 0;
              jint AcmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass AcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_da1de1cf1f97305e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_writeSegmentContent_17bd99da1e106002] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_ACM_VERS = env->getStaticDoubleField(cls, "CCSDS_ACM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmWriter::AcmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_da1de1cf1f97305e, a0.this$, a1.this$)) {}
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmWriter_of_(t_AcmWriter *self, PyObject *args);
              static int t_AcmWriter_init_(t_AcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmWriter_get__parameters_(t_AcmWriter *self, void *data);
              static PyGetSetDef t_AcmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_AcmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmWriter__methods_[] = {
                DECLARE_METHOD(t_AcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmWriter)[] = {
                { Py_tp_methods, t_AcmWriter__methods_ },
                { Py_tp_init, (void *) t_AcmWriter_init_ },
                { Py_tp_getset, t_AcmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(AcmWriter, t_AcmWriter, AcmWriter);
              PyObject *t_AcmWriter::wrap_Object(const AcmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AcmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmWriter *self = (t_AcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_AcmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AcmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmWriter *self = (t_AcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_AcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmWriter), &PY_TYPE_DEF(AcmWriter), module, "AcmWriter", 0);
              }

              void t_AcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "class_", make_descriptor(AcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "wrapfn_", make_descriptor(t_AcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "CCSDS_ACM_VERS", make_descriptor(AcmWriter::CCSDS_ACM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmWriter), "KVN_PADDING_WIDTH", make_descriptor(AcmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_AcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmWriter::initializeClass, 1)))
                  return NULL;
                return t_AcmWriter::wrap_Object(AcmWriter(((t_AcmWriter *) arg)->object.this$));
              }
              static PyObject *t_AcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmWriter_of_(t_AcmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AcmWriter_init_(t_AcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                AcmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
                {
                  INT_CALL(object = AcmWriter(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(Acm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_AcmWriter_get__parameters_(t_AcmWriter *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *MinMaxTreeTile::class$ = NULL;
          jmethodID *MinMaxTreeTile::mids$ = NULL;
          bool MinMaxTreeTile::live$ = false;

          jclass MinMaxTreeTile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCrossedBoundaryColumns_6846881cc754d53e] = env->getMethodID(cls, "getCrossedBoundaryColumns", "(III)[I");
              mids$[mid_getCrossedBoundaryRows_6846881cc754d53e] = env->getMethodID(cls, "getCrossedBoundaryRows", "(III)[I");
              mids$[mid_getLevels_f2f64475e4580546] = env->getMethodID(cls, "getLevels", "()I");
              mids$[mid_getMaxElevation_17d75a1004cd0f67] = env->getMethodID(cls, "getMaxElevation", "(III)D");
              mids$[mid_getMergeLevel_0877eb3f50bacbc0] = env->getMethodID(cls, "getMergeLevel", "(IIII)I");
              mids$[mid_getMinElevation_17d75a1004cd0f67] = env->getMethodID(cls, "getMinElevation", "(III)D");
              mids$[mid_isColumnMerging_e95e4c7cd3dd17ff] = env->getMethodID(cls, "isColumnMerging", "(I)Z");
              mids$[mid_locateMax_6846881cc754d53e] = env->getMethodID(cls, "locateMax", "(III)[I");
              mids$[mid_locateMin_6846881cc754d53e] = env->getMethodID(cls, "locateMin", "(III)[I");
              mids$[mid_processUpdatedElevation_ebc26dcaf4761286] = env->getMethodID(cls, "processUpdatedElevation", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jint > MinMaxTreeTile::getCrossedBoundaryColumns(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCrossedBoundaryColumns_6846881cc754d53e], a0, a1, a2));
          }

          JArray< jint > MinMaxTreeTile::getCrossedBoundaryRows(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCrossedBoundaryRows_6846881cc754d53e], a0, a1, a2));
          }

          jint MinMaxTreeTile::getLevels() const
          {
            return env->callIntMethod(this$, mids$[mid_getLevels_f2f64475e4580546]);
          }

          jdouble MinMaxTreeTile::getMaxElevation(jint a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_17d75a1004cd0f67], a0, a1, a2);
          }

          jint MinMaxTreeTile::getMergeLevel(jint a0, jint a1, jint a2, jint a3) const
          {
            return env->callIntMethod(this$, mids$[mid_getMergeLevel_0877eb3f50bacbc0], a0, a1, a2, a3);
          }

          jdouble MinMaxTreeTile::getMinElevation(jint a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinElevation_17d75a1004cd0f67], a0, a1, a2);
          }

          jboolean MinMaxTreeTile::isColumnMerging(jint a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isColumnMerging_e95e4c7cd3dd17ff], a0);
          }

          JArray< jint > MinMaxTreeTile::locateMax(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_locateMax_6846881cc754d53e], a0, a1, a2));
          }

          JArray< jint > MinMaxTreeTile::locateMin(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_locateMin_6846881cc754d53e], a0, a1, a2));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_MinMaxTreeTile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryColumns(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryRows(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getLevels(t_MinMaxTreeTile *self);
          static PyObject *t_MinMaxTreeTile_getMaxElevation(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getMergeLevel(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getMinElevation(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_isColumnMerging(t_MinMaxTreeTile *self, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_locateMax(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_locateMin(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_get__levels(t_MinMaxTreeTile *self, void *data);
          static PyGetSetDef t_MinMaxTreeTile__fields_[] = {
            DECLARE_GET_FIELD(t_MinMaxTreeTile, levels),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MinMaxTreeTile__methods_[] = {
            DECLARE_METHOD(t_MinMaxTreeTile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTile, getCrossedBoundaryColumns, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getCrossedBoundaryRows, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getLevels, METH_NOARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMaxElevation, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMergeLevel, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMinElevation, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, isColumnMerging, METH_O),
            DECLARE_METHOD(t_MinMaxTreeTile, locateMax, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, locateMin, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MinMaxTreeTile)[] = {
            { Py_tp_methods, t_MinMaxTreeTile__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MinMaxTreeTile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MinMaxTreeTile)[] = {
            &PY_TYPE_DEF(::org::orekit::rugged::raster::SimpleTile),
            NULL
          };

          DEFINE_TYPE(MinMaxTreeTile, t_MinMaxTreeTile, MinMaxTreeTile);

          void t_MinMaxTreeTile::install(PyObject *module)
          {
            installType(&PY_TYPE(MinMaxTreeTile), &PY_TYPE_DEF(MinMaxTreeTile), module, "MinMaxTreeTile", 0);
          }

          void t_MinMaxTreeTile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "class_", make_descriptor(MinMaxTreeTile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "wrapfn_", make_descriptor(t_MinMaxTreeTile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MinMaxTreeTile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MinMaxTreeTile::initializeClass, 1)))
              return NULL;
            return t_MinMaxTreeTile::wrap_Object(MinMaxTreeTile(((t_MinMaxTreeTile *) arg)->object.this$));
          }
          static PyObject *t_MinMaxTreeTile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MinMaxTreeTile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryColumns(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getCrossedBoundaryColumns(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getCrossedBoundaryColumns", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryRows(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getCrossedBoundaryRows(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getCrossedBoundaryRows", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getLevels(t_MinMaxTreeTile *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLevels());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_MinMaxTreeTile_getMaxElevation(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getMaxElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(MinMaxTreeTile), (PyObject *) self, "getMaxElevation", args, 2);
          }

          static PyObject *t_MinMaxTreeTile_getMergeLevel(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint result;

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getMergeLevel(a0, a1, a2, a3));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getMergeLevel", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getMinElevation(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getMinElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(MinMaxTreeTile), (PyObject *) self, "getMinElevation", args, 2);
          }

          static PyObject *t_MinMaxTreeTile_isColumnMerging(t_MinMaxTreeTile *self, PyObject *arg)
          {
            jint a0;
            jboolean result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.isColumnMerging(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isColumnMerging", arg);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_locateMax(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.locateMax(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "locateMax", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_locateMin(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.locateMin(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "locateMin", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_get__levels(t_MinMaxTreeTile *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLevels());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/fitting/MultivariateNormalMixtureExpectationMaximization.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace fitting {

        ::java::lang::Class *MultivariateNormalMixtureExpectationMaximization::class$ = NULL;
        jmethodID *MultivariateNormalMixtureExpectationMaximization::mids$ = NULL;
        bool MultivariateNormalMixtureExpectationMaximization::live$ = false;

        jclass MultivariateNormalMixtureExpectationMaximization::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/fitting/MultivariateNormalMixtureExpectationMaximization");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d660c7a97bf55272] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_estimate_044a13274eb485cf] = env->getStaticMethodID(cls, "estimate", "([[DI)Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;");
            mids$[mid_fit_c3745fd1d332b23f] = env->getMethodID(cls, "fit", "(Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;)V");
            mids$[mid_fit_36de2024b54f35e2] = env->getMethodID(cls, "fit", "(Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;ID)V");
            mids$[mid_getFittedModel_367a92862e8a241a] = env->getMethodID(cls, "getFittedModel", "()Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;");
            mids$[mid_getLogLikelihood_456d9a2f64d6b28d] = env->getMethodID(cls, "getLogLikelihood", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateNormalMixtureExpectationMaximization::MultivariateNormalMixtureExpectationMaximization(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d660c7a97bf55272, a0.this$)) {}

        ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution MultivariateNormalMixtureExpectationMaximization::estimate(const JArray< JArray< jdouble > > & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution(env->callStaticObjectMethod(cls, mids$[mid_estimate_044a13274eb485cf], a0.this$, a1));
        }

        void MultivariateNormalMixtureExpectationMaximization::fit(const ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_fit_c3745fd1d332b23f], a0.this$);
        }

        void MultivariateNormalMixtureExpectationMaximization::fit(const ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution & a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_fit_36de2024b54f35e2], a0.this$, a1, a2);
        }

        ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution MultivariateNormalMixtureExpectationMaximization::getFittedModel() const
        {
          return ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution(env->callObjectMethod(this$, mids$[mid_getFittedModel_367a92862e8a241a]));
        }

        jdouble MultivariateNormalMixtureExpectationMaximization::getLogLikelihood() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLogLikelihood_456d9a2f64d6b28d]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace fitting {
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultivariateNormalMixtureExpectationMaximization_init_(t_MultivariateNormalMixtureExpectationMaximization *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_estimate(PyTypeObject *type, PyObject *args);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_fit(t_MultivariateNormalMixtureExpectationMaximization *self, PyObject *args);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_getFittedModel(t_MultivariateNormalMixtureExpectationMaximization *self);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_getLogLikelihood(t_MultivariateNormalMixtureExpectationMaximization *self);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_get__fittedModel(t_MultivariateNormalMixtureExpectationMaximization *self, void *data);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_get__logLikelihood(t_MultivariateNormalMixtureExpectationMaximization *self, void *data);
        static PyGetSetDef t_MultivariateNormalMixtureExpectationMaximization__fields_[] = {
          DECLARE_GET_FIELD(t_MultivariateNormalMixtureExpectationMaximization, fittedModel),
          DECLARE_GET_FIELD(t_MultivariateNormalMixtureExpectationMaximization, logLikelihood),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultivariateNormalMixtureExpectationMaximization__methods_[] = {
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, estimate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, fit, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, getFittedModel, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, getLogLikelihood, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateNormalMixtureExpectationMaximization)[] = {
          { Py_tp_methods, t_MultivariateNormalMixtureExpectationMaximization__methods_ },
          { Py_tp_init, (void *) t_MultivariateNormalMixtureExpectationMaximization_init_ },
          { Py_tp_getset, t_MultivariateNormalMixtureExpectationMaximization__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateNormalMixtureExpectationMaximization)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultivariateNormalMixtureExpectationMaximization, t_MultivariateNormalMixtureExpectationMaximization, MultivariateNormalMixtureExpectationMaximization);

        void t_MultivariateNormalMixtureExpectationMaximization::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateNormalMixtureExpectationMaximization), &PY_TYPE_DEF(MultivariateNormalMixtureExpectationMaximization), module, "MultivariateNormalMixtureExpectationMaximization", 0);
        }

        void t_MultivariateNormalMixtureExpectationMaximization::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalMixtureExpectationMaximization), "class_", make_descriptor(MultivariateNormalMixtureExpectationMaximization::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalMixtureExpectationMaximization), "wrapfn_", make_descriptor(t_MultivariateNormalMixtureExpectationMaximization::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalMixtureExpectationMaximization), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateNormalMixtureExpectationMaximization::initializeClass, 1)))
            return NULL;
          return t_MultivariateNormalMixtureExpectationMaximization::wrap_Object(MultivariateNormalMixtureExpectationMaximization(((t_MultivariateNormalMixtureExpectationMaximization *) arg)->object.this$));
        }
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateNormalMixtureExpectationMaximization::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultivariateNormalMixtureExpectationMaximization_init_(t_MultivariateNormalMixtureExpectationMaximization *self, PyObject *args, PyObject *kwds)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          MultivariateNormalMixtureExpectationMaximization object((jobject) NULL);

          if (!parseArgs(args, "[[D", &a0))
          {
            INT_CALL(object = MultivariateNormalMixtureExpectationMaximization(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_estimate(PyTypeObject *type, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          jint a1;
          ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution result((jobject) NULL);

          if (!parseArgs(args, "[[DI", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::fitting::MultivariateNormalMixtureExpectationMaximization::estimate(a0, a1));
            return ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "estimate", args);
          return NULL;
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_fit(t_MultivariateNormalMixtureExpectationMaximization *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution::initializeClass, &a0, &p0, ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::parameters_))
              {
                OBJ_CALL(self->object.fit(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "KID", ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution::initializeClass, &a0, &p0, ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::parameters_, &a1, &a2))
              {
                OBJ_CALL(self->object.fit(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "fit", args);
          return NULL;
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_getFittedModel(t_MultivariateNormalMixtureExpectationMaximization *self)
        {
          ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution result((jobject) NULL);
          OBJ_CALL(result = self->object.getFittedModel());
          return ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::wrap_Object(result);
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_getLogLikelihood(t_MultivariateNormalMixtureExpectationMaximization *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLogLikelihood());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_get__fittedModel(t_MultivariateNormalMixtureExpectationMaximization *self, void *data)
        {
          ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution value((jobject) NULL);
          OBJ_CALL(value = self->object.getFittedModel());
          return ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::wrap_Object(value);
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_get__logLikelihood(t_MultivariateNormalMixtureExpectationMaximization *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLogLikelihood());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFieldFactory::class$ = NULL;
        jmethodID *GeoMagneticFieldFactory::mids$ = NULL;
        bool GeoMagneticFieldFactory::live$ = false;

        jclass GeoMagneticFieldFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFieldFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getField_391592e224573f6b] = env->getStaticMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getGeoMagneticFields_2e55f41473500ba6] = env->getStaticMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
            mids$[mid_getIGRF_e74dfaa8c09512d5] = env->getStaticMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_e74dfaa8c09512d5] = env->getStaticMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getField_391592e224573f6b], a0.this$, a1));
        }

        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields GeoMagneticFieldFactory::getGeoMagneticFields()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callStaticObjectMethod(cls, mids$[mid_getGeoMagneticFields_2e55f41473500ba6]));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getIGRF(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getIGRF_e74dfaa8c09512d5], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFieldFactory::getWMM(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::models::earth::GeoMagneticField(env->callStaticObjectMethod(cls, mids$[mid_getWMM_e74dfaa8c09512d5], a0));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        static PyObject *t_GeoMagneticFieldFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_getField(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory_getGeoMagneticFields(PyTypeObject *type);
        static PyObject *t_GeoMagneticFieldFactory_getIGRF(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_getWMM(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory_get__geoMagneticFields(t_GeoMagneticFieldFactory *self, void *data);
        static PyGetSetDef t_GeoMagneticFieldFactory__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticFieldFactory, geoMagneticFields),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticFieldFactory__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFieldFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getField, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getGeoMagneticFields, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getIGRF, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory, getWMM, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFieldFactory)[] = {
          { Py_tp_methods, t_GeoMagneticFieldFactory__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticFieldFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFieldFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFieldFactory, t_GeoMagneticFieldFactory, GeoMagneticFieldFactory);

        void t_GeoMagneticFieldFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFieldFactory), &PY_TYPE_DEF(GeoMagneticFieldFactory), module, "GeoMagneticFieldFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "FieldModel", make_descriptor(&PY_TYPE_DEF(GeoMagneticFieldFactory$FieldModel)));
        }

        void t_GeoMagneticFieldFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "class_", make_descriptor(GeoMagneticFieldFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "wrapfn_", make_descriptor(t_GeoMagneticFieldFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticFieldFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFieldFactory::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFieldFactory::wrap_Object(GeoMagneticFieldFactory(((t_GeoMagneticFieldFactory *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFieldFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFieldFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFieldFactory_getField(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticFieldFactory_getGeoMagneticFields(PyTypeObject *type)
        {
          ::org::orekit::models::earth::LazyLoadedGeoMagneticFields result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getGeoMagneticFields());
          return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(result);
        }

        static PyObject *t_GeoMagneticFieldFactory_getIGRF(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_GeoMagneticFieldFactory_getWMM(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory::getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getWMM", arg);
          return NULL;
        }

        static PyObject *t_GeoMagneticFieldFactory_get__geoMagneticFields(t_GeoMagneticFieldFactory *self, void *data)
        {
          ::org::orekit::models::earth::LazyLoadedGeoMagneticFields value((jobject) NULL);
          OBJ_CALL(value = self->object.getGeoMagneticFields());
          return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractAlfriend1999.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *AbstractAlfriend1999::class$ = NULL;
              jmethodID *AbstractAlfriend1999::mids$ = NULL;
              bool AbstractAlfriend1999::live$ = false;

              jclass AbstractAlfriend1999::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractAlfriend1999");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_23211d1e26c9c2c1] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_f7ffb3ec4f2d0056] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractAlfriend1999::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_23211d1e26c9c2c1], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractAlfriend1999::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_f7ffb3ec4f2d0056], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_AbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractAlfriend1999_compute(t_AbstractAlfriend1999 *self, PyObject *args);

              static PyMethodDef t_AbstractAlfriend1999__methods_[] = {
                DECLARE_METHOD(t_AbstractAlfriend1999, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractAlfriend1999, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractAlfriend1999, compute, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AbstractAlfriend1999)[] = {
                { Py_tp_methods, t_AbstractAlfriend1999__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AbstractAlfriend1999)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(AbstractAlfriend1999, t_AbstractAlfriend1999, AbstractAlfriend1999);

              void t_AbstractAlfriend1999::install(PyObject *module)
              {
                installType(&PY_TYPE(AbstractAlfriend1999), &PY_TYPE_DEF(AbstractAlfriend1999), module, "AbstractAlfriend1999", 0);
              }

              void t_AbstractAlfriend1999::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlfriend1999), "class_", make_descriptor(AbstractAlfriend1999::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlfriend1999), "wrapfn_", make_descriptor(t_AbstractAlfriend1999::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlfriend1999), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AbstractAlfriend1999::initializeClass, 1)))
                  return NULL;
                return t_AbstractAlfriend1999::wrap_Object(AbstractAlfriend1999(((t_AbstractAlfriend1999 *) arg)->object.this$));
              }
              static PyObject *t_AbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AbstractAlfriend1999::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AbstractAlfriend1999_compute(t_AbstractAlfriend1999 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(AbstractAlfriend1999), (PyObject *) self, "compute", args, 2);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorMeanPlaneCrossing::class$ = NULL;
        jmethodID *SensorMeanPlaneCrossing::mids$ = NULL;
        bool SensorMeanPlaneCrossing::live$ = false;

        jclass SensorMeanPlaneCrossing::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorMeanPlaneCrossing");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8fb19dc0a619421b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/rugged/utils/SpacecraftToObservedBody;IIZZID)V");
            mids$[mid_init$_96cf0cbbd44dbb20] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/rugged/utils/SpacecraftToObservedBody;IIZZIDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/util/stream/Stream;)V");
            mids$[mid_find_bb3829bef233d8dc] = env->getMethodID(cls, "find", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult;");
            mids$[mid_getAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAccuracy", "()D");
            mids$[mid_getCachedResults_a68a17dd093f796d] = env->getMethodID(cls, "getCachedResults", "()Ljava/util/stream/Stream;");
            mids$[mid_getMaxEval_f2f64475e4580546] = env->getMethodID(cls, "getMaxEval", "()I");
            mids$[mid_getMaxLine_f2f64475e4580546] = env->getMethodID(cls, "getMaxLine", "()I");
            mids$[mid_getMeanPlaneNormal_17a952530a808943] = env->getMethodID(cls, "getMeanPlaneNormal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getMinLine_f2f64475e4580546] = env->getMethodID(cls, "getMinLine", "()I");
            mids$[mid_getScToBody_38f80fac5aafac2a] = env->getMethodID(cls, "getScToBody", "()Lorg/orekit/rugged/utils/SpacecraftToObservedBody;");
            mids$[mid_getSensor_6a6fc27bf32a43cf] = env->getMethodID(cls, "getSensor", "()Lorg/orekit/rugged/linesensor/LineSensor;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorMeanPlaneCrossing::SensorMeanPlaneCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a1, jint a2, jint a3, jboolean a4, jboolean a5, jint a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fb19dc0a619421b, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

        SensorMeanPlaneCrossing::SensorMeanPlaneCrossing(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a1, jint a2, jint a3, jboolean a4, jboolean a5, jint a6, jdouble a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::java::util::stream::Stream & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96cf0cbbd44dbb20, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$)) {}

        ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult SensorMeanPlaneCrossing::find(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult(env->callObjectMethod(this$, mids$[mid_find_bb3829bef233d8dc], a0.this$));
        }

        jdouble SensorMeanPlaneCrossing::getAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAccuracy_456d9a2f64d6b28d]);
        }

        ::java::util::stream::Stream SensorMeanPlaneCrossing::getCachedResults() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getCachedResults_a68a17dd093f796d]));
        }

        jint SensorMeanPlaneCrossing::getMaxEval() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEval_f2f64475e4580546]);
        }

        jint SensorMeanPlaneCrossing::getMaxLine() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxLine_f2f64475e4580546]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing::getMeanPlaneNormal() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getMeanPlaneNormal_17a952530a808943]));
        }

        jint SensorMeanPlaneCrossing::getMinLine() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinLine_f2f64475e4580546]);
        }

        ::org::orekit::rugged::utils::SpacecraftToObservedBody SensorMeanPlaneCrossing::getScToBody() const
        {
          return ::org::orekit::rugged::utils::SpacecraftToObservedBody(env->callObjectMethod(this$, mids$[mid_getScToBody_38f80fac5aafac2a]));
        }

        ::org::orekit::rugged::linesensor::LineSensor SensorMeanPlaneCrossing::getSensor() const
        {
          return ::org::orekit::rugged::linesensor::LineSensor(env->callObjectMethod(this$, mids$[mid_getSensor_6a6fc27bf32a43cf]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {
        static PyObject *t_SensorMeanPlaneCrossing_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorMeanPlaneCrossing_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorMeanPlaneCrossing_init_(t_SensorMeanPlaneCrossing *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorMeanPlaneCrossing_find(t_SensorMeanPlaneCrossing *self, PyObject *arg);
        static PyObject *t_SensorMeanPlaneCrossing_getAccuracy(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getCachedResults(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMaxEval(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMaxLine(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMeanPlaneNormal(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getMinLine(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getScToBody(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_getSensor(t_SensorMeanPlaneCrossing *self);
        static PyObject *t_SensorMeanPlaneCrossing_get__accuracy(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__cachedResults(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__maxEval(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__maxLine(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__meanPlaneNormal(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__minLine(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__scToBody(t_SensorMeanPlaneCrossing *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing_get__sensor(t_SensorMeanPlaneCrossing *self, void *data);
        static PyGetSetDef t_SensorMeanPlaneCrossing__fields_[] = {
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, accuracy),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, cachedResults),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, maxEval),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, maxLine),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, meanPlaneNormal),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, minLine),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, scToBody),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing, sensor),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SensorMeanPlaneCrossing__methods_[] = {
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, find, METH_O),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getCachedResults, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMaxEval, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMaxLine, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMeanPlaneNormal, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getMinLine, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getScToBody, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing, getSensor, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorMeanPlaneCrossing)[] = {
          { Py_tp_methods, t_SensorMeanPlaneCrossing__methods_ },
          { Py_tp_init, (void *) t_SensorMeanPlaneCrossing_init_ },
          { Py_tp_getset, t_SensorMeanPlaneCrossing__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorMeanPlaneCrossing)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorMeanPlaneCrossing, t_SensorMeanPlaneCrossing, SensorMeanPlaneCrossing);

        void t_SensorMeanPlaneCrossing::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorMeanPlaneCrossing), &PY_TYPE_DEF(SensorMeanPlaneCrossing), module, "SensorMeanPlaneCrossing", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "CrossingResult", make_descriptor(&PY_TYPE_DEF(SensorMeanPlaneCrossing$CrossingResult)));
        }

        void t_SensorMeanPlaneCrossing::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "class_", make_descriptor(SensorMeanPlaneCrossing::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "wrapfn_", make_descriptor(t_SensorMeanPlaneCrossing::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorMeanPlaneCrossing_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorMeanPlaneCrossing::initializeClass, 1)))
            return NULL;
          return t_SensorMeanPlaneCrossing::wrap_Object(SensorMeanPlaneCrossing(((t_SensorMeanPlaneCrossing *) arg)->object.this$));
        }
        static PyObject *t_SensorMeanPlaneCrossing_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorMeanPlaneCrossing::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorMeanPlaneCrossing_init_(t_SensorMeanPlaneCrossing *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
              ::org::orekit::rugged::utils::SpacecraftToObservedBody a1((jobject) NULL);
              jint a2;
              jint a3;
              jboolean a4;
              jboolean a5;
              jint a6;
              jdouble a7;
              SensorMeanPlaneCrossing object((jobject) NULL);

              if (!parseArgs(args, "kkIIZZID", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = SensorMeanPlaneCrossing(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
              ::org::orekit::rugged::utils::SpacecraftToObservedBody a1((jobject) NULL);
              jint a2;
              jint a3;
              jboolean a4;
              jboolean a5;
              jint a6;
              jdouble a7;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::java::util::stream::Stream a9((jobject) NULL);
              PyTypeObject **p9;
              SensorMeanPlaneCrossing object((jobject) NULL);

              if (!parseArgs(args, "kkIIZZIDkK", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::java::util::stream::t_Stream::parameters_))
              {
                INT_CALL(object = SensorMeanPlaneCrossing(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorMeanPlaneCrossing_find(t_SensorMeanPlaneCrossing *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing$CrossingResult result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.find(a0));
            return ::org::orekit::rugged::linesensor::t_SensorMeanPlaneCrossing$CrossingResult::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "find", arg);
          return NULL;
        }

        static PyObject *t_SensorMeanPlaneCrossing_getAccuracy(t_SensorMeanPlaneCrossing *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getCachedResults(t_SensorMeanPlaneCrossing *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getCachedResults());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::rugged::linesensor::PY_TYPE(SensorMeanPlaneCrossing$CrossingResult));
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMaxEval(t_SensorMeanPlaneCrossing *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEval());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMaxLine(t_SensorMeanPlaneCrossing *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxLine());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMeanPlaneNormal(t_SensorMeanPlaneCrossing *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeanPlaneNormal());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getMinLine(t_SensorMeanPlaneCrossing *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinLine());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getScToBody(t_SensorMeanPlaneCrossing *self)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_getSensor(t_SensorMeanPlaneCrossing *self)
        {
          ::org::orekit::rugged::linesensor::LineSensor result((jobject) NULL);
          OBJ_CALL(result = self->object.getSensor());
          return ::org::orekit::rugged::linesensor::t_LineSensor::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__accuracy(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__cachedResults(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getCachedResults());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__maxEval(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEval());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__maxLine(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxLine());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__meanPlaneNormal(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeanPlaneNormal());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__minLine(t_SensorMeanPlaneCrossing *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinLine());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__scToBody(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing_get__sensor(t_SensorMeanPlaneCrossing *self, void *data)
        {
          ::org::orekit::rugged::linesensor::LineSensor value((jobject) NULL);
          OBJ_CALL(value = self->object.getSensor());
          return ::org::orekit::rugged::linesensor::t_LineSensor::wrap_Object(value);
        }
      }
    }
  }
}
