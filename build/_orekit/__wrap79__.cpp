#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/FESCnmSnmReader.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *FESCnmSnmReader::class$ = NULL;
          jmethodID *FESCnmSnmReader::mids$ = NULL;
          bool FESCnmSnmReader::live$ = false;

          jclass FESCnmSnmReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/FESCnmSnmReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b7ec643e4edd96c5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
              mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FESCnmSnmReader::FESCnmSnmReader(const ::java::lang::String & a0, jdouble a1) : ::org::orekit::forces::gravity::potential::OceanTidesReader(env->newObject(initializeClass, &mids$, mid_init$_b7ec643e4edd96c5, a0.this$, a1)) {}

          void FESCnmSnmReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
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
      namespace gravity {
        namespace potential {
          static PyObject *t_FESCnmSnmReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FESCnmSnmReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FESCnmSnmReader_init_(t_FESCnmSnmReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FESCnmSnmReader_loadData(t_FESCnmSnmReader *self, PyObject *args);

          static PyMethodDef t_FESCnmSnmReader__methods_[] = {
            DECLARE_METHOD(t_FESCnmSnmReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCnmSnmReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FESCnmSnmReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FESCnmSnmReader)[] = {
            { Py_tp_methods, t_FESCnmSnmReader__methods_ },
            { Py_tp_init, (void *) t_FESCnmSnmReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FESCnmSnmReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::OceanTidesReader),
            NULL
          };

          DEFINE_TYPE(FESCnmSnmReader, t_FESCnmSnmReader, FESCnmSnmReader);

          void t_FESCnmSnmReader::install(PyObject *module)
          {
            installType(&PY_TYPE(FESCnmSnmReader), &PY_TYPE_DEF(FESCnmSnmReader), module, "FESCnmSnmReader", 0);
          }

          void t_FESCnmSnmReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "class_", make_descriptor(FESCnmSnmReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "wrapfn_", make_descriptor(t_FESCnmSnmReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FESCnmSnmReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FESCnmSnmReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FESCnmSnmReader::initializeClass, 1)))
              return NULL;
            return t_FESCnmSnmReader::wrap_Object(FESCnmSnmReader(((t_FESCnmSnmReader *) arg)->object.this$));
          }
          static PyObject *t_FESCnmSnmReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FESCnmSnmReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FESCnmSnmReader_init_(t_FESCnmSnmReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            FESCnmSnmReader object((jobject) NULL);

            if (!parseArgs(args, "sD", &a0, &a1))
            {
              INT_CALL(object = FESCnmSnmReader(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FESCnmSnmReader_loadData(t_FESCnmSnmReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FESCnmSnmReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/Sum.h"
#include "org/hipparchus/stat/descriptive/summary/Sum.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *Sum::class$ = NULL;
          jmethodID *Sum::mids$ = NULL;
          bool Sum::live$ = false;

          jclass Sum::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/Sum");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_860425ec69ccf3c3] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/Sum;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_e7d254c0bec0b758] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/Sum;");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_0f0d79795aa485ac] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Sum::Sum() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void Sum::aggregate(const Sum & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_860425ec69ccf3c3], a0.this$);
          }

          void Sum::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          Sum Sum::copy() const
          {
            return Sum(env->callObjectMethod(this$, mids$[mid_copy_e7d254c0bec0b758]));
          }

          jdouble Sum::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jdouble Sum::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0f0d79795aa485ac], a0.this$, a1.this$, a2, a3);
          }

          jlong Sum::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble Sum::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void Sum::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
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
    namespace stat {
      namespace descriptive {
        namespace summary {
          static PyObject *t_Sum_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sum_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Sum_init_(t_Sum *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Sum_aggregate(t_Sum *self, PyObject *arg);
          static PyObject *t_Sum_clear(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_copy(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_evaluate(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_getN(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_getResult(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_increment(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_get__n(t_Sum *self, void *data);
          static PyObject *t_Sum_get__result(t_Sum *self, void *data);
          static PyGetSetDef t_Sum__fields_[] = {
            DECLARE_GET_FIELD(t_Sum, n),
            DECLARE_GET_FIELD(t_Sum, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sum__methods_[] = {
            DECLARE_METHOD(t_Sum, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sum, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sum, aggregate, METH_O),
            DECLARE_METHOD(t_Sum, clear, METH_VARARGS),
            DECLARE_METHOD(t_Sum, copy, METH_VARARGS),
            DECLARE_METHOD(t_Sum, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Sum, getN, METH_VARARGS),
            DECLARE_METHOD(t_Sum, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Sum, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sum)[] = {
            { Py_tp_methods, t_Sum__methods_ },
            { Py_tp_init, (void *) t_Sum_init_ },
            { Py_tp_getset, t_Sum__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sum)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Sum, t_Sum, Sum);

          void t_Sum::install(PyObject *module)
          {
            installType(&PY_TYPE(Sum), &PY_TYPE_DEF(Sum), module, "Sum", 0);
          }

          void t_Sum::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "class_", make_descriptor(Sum::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "wrapfn_", make_descriptor(t_Sum::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Sum_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sum::initializeClass, 1)))
              return NULL;
            return t_Sum::wrap_Object(Sum(((t_Sum *) arg)->object.this$));
          }
          static PyObject *t_Sum_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sum::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Sum_init_(t_Sum *self, PyObject *args, PyObject *kwds)
          {
            Sum object((jobject) NULL);

            INT_CALL(object = Sum());
            self->object = object;

            return 0;
          }

          static PyObject *t_Sum_aggregate(t_Sum *self, PyObject *arg)
          {
            Sum a0((jobject) NULL);

            if (!parseArg(arg, "k", Sum::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Sum_clear(t_Sum *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Sum_copy(t_Sum *self, PyObject *args)
          {
            Sum result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Sum::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Sum_evaluate(t_Sum *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Sum_getN(t_Sum *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Sum_getResult(t_Sum *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Sum_increment(t_Sum *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Sum_get__n(t_Sum *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Sum_get__result(t_Sum *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/DcbStation.h"
#include "org/orekit/files/sinex/DcbDescription.h"
#include "java/lang/Iterable.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbStation::class$ = NULL;
        jmethodID *DcbStation::mids$ = NULL;
        bool DcbStation::live$ = false;

        jclass DcbStation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbStation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addDcb_89b9223a0403fa13] = env->getMethodID(cls, "addDcb", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/files/sinex/Dcb;)V");
            mids$[mid_getAvailableSatelliteSystems_2827db9fa97d68f8] = env->getMethodID(cls, "getAvailableSatelliteSystems", "()Ljava/lang/Iterable;");
            mids$[mid_getDcbData_919f393398371a59] = env->getMethodID(cls, "getDcbData", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/files/sinex/Dcb;");
            mids$[mid_getDescription_e96c642b778d7ae9] = env->getMethodID(cls, "getDescription", "()Lorg/orekit/files/sinex/DcbDescription;");
            mids$[mid_getSiteCode_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSiteCode", "()Ljava/lang/String;");
            mids$[mid_setDescription_1a571fee8223b5dd] = env->getMethodID(cls, "setDescription", "(Lorg/orekit/files/sinex/DcbDescription;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbStation::DcbStation(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

        void DcbStation::addDcb(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::files::sinex::Dcb & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDcb_89b9223a0403fa13], a0.this$, a1.this$);
        }

        ::java::lang::Iterable DcbStation::getAvailableSatelliteSystems() const
        {
          return ::java::lang::Iterable(env->callObjectMethod(this$, mids$[mid_getAvailableSatelliteSystems_2827db9fa97d68f8]));
        }

        ::org::orekit::files::sinex::Dcb DcbStation::getDcbData(const ::org::orekit::gnss::SatelliteSystem & a0) const
        {
          return ::org::orekit::files::sinex::Dcb(env->callObjectMethod(this$, mids$[mid_getDcbData_919f393398371a59], a0.this$));
        }

        ::org::orekit::files::sinex::DcbDescription DcbStation::getDescription() const
        {
          return ::org::orekit::files::sinex::DcbDescription(env->callObjectMethod(this$, mids$[mid_getDescription_e96c642b778d7ae9]));
        }

        ::java::lang::String DcbStation::getSiteCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteCode_1c1fa1e935d6cdcf]));
        }

        void DcbStation::setDescription(const ::org::orekit::files::sinex::DcbDescription & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDescription_1a571fee8223b5dd], a0.this$);
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
      namespace sinex {
        static PyObject *t_DcbStation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbStation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbStation_init_(t_DcbStation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbStation_addDcb(t_DcbStation *self, PyObject *args);
        static PyObject *t_DcbStation_getAvailableSatelliteSystems(t_DcbStation *self);
        static PyObject *t_DcbStation_getDcbData(t_DcbStation *self, PyObject *arg);
        static PyObject *t_DcbStation_getDescription(t_DcbStation *self);
        static PyObject *t_DcbStation_getSiteCode(t_DcbStation *self);
        static PyObject *t_DcbStation_setDescription(t_DcbStation *self, PyObject *arg);
        static PyObject *t_DcbStation_get__availableSatelliteSystems(t_DcbStation *self, void *data);
        static PyObject *t_DcbStation_get__description(t_DcbStation *self, void *data);
        static int t_DcbStation_set__description(t_DcbStation *self, PyObject *arg, void *data);
        static PyObject *t_DcbStation_get__siteCode(t_DcbStation *self, void *data);
        static PyGetSetDef t_DcbStation__fields_[] = {
          DECLARE_GET_FIELD(t_DcbStation, availableSatelliteSystems),
          DECLARE_GETSET_FIELD(t_DcbStation, description),
          DECLARE_GET_FIELD(t_DcbStation, siteCode),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbStation__methods_[] = {
          DECLARE_METHOD(t_DcbStation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbStation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbStation, addDcb, METH_VARARGS),
          DECLARE_METHOD(t_DcbStation, getAvailableSatelliteSystems, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, getDcbData, METH_O),
          DECLARE_METHOD(t_DcbStation, getDescription, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, getSiteCode, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, setDescription, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbStation)[] = {
          { Py_tp_methods, t_DcbStation__methods_ },
          { Py_tp_init, (void *) t_DcbStation_init_ },
          { Py_tp_getset, t_DcbStation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbStation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbStation, t_DcbStation, DcbStation);

        void t_DcbStation::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbStation), &PY_TYPE_DEF(DcbStation), module, "DcbStation", 0);
        }

        void t_DcbStation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "class_", make_descriptor(DcbStation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "wrapfn_", make_descriptor(t_DcbStation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbStation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbStation::initializeClass, 1)))
            return NULL;
          return t_DcbStation::wrap_Object(DcbStation(((t_DcbStation *) arg)->object.this$));
        }
        static PyObject *t_DcbStation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbStation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbStation_init_(t_DcbStation *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          DcbStation object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DcbStation(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DcbStation_addDcb(t_DcbStation *self, PyObject *args)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::files::sinex::Dcb a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::files::sinex::Dcb::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
          {
            OBJ_CALL(self->object.addDcb(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDcb", args);
          return NULL;
        }

        static PyObject *t_DcbStation_getAvailableSatelliteSystems(t_DcbStation *self)
        {
          ::java::lang::Iterable result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableSatelliteSystems());
          return ::java::lang::t_Iterable::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(SatelliteSystem));
        }

        static PyObject *t_DcbStation_getDcbData(t_DcbStation *self, PyObject *arg)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::files::sinex::Dcb result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
          {
            OBJ_CALL(result = self->object.getDcbData(a0));
            return ::org::orekit::files::sinex::t_Dcb::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbData", arg);
          return NULL;
        }

        static PyObject *t_DcbStation_getDescription(t_DcbStation *self)
        {
          ::org::orekit::files::sinex::DcbDescription result((jobject) NULL);
          OBJ_CALL(result = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(result);
        }

        static PyObject *t_DcbStation_getSiteCode(t_DcbStation *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSiteCode());
          return j2p(result);
        }

        static PyObject *t_DcbStation_setDescription(t_DcbStation *self, PyObject *arg)
        {
          ::org::orekit::files::sinex::DcbDescription a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setDescription(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDescription", arg);
          return NULL;
        }

        static PyObject *t_DcbStation_get__availableSatelliteSystems(t_DcbStation *self, void *data)
        {
          ::java::lang::Iterable value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableSatelliteSystems());
          return ::java::lang::t_Iterable::wrap_Object(value);
        }

        static PyObject *t_DcbStation_get__description(t_DcbStation *self, void *data)
        {
          ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
          OBJ_CALL(value = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(value);
        }
        static int t_DcbStation_set__description(t_DcbStation *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &value))
            {
              INT_CALL(self->object.setDescription(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "description", arg);
          return -1;
        }

        static PyObject *t_DcbStation_get__siteCode(t_DcbStation *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSiteCode());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
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
          mids$[mid_value_27b701db396ade01] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_value_954ad4b53022f84b] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > TimeVectorFunction::value(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_27b701db396ade01], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > TimeVectorFunction::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_954ad4b53022f84b], a0.this$));
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
#include "org/orekit/orbits/FieldEquinoctialOrbit.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/FieldEquinoctialOrbit.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldEquinoctialOrbit::class$ = NULL;
      jmethodID *FieldEquinoctialOrbit::mids$ = NULL;
      bool FieldEquinoctialOrbit::live$ = false;

      jclass FieldEquinoctialOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldEquinoctialOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_01b80e5fc8224f27] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_e9fcfc15398594a0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/EquinoctialOrbit;)V");
          mids$[mid_init$_e1cf5518a92ef935] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_77de91c247081784] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_16a0bc6b5307ef8d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_6ae44f82428ce0df] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_aee57b9535eb9d66] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_99dd76219aa0c8c0] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_eccentricToMean_8a93710b1b1536a6] = env->getStaticMethodID(cls, "eccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_eccentricToTrue_8a93710b1b1536a6] = env->getStaticMethodID(cls, "eccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_81520b552cb3fa26] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_81520b552cb3fa26] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_81520b552cb3fa26] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_81520b552cb3fa26] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_81520b552cb3fa26] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_81520b552cb3fa26] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_81520b552cb3fa26] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_81520b552cb3fa26] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_81520b552cb3fa26] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_81520b552cb3fa26] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getL_dd259b88fa6c00bb] = env->getMethodID(cls, "getL", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLDot_dd259b88fa6c00bb] = env->getMethodID(cls, "getLDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_81520b552cb3fa26] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_81520b552cb3fa26] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_81520b552cb3fa26] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_81520b552cb3fa26] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_81520b552cb3fa26] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_81520b552cb3fa26] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_c7d4737d7afca612] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_9ab94ac1dc23b105] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_9ab94ac1dc23b105] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_8a93710b1b1536a6] = env->getStaticMethodID(cls, "meanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_removeRates_a140ba808d644448] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_shiftedBy_751a79311945aede] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_shiftedBy_0209b43fa3fb2fc4] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_toOrbit_fd625ef6a79a03db] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_8a93710b1b1536a6] = env->getStaticMethodID(cls, "trueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_initPosition_ff5ac73a7b43eddd] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_243debd9cc1dd623] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_01b80e5fc8224f27, a0.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::EquinoctialOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_e9fcfc15398594a0, a0.this$, a1.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_e1cf5518a92ef935, a0.this$, a1.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_77de91c247081784, a0.this$, a1.this$, a2.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_16a0bc6b5307ef8d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_6ae44f82428ce0df, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_aee57b9535eb9d66, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldEquinoctialOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_99dd76219aa0c8c0], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::eccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToMean_8a93710b1b1536a6], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::eccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToTrue_8a93710b1b1536a6], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_81520b552cb3fa26]));
      }

      ::org::orekit::orbits::PositionAngleType FieldEquinoctialOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_c25055891f180348]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getL(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getL_dd259b88fa6c00bb], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLDot_dd259b88fa6c00bb], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_81520b552cb3fa26]));
      }

      ::org::orekit::orbits::OrbitType FieldEquinoctialOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_c7d4737d7afca612]));
      }

      jboolean FieldEquinoctialOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_9ab94ac1dc23b105]);
      }

      jboolean FieldEquinoctialOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_9ab94ac1dc23b105]);
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::meanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_meanToEccentric_8a93710b1b1536a6], a0.this$, a1.this$, a2.this$));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::removeRates() const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_a140ba808d644448]));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::shiftedBy(jdouble a0) const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_751a79311945aede], a0));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_0209b43fa3fb2fc4], a0.this$));
      }

      ::org::orekit::orbits::EquinoctialOrbit FieldEquinoctialOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_fd625ef6a79a03db]));
      }

      ::java::lang::String FieldEquinoctialOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::trueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trueToEccentric_8a93710b1b1536a6], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldEquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_of_(t_FieldEquinoctialOrbit *self, PyObject *args);
      static int t_FieldEquinoctialOrbit_init_(t_FieldEquinoctialOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldEquinoctialOrbit_addKeplerContribution(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getA(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getADot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getCachedPositionAngleType(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_getE(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEx(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialExDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEyDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHx(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHxDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHyDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getI(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getIDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getL(t_FieldEquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_getLDot(t_FieldEquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_getLE(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLEDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLM(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLMDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLv(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLvDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getType(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_hasDerivatives(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_hasRates(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_removeRates(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_shiftedBy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_toOrbit(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_toString(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_get__a(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__aDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__cachedPositionAngleType(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__e(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__eDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEx(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialExDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEy(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEyDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hx(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hxDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hy(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hyDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__i(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__iDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lE(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lEDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lM(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lMDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lv(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lvDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__type(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__parameters_(t_FieldEquinoctialOrbit *self, void *data);
      static PyGetSetDef t_FieldEquinoctialOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, a),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, e),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hx),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hy),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, i),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lE),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lM),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lv),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, type),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEquinoctialOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldEquinoctialOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getL, METH_O),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLDot, METH_O),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEquinoctialOrbit)[] = {
        { Py_tp_methods, t_FieldEquinoctialOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldEquinoctialOrbit_init_ },
        { Py_tp_getset, t_FieldEquinoctialOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEquinoctialOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldEquinoctialOrbit, t_FieldEquinoctialOrbit, FieldEquinoctialOrbit);
      PyObject *t_FieldEquinoctialOrbit::wrap_Object(const FieldEquinoctialOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquinoctialOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquinoctialOrbit *self = (t_FieldEquinoctialOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEquinoctialOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquinoctialOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquinoctialOrbit *self = (t_FieldEquinoctialOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEquinoctialOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEquinoctialOrbit), &PY_TYPE_DEF(FieldEquinoctialOrbit), module, "FieldEquinoctialOrbit", 0);
      }

      void t_FieldEquinoctialOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "class_", make_descriptor(FieldEquinoctialOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "wrapfn_", make_descriptor(t_FieldEquinoctialOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEquinoctialOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldEquinoctialOrbit::wrap_Object(FieldEquinoctialOrbit(((t_FieldEquinoctialOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldEquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEquinoctialOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEquinoctialOrbit_of_(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldEquinoctialOrbit_init_(t_FieldEquinoctialOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::EquinoctialOrbit a1((jobject) NULL);
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::EquinoctialOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
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
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
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
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
            PyTypeObject **p10;
            ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
            PyTypeObject **p11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a14((jobject) NULL);
            PyTypeObject **p14;
            ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
            PyTypeObject **p15;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldEquinoctialOrbit_addKeplerContribution(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::eccentricToMean(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::eccentricToTrue(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getA(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getADot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getCachedPositionAngleType(t_FieldEquinoctialOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldEquinoctialOrbit_getE(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEx(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialExDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEyDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHx(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHxDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHyDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getI(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getIDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getL(t_FieldEquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getL(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL", arg);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getLDot(t_FieldEquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getLDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLDot", arg);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getLE(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLEDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLM(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLMDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLv(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLvDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getType(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_hasDerivatives(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_hasRates(t_FieldEquinoctialOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldEquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::meanToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_removeRates(t_FieldEquinoctialOrbit *self)
      {
        FieldEquinoctialOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEquinoctialOrbit_shiftedBy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldEquinoctialOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldEquinoctialOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_toOrbit(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::EquinoctialOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_EquinoctialOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_toString(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::trueToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }
      static PyObject *t_FieldEquinoctialOrbit_get__parameters_(t_FieldEquinoctialOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEquinoctialOrbit_get__a(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__aDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__cachedPositionAngleType(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__e(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__eDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEx(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialExDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEy(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEyDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hx(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hxDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hy(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hyDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__i(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__iDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lE(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lEDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lM(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lMDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lv(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lvDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__type(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/IgsSsrMessageType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/parser/IgsSsrMessageType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrMessageType::class$ = NULL;
          jmethodID *IgsSsrMessageType::mids$ = NULL;
          bool IgsSsrMessageType::live$ = false;
          IgsSsrMessageType *IgsSsrMessageType::IGM_01 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_02 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_03 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_04 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_05 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_06 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IGM_07 = NULL;
          IgsSsrMessageType *IgsSsrMessageType::IM_201 = NULL;

          jclass IgsSsrMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMessageType_eccccd8801842880] = env->getStaticMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");
              mids$[mid_getSatelliteId_1b9e19f42a845f92] = env->getStaticMethodID(cls, "getSatelliteId", "(Lorg/orekit/gnss/SatelliteSystem;I)I");
              mids$[mid_messageNumberToSatelliteSystem_c5535e7cb0a29db9] = env->getStaticMethodID(cls, "messageNumberToSatelliteSystem", "(I)Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_valueOf_eccccd8801842880] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");
              mids$[mid_values_22d46938ec4bd22d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IGM_01 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_01", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_02 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_02", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_03 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_03", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_04 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_04", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_05 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_05", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_06 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_06", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IGM_07 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IGM_07", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              IM_201 = new IgsSsrMessageType(env->getStaticObjectField(cls, "IM_201", "Lorg/orekit/gnss/metric/parser/IgsSsrMessageType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrMessageType IgsSsrMessageType::getMessageType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrMessageType(env->callStaticObjectMethod(cls, mids$[mid_getMessageType_eccccd8801842880], a0.this$));
          }

          jint IgsSsrMessageType::getSatelliteId(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticIntMethod(cls, mids$[mid_getSatelliteId_1b9e19f42a845f92], a0.this$, a1);
          }

          ::org::orekit::gnss::SatelliteSystem IgsSsrMessageType::messageNumberToSatelliteSystem(jint a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::gnss::SatelliteSystem(env->callStaticObjectMethod(cls, mids$[mid_messageNumberToSatelliteSystem_c5535e7cb0a29db9], a0));
          }

          IgsSsrMessageType IgsSsrMessageType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrMessageType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_eccccd8801842880], a0.this$));
          }

          JArray< IgsSsrMessageType > IgsSsrMessageType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IgsSsrMessageType >(env->callStaticObjectMethod(cls, mids$[mid_values_22d46938ec4bd22d]));
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_IgsSsrMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_of_(t_IgsSsrMessageType *self, PyObject *args);
          static PyObject *t_IgsSsrMessageType_getMessageType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_getSatelliteId(PyTypeObject *type, PyObject *args);
          static PyObject *t_IgsSsrMessageType_messageNumberToSatelliteSystem(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrMessageType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IgsSsrMessageType_values(PyTypeObject *type);
          static PyObject *t_IgsSsrMessageType_get__parameters_(t_IgsSsrMessageType *self, void *data);
          static PyGetSetDef t_IgsSsrMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_IgsSsrMessageType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IgsSsrMessageType__methods_[] = {
            DECLARE_METHOD(t_IgsSsrMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, of_, METH_VARARGS),
            DECLARE_METHOD(t_IgsSsrMessageType, getMessageType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, getSatelliteId, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, messageNumberToSatelliteSystem, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrMessageType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrMessageType)[] = {
            { Py_tp_methods, t_IgsSsrMessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IgsSsrMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IgsSsrMessageType, t_IgsSsrMessageType, IgsSsrMessageType);
          PyObject *t_IgsSsrMessageType::wrap_Object(const IgsSsrMessageType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrMessageType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrMessageType *self = (t_IgsSsrMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IgsSsrMessageType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrMessageType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrMessageType *self = (t_IgsSsrMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IgsSsrMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrMessageType), &PY_TYPE_DEF(IgsSsrMessageType), module, "IgsSsrMessageType", 0);
          }

          void t_IgsSsrMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "class_", make_descriptor(IgsSsrMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "wrapfn_", make_descriptor(t_IgsSsrMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "boxfn_", make_descriptor(boxObject));
            env->getClass(IgsSsrMessageType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_01", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_01)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_02", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_02)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_03", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_03)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_04", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_04)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_05", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_05)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_06", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_06)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IGM_07", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IGM_07)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrMessageType), "IM_201", make_descriptor(t_IgsSsrMessageType::wrap_Object(*IgsSsrMessageType::IM_201)));
          }

          static PyObject *t_IgsSsrMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrMessageType::initializeClass, 1)))
              return NULL;
            return t_IgsSsrMessageType::wrap_Object(IgsSsrMessageType(((t_IgsSsrMessageType *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IgsSsrMessageType_of_(t_IgsSsrMessageType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IgsSsrMessageType_getMessageType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            IgsSsrMessageType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::getMessageType(a0));
              return t_IgsSsrMessageType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMessageType", arg);
            return NULL;
          }

          static PyObject *t_IgsSsrMessageType_getSatelliteId(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint result;

            if (!parseArgs(args, "KI", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::getSatelliteId(a0, a1));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError(type, "getSatelliteId", args);
            return NULL;
          }

          static PyObject *t_IgsSsrMessageType_messageNumberToSatelliteSystem(PyTypeObject *type, PyObject *arg)
          {
            jint a0;
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::messageNumberToSatelliteSystem(a0));
              return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "messageNumberToSatelliteSystem", arg);
            return NULL;
          }

          static PyObject *t_IgsSsrMessageType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IgsSsrMessageType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::valueOf(a0));
              return t_IgsSsrMessageType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IgsSsrMessageType_values(PyTypeObject *type)
          {
            JArray< IgsSsrMessageType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrMessageType::values());
            return JArray<jobject>(result.this$).wrap(t_IgsSsrMessageType::wrap_jobject);
          }
          static PyObject *t_IgsSsrMessageType_get__parameters_(t_IgsSsrMessageType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FunctionUtils.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FunctionUtils::class$ = NULL;
      jmethodID *FunctionUtils::mids$ = NULL;
      bool FunctionUtils::live$ = false;

      jclass FunctionUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FunctionUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_1d1dea4d2fa5c759] = env->getStaticMethodID(cls, "add", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_add_689e17eadd7fa7c2] = env->getStaticMethodID(cls, "add", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_collector_11adc540ecceaf3d] = env->getStaticMethodID(cls, "collector", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_collector_1d48c753d1dcee69] = env->getStaticMethodID(cls, "collector", "(Lorg/hipparchus/analysis/BivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;D)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_combine_3f08252e15ed56dd] = env->getStaticMethodID(cls, "combine", "(Lorg/hipparchus/analysis/BivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_compose_1d1dea4d2fa5c759] = env->getStaticMethodID(cls, "compose", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_compose_689e17eadd7fa7c2] = env->getStaticMethodID(cls, "compose", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_derivative_1cfd32e68d698037] = env->getStaticMethodID(cls, "derivative", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;[I)Lorg/hipparchus/analysis/MultivariateFunction;");
          mids$[mid_derivative_68d32ee5bac2b20e] = env->getStaticMethodID(cls, "derivative", "(Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;I)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_fix1stArgument_9e09c654d7549869] = env->getStaticMethodID(cls, "fix1stArgument", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_fix2ndArgument_9e09c654d7549869] = env->getStaticMethodID(cls, "fix2ndArgument", "(Lorg/hipparchus/analysis/BivariateFunction;D)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_multiply_1d1dea4d2fa5c759] = env->getStaticMethodID(cls, "multiply", "([Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/UnivariateFunction;");
          mids$[mid_multiply_689e17eadd7fa7c2] = env->getStaticMethodID(cls, "multiply", "([Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_sample_5d357094f120ebb4] = env->getStaticMethodID(cls, "sample", "(Lorg/hipparchus/analysis/UnivariateFunction;DDI)[D");
          mids$[mid_toDifferentiable_8f826de7259f8a4a] = env->getStaticMethodID(cls, "toDifferentiable", "(Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
          mids$[mid_toDifferentiable_467dda28257459c9] = env->getStaticMethodID(cls, "toDifferentiable", "(Lorg/hipparchus/analysis/MultivariateFunction;Lorg/hipparchus/analysis/MultivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::add(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_add_1d1dea4d2fa5c759], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::add(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_add_689e17eadd7fa7c2], a0.this$));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::collector(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_collector_11adc540ecceaf3d], a0.this$, a1));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::collector(const ::org::hipparchus::analysis::BivariateFunction & a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_collector_1d48c753d1dcee69], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::combine(const ::org::hipparchus::analysis::BivariateFunction & a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, const ::org::hipparchus::analysis::UnivariateFunction & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_combine_3f08252e15ed56dd], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::compose(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_compose_1d1dea4d2fa5c759], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::compose(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_compose_689e17eadd7fa7c2], a0.this$));
      }

      ::org::hipparchus::analysis::MultivariateFunction FunctionUtils::derivative(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::MultivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_derivative_1cfd32e68d698037], a0.this$, a1.this$));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::derivative(const ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_derivative_68d32ee5bac2b20e], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::fix1stArgument(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_fix1stArgument_9e09c654d7549869], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::fix2ndArgument(const ::org::hipparchus::analysis::BivariateFunction & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_fix2ndArgument_9e09c654d7549869], a0.this$, a1));
      }

      ::org::hipparchus::analysis::UnivariateFunction FunctionUtils::multiply(const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::UnivariateFunction(env->callStaticObjectMethod(cls, mids$[mid_multiply_1d1dea4d2fa5c759], a0.this$));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::multiply(const JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_multiply_689e17eadd7fa7c2], a0.this$));
      }

      JArray< jdouble > FunctionUtils::sample(const ::org::hipparchus::analysis::UnivariateFunction & a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_sample_5d357094f120ebb4], a0.this$, a1, a2, a3));
      }

      ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FunctionUtils::toDifferentiable(const ::org::hipparchus::analysis::UnivariateFunction & a0, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_toDifferentiable_8f826de7259f8a4a], a0.this$, a1.this$));
      }

      ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction FunctionUtils::toDifferentiable(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::org::hipparchus::analysis::MultivariateVectorFunction & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction(env->callStaticObjectMethod(cls, mids$[mid_toDifferentiable_467dda28257459c9], a0.this$, a1.this$));
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
      static PyObject *t_FunctionUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FunctionUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FunctionUtils_add(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_collector(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_combine(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_compose(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_derivative(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_fix1stArgument(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_fix2ndArgument(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_multiply(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_sample(PyTypeObject *type, PyObject *args);
      static PyObject *t_FunctionUtils_toDifferentiable(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_FunctionUtils__methods_[] = {
        DECLARE_METHOD(t_FunctionUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, add, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, collector, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, combine, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, compose, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, derivative, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, fix1stArgument, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, fix2ndArgument, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, multiply, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, sample, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FunctionUtils, toDifferentiable, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FunctionUtils)[] = {
        { Py_tp_methods, t_FunctionUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FunctionUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FunctionUtils, t_FunctionUtils, FunctionUtils);

      void t_FunctionUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(FunctionUtils), &PY_TYPE_DEF(FunctionUtils), module, "FunctionUtils", 0);
      }

      void t_FunctionUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionUtils), "class_", make_descriptor(FunctionUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionUtils), "wrapfn_", make_descriptor(t_FunctionUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FunctionUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FunctionUtils::initializeClass, 1)))
          return NULL;
        return t_FunctionUtils::wrap_Object(FunctionUtils(((t_FunctionUtils *) arg)->object.this$));
      }
      static PyObject *t_FunctionUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FunctionUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FunctionUtils_add(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::add(a0));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::add(a0));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "add", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_collector(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::collector(a0, a1));
              return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::collector(a0, a1, a2));
              return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "collector", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_combine(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
        ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
        ::org::hipparchus::analysis::UnivariateFunction a2((jobject) NULL);
        ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::analysis::BivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::combine(a0, a1, a2));
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "combine", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_compose(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::compose(a0));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::compose(a0));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "compose", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_derivative(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "k[I", ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::derivative(a0, a1));
              return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::derivative(a0, a1));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "derivative", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_fix1stArgument(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
        jdouble a1;
        ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::fix1stArgument(a0, a1));
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fix1stArgument", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_fix2ndArgument(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::BivariateFunction a0((jobject) NULL);
        jdouble a1;
        ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

        if (!parseArgs(args, "kD", ::org::hipparchus::analysis::BivariateFunction::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::fix2ndArgument(a0, a1));
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fix2ndArgument", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_multiply(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::multiply(a0));
              return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
            }
          }
          {
            JArray< ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction > a0((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::multiply(a0));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "multiply", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_sample(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jint a3;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDDI", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::sample(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "sample", args);
        return NULL;
      }

      static PyObject *t_FunctionUtils_toDifferentiable(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            JArray< ::org::hipparchus::analysis::UnivariateFunction > a1((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "k[k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::toDifferentiable(a0, a1));
              return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            ::org::hipparchus::analysis::MultivariateVectorFunction a1((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::analysis::FunctionUtils::toDifferentiable(a0, a1));
              return ::org::hipparchus::analysis::differentiation::t_MultivariateDifferentiableFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "toDifferentiable", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *Gradient::class$ = NULL;
        jmethodID *Gradient::mids$ = NULL;
        bool Gradient::live$ = false;

        jclass Gradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/Gradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0e3cd27f693a0167] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_d606d0c99c70c093] = env->getMethodID(cls, "<init>", "(D[D)V");
            mids$[mid_abs_9ebd7c8cd097159e] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_acos_9ebd7c8cd097159e] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_acosh_9ebd7c8cd097159e] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_add_9b1a3ae9e0ac7e32] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_add_5eb1debe4f65ff5a] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_asin_9ebd7c8cd097159e] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_asinh_9ebd7c8cd097159e] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atan_9ebd7c8cd097159e] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atan2_9b1a3ae9e0ac7e32] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atanh_9ebd7c8cd097159e] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cbrt_9ebd7c8cd097159e] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_ceil_9ebd7c8cd097159e] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_compose_c3aae14f07b60c68] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_constant_df267c66631d91fe] = env->getStaticMethodID(cls, "constant", "(ID)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_copySign_9b1a3ae9e0ac7e32] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_copySign_5eb1debe4f65ff5a] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cos_9ebd7c8cd097159e] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cosh_9ebd7c8cd097159e] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_divide_9b1a3ae9e0ac7e32] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_divide_5eb1debe4f65ff5a] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_9ebd7c8cd097159e] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_expm1_9ebd7c8cd097159e] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_floor_9ebd7c8cd097159e] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getExponent_55546ef6a647f39b] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_dff37536788c3f97] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/GradientField;");
            mids$[mid_getFreeParameters_55546ef6a647f39b] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getGradient_25e1757a36c4dde2] = env->getMethodID(cls, "getGradient", "()[D");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_bff393394ab19dc1] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getPartialDerivative_2afcbc21f4e57ab2] = env->getMethodID(cls, "getPartialDerivative", "(I)D");
            mids$[mid_getPi_9ebd7c8cd097159e] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_9b1a3ae9e0ac7e32] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_ff76b575c79dcae0] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_50c639d1bc27cc1e] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/Gradient;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_ffa1d8dbf700c622] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_3a16762f5e07b373] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_2231afe4b94cdb85] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_1e876d4c555ad898] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_63f831368342f465] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_380254f19e011dd1] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log_9ebd7c8cd097159e] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log10_9ebd7c8cd097159e] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log1p_9ebd7c8cd097159e] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_9b1a3ae9e0ac7e32] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_5eb1debe4f65ff5a] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_8151ef547ff6d2dc] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_negate_9ebd7c8cd097159e] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_newInstance_5eb1debe4f65ff5a] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_9b1a3ae9e0ac7e32] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_5eb1debe4f65ff5a] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_8151ef547ff6d2dc] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_6383ea7841cc0c7c] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_reciprocal_9ebd7c8cd097159e] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_remainder_9b1a3ae9e0ac7e32] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_remainder_5eb1debe4f65ff5a] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_rint_9ebd7c8cd097159e] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_rootN_8151ef547ff6d2dc] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_scalb_8151ef547ff6d2dc] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sign_9ebd7c8cd097159e] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sin_9ebd7c8cd097159e] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_9ebd7c8cd097159e] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_9ebd7c8cd097159e] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_subtract_9b1a3ae9e0ac7e32] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_subtract_5eb1debe4f65ff5a] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_tan_9ebd7c8cd097159e] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_tanh_9ebd7c8cd097159e] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_taylor_b060e4326765ccf1] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_9ebd7c8cd097159e] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_toDerivativeStructure_57983c4d4b4a2f7f] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_9ebd7c8cd097159e] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_ulp_9ebd7c8cd097159e] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_variable_e77846904fb26f57] = env->getStaticMethodID(cls, "variable", "(IID)Lorg/hipparchus/analysis/differentiation/Gradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gradient::Gradient(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e3cd27f693a0167, a0.this$)) {}

        Gradient::Gradient(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d606d0c99c70c093, a0, a1.this$)) {}

        Gradient Gradient::abs() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_abs_9ebd7c8cd097159e]));
        }

        Gradient Gradient::acos() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_acos_9ebd7c8cd097159e]));
        }

        Gradient Gradient::acosh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_acosh_9ebd7c8cd097159e]));
        }

        Gradient Gradient::add(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_add_9b1a3ae9e0ac7e32], a0.this$));
        }

        Gradient Gradient::add(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_add_5eb1debe4f65ff5a], a0));
        }

        Gradient Gradient::asin() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_asin_9ebd7c8cd097159e]));
        }

        Gradient Gradient::asinh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_asinh_9ebd7c8cd097159e]));
        }

        Gradient Gradient::atan() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atan_9ebd7c8cd097159e]));
        }

        Gradient Gradient::atan2(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atan2_9b1a3ae9e0ac7e32], a0.this$));
        }

        Gradient Gradient::atanh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atanh_9ebd7c8cd097159e]));
        }

        Gradient Gradient::cbrt() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cbrt_9ebd7c8cd097159e]));
        }

        Gradient Gradient::ceil() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_ceil_9ebd7c8cd097159e]));
        }

        Gradient Gradient::compose(const JArray< jdouble > & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_compose_c3aae14f07b60c68], a0.this$));
        }

        Gradient Gradient::constant(jint a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_constant_df267c66631d91fe], a0, a1));
        }

        Gradient Gradient::copySign(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_copySign_9b1a3ae9e0ac7e32], a0.this$));
        }

        Gradient Gradient::copySign(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_copySign_5eb1debe4f65ff5a], a0));
        }

        Gradient Gradient::cos() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cos_9ebd7c8cd097159e]));
        }

        Gradient Gradient::cosh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cosh_9ebd7c8cd097159e]));
        }

        Gradient Gradient::divide(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_divide_9b1a3ae9e0ac7e32], a0.this$));
        }

        Gradient Gradient::divide(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_divide_5eb1debe4f65ff5a], a0));
        }

        jboolean Gradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        Gradient Gradient::exp() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_exp_9ebd7c8cd097159e]));
        }

        Gradient Gradient::expm1() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_expm1_9ebd7c8cd097159e]));
        }

        Gradient Gradient::floor() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_floor_9ebd7c8cd097159e]));
        }

        jint Gradient::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_55546ef6a647f39b]);
        }

        ::org::hipparchus::analysis::differentiation::GradientField Gradient::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::GradientField(env->callObjectMethod(this$, mids$[mid_getField_dff37536788c3f97]));
        }

        jint Gradient::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_55546ef6a647f39b]);
        }

        JArray< jdouble > Gradient::getGradient() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGradient_25e1757a36c4dde2]));
        }

        jint Gradient::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }

        jdouble Gradient::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_bff393394ab19dc1], a0.this$);
        }

        jdouble Gradient::getPartialDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_2afcbc21f4e57ab2], a0);
        }

        Gradient Gradient::getPi() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_getPi_9ebd7c8cd097159e]));
        }

        jdouble Gradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
        }

        jdouble Gradient::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
        }

        jint Gradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        Gradient Gradient::hypot(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_hypot_9b1a3ae9e0ac7e32], a0.this$));
        }

        Gradient Gradient::linearCombination(const JArray< jdouble > & a0, const JArray< Gradient > & a1) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_ff76b575c79dcae0], a0.this$, a1.this$));
        }

        Gradient Gradient::linearCombination(const JArray< Gradient > & a0, const JArray< Gradient > & a1) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_50c639d1bc27cc1e], a0.this$, a1.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_ffa1d8dbf700c622], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_3a16762f5e07b373], a0, a1.this$, a2, a3.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3, const Gradient & a4, const Gradient & a5) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_2231afe4b94cdb85], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3, jdouble a4, const Gradient & a5) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_1e876d4c555ad898], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3, const Gradient & a4, const Gradient & a5, const Gradient & a6, const Gradient & a7) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_63f831368342f465], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3, jdouble a4, const Gradient & a5, jdouble a6, const Gradient & a7) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_380254f19e011dd1], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        Gradient Gradient::log() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log_9ebd7c8cd097159e]));
        }

        Gradient Gradient::log10() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log10_9ebd7c8cd097159e]));
        }

        Gradient Gradient::log1p() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log1p_9ebd7c8cd097159e]));
        }

        Gradient Gradient::multiply(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_9b1a3ae9e0ac7e32], a0.this$));
        }

        Gradient Gradient::multiply(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_5eb1debe4f65ff5a], a0));
        }

        Gradient Gradient::multiply(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_8151ef547ff6d2dc], a0));
        }

        Gradient Gradient::negate() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_negate_9ebd7c8cd097159e]));
        }

        Gradient Gradient::newInstance(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_newInstance_5eb1debe4f65ff5a], a0));
        }

        Gradient Gradient::pow(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_9b1a3ae9e0ac7e32], a0.this$));
        }

        Gradient Gradient::pow(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_5eb1debe4f65ff5a], a0));
        }

        Gradient Gradient::pow(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_8151ef547ff6d2dc], a0));
        }

        Gradient Gradient::pow(jdouble a0, const Gradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_pow_6383ea7841cc0c7c], a0, a1.this$));
        }

        Gradient Gradient::reciprocal() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_reciprocal_9ebd7c8cd097159e]));
        }

        Gradient Gradient::remainder(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_remainder_9b1a3ae9e0ac7e32], a0.this$));
        }

        Gradient Gradient::remainder(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_remainder_5eb1debe4f65ff5a], a0));
        }

        Gradient Gradient::rint() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_rint_9ebd7c8cd097159e]));
        }

        Gradient Gradient::rootN(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_rootN_8151ef547ff6d2dc], a0));
        }

        Gradient Gradient::scalb(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_scalb_8151ef547ff6d2dc], a0));
        }

        Gradient Gradient::sign() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sign_9ebd7c8cd097159e]));
        }

        Gradient Gradient::sin() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sin_9ebd7c8cd097159e]));
        }

        ::org::hipparchus::util::FieldSinCos Gradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
        }

        Gradient Gradient::sinh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sinh_9ebd7c8cd097159e]));
        }

        ::org::hipparchus::util::FieldSinhCosh Gradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
        }

        Gradient Gradient::sqrt() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sqrt_9ebd7c8cd097159e]));
        }

        Gradient Gradient::subtract(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_subtract_9b1a3ae9e0ac7e32], a0.this$));
        }

        Gradient Gradient::subtract(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_subtract_5eb1debe4f65ff5a], a0));
        }

        Gradient Gradient::tan() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_tan_9ebd7c8cd097159e]));
        }

        Gradient Gradient::tanh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_tanh_9ebd7c8cd097159e]));
        }

        jdouble Gradient::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_b060e4326765ccf1], a0.this$);
        }

        Gradient Gradient::toDegrees() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_toDegrees_9ebd7c8cd097159e]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure Gradient::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_57983c4d4b4a2f7f]));
        }

        Gradient Gradient::toRadians() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_toRadians_9ebd7c8cd097159e]));
        }

        Gradient Gradient::ulp() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_ulp_9ebd7c8cd097159e]));
        }

        Gradient Gradient::variable(jint a0, jint a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_variable_e77846904fb26f57], a0, a1, a2));
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
        static PyObject *t_Gradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gradient_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gradient_init_(t_Gradient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gradient_abs(t_Gradient *self);
        static PyObject *t_Gradient_acos(t_Gradient *self);
        static PyObject *t_Gradient_acosh(t_Gradient *self);
        static PyObject *t_Gradient_add(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_asin(t_Gradient *self);
        static PyObject *t_Gradient_asinh(t_Gradient *self);
        static PyObject *t_Gradient_atan(t_Gradient *self);
        static PyObject *t_Gradient_atan2(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_atanh(t_Gradient *self);
        static PyObject *t_Gradient_cbrt(t_Gradient *self);
        static PyObject *t_Gradient_ceil(t_Gradient *self);
        static PyObject *t_Gradient_compose(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_constant(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_copySign(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_cos(t_Gradient *self);
        static PyObject *t_Gradient_cosh(t_Gradient *self);
        static PyObject *t_Gradient_divide(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_equals(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_exp(t_Gradient *self);
        static PyObject *t_Gradient_expm1(t_Gradient *self);
        static PyObject *t_Gradient_floor(t_Gradient *self);
        static PyObject *t_Gradient_getExponent(t_Gradient *self);
        static PyObject *t_Gradient_getField(t_Gradient *self);
        static PyObject *t_Gradient_getFreeParameters(t_Gradient *self);
        static PyObject *t_Gradient_getGradient(t_Gradient *self);
        static PyObject *t_Gradient_getOrder(t_Gradient *self);
        static PyObject *t_Gradient_getPartialDerivative(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_getPi(t_Gradient *self);
        static PyObject *t_Gradient_getReal(t_Gradient *self);
        static PyObject *t_Gradient_getValue(t_Gradient *self);
        static PyObject *t_Gradient_hashCode(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_hypot(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_linearCombination(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_log(t_Gradient *self);
        static PyObject *t_Gradient_log10(t_Gradient *self);
        static PyObject *t_Gradient_log1p(t_Gradient *self);
        static PyObject *t_Gradient_multiply(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_negate(t_Gradient *self);
        static PyObject *t_Gradient_newInstance(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_pow(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_reciprocal(t_Gradient *self);
        static PyObject *t_Gradient_remainder(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_rint(t_Gradient *self);
        static PyObject *t_Gradient_rootN(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_scalb(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_sign(t_Gradient *self);
        static PyObject *t_Gradient_sin(t_Gradient *self);
        static PyObject *t_Gradient_sinCos(t_Gradient *self);
        static PyObject *t_Gradient_sinh(t_Gradient *self);
        static PyObject *t_Gradient_sinhCosh(t_Gradient *self);
        static PyObject *t_Gradient_sqrt(t_Gradient *self);
        static PyObject *t_Gradient_subtract(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_tan(t_Gradient *self);
        static PyObject *t_Gradient_tanh(t_Gradient *self);
        static PyObject *t_Gradient_taylor(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_toDegrees(t_Gradient *self);
        static PyObject *t_Gradient_toDerivativeStructure(t_Gradient *self);
        static PyObject *t_Gradient_toRadians(t_Gradient *self);
        static PyObject *t_Gradient_ulp(t_Gradient *self);
        static PyObject *t_Gradient_variable(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_get__exponent(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__field(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__freeParameters(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__gradient(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__order(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__pi(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__real(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__value(t_Gradient *self, void *data);
        static PyGetSetDef t_Gradient__fields_[] = {
          DECLARE_GET_FIELD(t_Gradient, exponent),
          DECLARE_GET_FIELD(t_Gradient, field),
          DECLARE_GET_FIELD(t_Gradient, freeParameters),
          DECLARE_GET_FIELD(t_Gradient, gradient),
          DECLARE_GET_FIELD(t_Gradient, order),
          DECLARE_GET_FIELD(t_Gradient, pi),
          DECLARE_GET_FIELD(t_Gradient, real),
          DECLARE_GET_FIELD(t_Gradient, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Gradient__methods_[] = {
          DECLARE_METHOD(t_Gradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, add, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, atan2, METH_O),
          DECLARE_METHOD(t_Gradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, compose, METH_O),
          DECLARE_METHOD(t_Gradient, constant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Gradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getGradient, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getPartialDerivative, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, hypot, METH_O),
          DECLARE_METHOD(t_Gradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, log, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, newInstance, METH_O),
          DECLARE_METHOD(t_Gradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Gradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, rootN, METH_O),
          DECLARE_METHOD(t_Gradient, scalb, METH_O),
          DECLARE_METHOD(t_Gradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, taylor, METH_O),
          DECLARE_METHOD(t_Gradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, toDerivativeStructure, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, ulp, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, variable, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gradient)[] = {
          { Py_tp_methods, t_Gradient__methods_ },
          { Py_tp_init, (void *) t_Gradient_init_ },
          { Py_tp_getset, t_Gradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gradient, t_Gradient, Gradient);

        void t_Gradient::install(PyObject *module)
        {
          installType(&PY_TYPE(Gradient), &PY_TYPE_DEF(Gradient), module, "Gradient", 0);
        }

        void t_Gradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "class_", make_descriptor(Gradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "wrapfn_", make_descriptor(t_Gradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gradient::initializeClass, 1)))
            return NULL;
          return t_Gradient::wrap_Object(Gradient(((t_Gradient *) arg)->object.this$));
        }
        static PyObject *t_Gradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gradient_init_(t_Gradient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::DerivativeStructure a0((jobject) NULL);
              Gradient object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
              {
                INT_CALL(object = Gradient(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              Gradient object((jobject) NULL);

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                INT_CALL(object = Gradient(a0, a1));
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

        static PyObject *t_Gradient_abs(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_acos(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_acosh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_add(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_Gradient_asin(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_asinh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_atan(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_atan2(t_Gradient *self, PyObject *arg)
        {
          Gradient a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "k", Gradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_Gradient_atanh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_cbrt(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_ceil(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_compose(t_Gradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_Gradient_constant(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::constant(a0, a1));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "constant", args);
          return NULL;
        }

        static PyObject *t_Gradient_copySign(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_Gradient_cos(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_cosh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_divide(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_Gradient_equals(t_Gradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Gradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_Gradient_exp(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_expm1(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_floor(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_getExponent(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getField(t_Gradient *self)
        {
          ::org::hipparchus::analysis::differentiation::GradientField result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_GradientField::wrap_Object(result);
        }

        static PyObject *t_Gradient_getFreeParameters(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getGradient(t_Gradient *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradient());
          return result.wrap();
        }

        static PyObject *t_Gradient_getOrder(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getPartialDerivative(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jint a0;
              jdouble result;

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", args);
          return NULL;
        }

        static PyObject *t_Gradient_getPi(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_getReal(t_Gradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Gradient_getValue(t_Gradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Gradient_hashCode(t_Gradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(Gradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_Gradient_hypot(t_Gradient *self, PyObject *arg)
        {
          Gradient a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "k", Gradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_Gradient_linearCombination(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< Gradient > a1((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "[D[k", Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              JArray< Gradient > a0((jobject) NULL);
              JArray< Gradient > a1((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "[k[k", Gradient::initializeClass, Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDk", Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient a4((jobject) NULL);
              Gradient a5((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              jdouble a4;
              Gradient a5((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient a4((jobject) NULL);
              Gradient a5((jobject) NULL);
              Gradient a6((jobject) NULL);
              Gradient a7((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              jdouble a4;
              Gradient a5((jobject) NULL);
              jdouble a6;
              Gradient a7((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_Gradient_log(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_log10(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_log1p(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_multiply(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_Gradient_negate(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_newInstance(t_Gradient *self, PyObject *arg)
        {
          jdouble a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_Gradient_pow(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_Gradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          Gradient a1((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "Dk", Gradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::pow(a0, a1));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_Gradient_reciprocal(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_remainder(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_Gradient_rint(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_rootN(t_Gradient *self, PyObject *arg)
        {
          jint a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_Gradient_scalb(t_Gradient *self, PyObject *arg)
        {
          jint a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_Gradient_sign(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sin(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sinCos(t_Gradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_Gradient_sinh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sinhCosh(t_Gradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_Gradient_sqrt(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_subtract(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_Gradient_tan(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_tanh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_taylor(t_Gradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_Gradient_toDegrees(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_toDerivativeStructure(t_Gradient *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_Gradient_toRadians(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_ulp(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_variable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::variable(a0, a1, a2));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "variable", args);
          return NULL;
        }

        static PyObject *t_Gradient_get__exponent(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__field(t_Gradient *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::GradientField value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_GradientField::wrap_Object(value);
        }

        static PyObject *t_Gradient_get__freeParameters(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__gradient(t_Gradient *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradient());
          return value.wrap();
        }

        static PyObject *t_Gradient_get__order(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__pi(t_Gradient *self, void *data)
        {
          Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_Gradient::wrap_Object(value);
        }

        static PyObject *t_Gradient_get__real(t_Gradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Gradient_get__value(t_Gradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06Header::class$ = NULL;
              jmethodID *SsrIgm06Header::mids$ = NULL;
              bool SsrIgm06Header::live$ = false;

              jclass SsrIgm06Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_isConsistencyMaintained_9ab94ac1dc23b105] = env->getMethodID(cls, "isConsistencyMaintained", "()Z");
                  mids$[mid_isMelbourneWubbenaConsistencyMaintained_9ab94ac1dc23b105] = env->getMethodID(cls, "isMelbourneWubbenaConsistencyMaintained", "()Z");
                  mids$[mid_setIsConsistencyMaintained_fcb96c98de6fad04] = env->getMethodID(cls, "setIsConsistencyMaintained", "(Z)V");
                  mids$[mid_setIsMelbourneWubbenaConsistencyMaintained_fcb96c98de6fad04] = env->getMethodID(cls, "setIsMelbourneWubbenaConsistencyMaintained", "(Z)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06Header::SsrIgm06Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jboolean SsrIgm06Header::isConsistencyMaintained() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isConsistencyMaintained_9ab94ac1dc23b105]);
              }

              jboolean SsrIgm06Header::isMelbourneWubbenaConsistencyMaintained() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isMelbourneWubbenaConsistencyMaintained_9ab94ac1dc23b105]);
              }

              void SsrIgm06Header::setIsConsistencyMaintained(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsConsistencyMaintained_fcb96c98de6fad04], a0);
              }

              void SsrIgm06Header::setIsMelbourneWubbenaConsistencyMaintained(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsMelbourneWubbenaConsistencyMaintained_fcb96c98de6fad04], a0);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm06Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm06Header_init_(t_SsrIgm06Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06Header_isConsistencyMaintained(t_SsrIgm06Header *self);
              static PyObject *t_SsrIgm06Header_isMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self);
              static PyObject *t_SsrIgm06Header_setIsConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg);
              static PyObject *t_SsrIgm06Header_setIsMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg);
              static PyObject *t_SsrIgm06Header_get__consistencyMaintained(t_SsrIgm06Header *self, void *data);
              static PyObject *t_SsrIgm06Header_get__melbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, void *data);
              static PyGetSetDef t_SsrIgm06Header__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm06Header, consistencyMaintained),
                DECLARE_GET_FIELD(t_SsrIgm06Header, melbourneWubbenaConsistencyMaintained),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Header, isConsistencyMaintained, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Header, isMelbourneWubbenaConsistencyMaintained, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Header, setIsConsistencyMaintained, METH_O),
                DECLARE_METHOD(t_SsrIgm06Header, setIsMelbourneWubbenaConsistencyMaintained, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06Header)[] = {
                { Py_tp_methods, t_SsrIgm06Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06Header_init_ },
                { Py_tp_getset, t_SsrIgm06Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm06Header, t_SsrIgm06Header, SsrIgm06Header);

              void t_SsrIgm06Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06Header), &PY_TYPE_DEF(SsrIgm06Header), module, "SsrIgm06Header", 0);
              }

              void t_SsrIgm06Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "class_", make_descriptor(SsrIgm06Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "wrapfn_", make_descriptor(t_SsrIgm06Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06Header::wrap_Object(SsrIgm06Header(((t_SsrIgm06Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm06Header_init_(t_SsrIgm06Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm06Header object((jobject) NULL);

                INT_CALL(object = SsrIgm06Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm06Header_isConsistencyMaintained(t_SsrIgm06Header *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isConsistencyMaintained());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SsrIgm06Header_isMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isMelbourneWubbenaConsistencyMaintained());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SsrIgm06Header_setIsConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsConsistencyMaintained(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsConsistencyMaintained", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Header_setIsMelbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsMelbourneWubbenaConsistencyMaintained(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsMelbourneWubbenaConsistencyMaintained", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Header_get__consistencyMaintained(t_SsrIgm06Header *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isConsistencyMaintained());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_SsrIgm06Header_get__melbourneWubbenaConsistencyMaintained(t_SsrIgm06Header *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isMelbourneWubbenaConsistencyMaintained());
                Py_RETURN_BOOL(value);
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
#include "org/orekit/frames/EOPFittedModel.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPFittedModel::class$ = NULL;
      jmethodID *EOPFittedModel::mids$ = NULL;
      bool EOPFittedModel::live$ = false;

      jclass EOPFittedModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPFittedModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bf629f60ffa6b55f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;)V");
          mids$[mid_getDUT1_f0e2f2bf075f7deb] = env->getMethodID(cls, "getDUT1", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getDx_f0e2f2bf075f7deb] = env->getMethodID(cls, "getDx", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getDy_f0e2f2bf075f7deb] = env->getMethodID(cls, "getDy", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getXp_f0e2f2bf075f7deb] = env->getMethodID(cls, "getXp", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getYp_f0e2f2bf075f7deb] = env->getMethodID(cls, "getYp", "()Lorg/orekit/utils/SecularAndHarmonic;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPFittedModel::EOPFittedModel(const ::org::orekit::utils::SecularAndHarmonic & a0, const ::org::orekit::utils::SecularAndHarmonic & a1, const ::org::orekit::utils::SecularAndHarmonic & a2, const ::org::orekit::utils::SecularAndHarmonic & a3, const ::org::orekit::utils::SecularAndHarmonic & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bf629f60ffa6b55f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDUT1() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDUT1_f0e2f2bf075f7deb]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDx() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDx_f0e2f2bf075f7deb]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDy() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDy_f0e2f2bf075f7deb]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getXp() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getXp_f0e2f2bf075f7deb]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getYp() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getYp_f0e2f2bf075f7deb]));
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
      static PyObject *t_EOPFittedModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPFittedModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPFittedModel_init_(t_EOPFittedModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPFittedModel_getDUT1(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getDx(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getDy(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getXp(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getYp(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_get__dUT1(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__dx(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__dy(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__xp(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__yp(t_EOPFittedModel *self, void *data);
      static PyGetSetDef t_EOPFittedModel__fields_[] = {
        DECLARE_GET_FIELD(t_EOPFittedModel, dUT1),
        DECLARE_GET_FIELD(t_EOPFittedModel, dx),
        DECLARE_GET_FIELD(t_EOPFittedModel, dy),
        DECLARE_GET_FIELD(t_EOPFittedModel, xp),
        DECLARE_GET_FIELD(t_EOPFittedModel, yp),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPFittedModel__methods_[] = {
        DECLARE_METHOD(t_EOPFittedModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFittedModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFittedModel, getDUT1, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getDx, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getDy, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getXp, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPFittedModel)[] = {
        { Py_tp_methods, t_EOPFittedModel__methods_ },
        { Py_tp_init, (void *) t_EOPFittedModel_init_ },
        { Py_tp_getset, t_EOPFittedModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPFittedModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPFittedModel, t_EOPFittedModel, EOPFittedModel);

      void t_EOPFittedModel::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPFittedModel), &PY_TYPE_DEF(EOPFittedModel), module, "EOPFittedModel", 0);
      }

      void t_EOPFittedModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "class_", make_descriptor(EOPFittedModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "wrapfn_", make_descriptor(t_EOPFittedModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPFittedModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPFittedModel::initializeClass, 1)))
          return NULL;
        return t_EOPFittedModel::wrap_Object(EOPFittedModel(((t_EOPFittedModel *) arg)->object.this$));
      }
      static PyObject *t_EOPFittedModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPFittedModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPFittedModel_init_(t_EOPFittedModel *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::SecularAndHarmonic a0((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a1((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a2((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a3((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a4((jobject) NULL);
        EOPFittedModel object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = EOPFittedModel(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPFittedModel_getDUT1(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDUT1());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getDx(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDx());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getDy(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDy());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getXp(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getXp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getYp(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getYp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_get__dUT1(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDUT1());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__dx(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDx());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__dy(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDy());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__xp(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getXp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__yp(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getYp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *QZSSScale::class$ = NULL;
      jmethodID *QZSSScale::mids$ = NULL;
      bool QZSSScale::live$ = false;

      jclass QZSSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/QZSSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e7a49f02c43fd893] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String QZSSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jdouble QZSSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement QZSSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      jdouble QZSSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e7a49f02c43fd893], a0.this$, a1.this$);
      }

      ::java::lang::String QZSSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_QZSSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QZSSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QZSSScale_getName(t_QZSSScale *self);
      static PyObject *t_QZSSScale_offsetFromTAI(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_offsetToTAI(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_toString(t_QZSSScale *self, PyObject *args);
      static PyObject *t_QZSSScale_get__name(t_QZSSScale *self, void *data);
      static PyGetSetDef t_QZSSScale__fields_[] = {
        DECLARE_GET_FIELD(t_QZSSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_QZSSScale__methods_[] = {
        DECLARE_METHOD(t_QZSSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QZSSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QZSSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_QZSSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_QZSSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_QZSSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QZSSScale)[] = {
        { Py_tp_methods, t_QZSSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_QZSSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QZSSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QZSSScale, t_QZSSScale, QZSSScale);

      void t_QZSSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(QZSSScale), &PY_TYPE_DEF(QZSSScale), module, "QZSSScale", 0);
      }

      void t_QZSSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "class_", make_descriptor(QZSSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "wrapfn_", make_descriptor(t_QZSSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QZSSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QZSSScale::initializeClass, 1)))
          return NULL;
        return t_QZSSScale::wrap_Object(QZSSScale(((t_QZSSScale *) arg)->object.this$));
      }
      static PyObject *t_QZSSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QZSSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_QZSSScale_getName(t_QZSSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_QZSSScale_offsetFromTAI(t_QZSSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_QZSSScale_offsetToTAI(t_QZSSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_QZSSScale_toString(t_QZSSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(QZSSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_QZSSScale_get__name(t_QZSSScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/SinexLoader.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/files/sinex/DcbSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/sinex/SinexEopEntry.h"
#include "org/orekit/files/sinex/DcbStation.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/files/sinex/Station.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/String.h"
#include "java/util/SortedSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *SinexLoader::class$ = NULL;
        jmethodID *SinexLoader::mids$ = NULL;
        bool SinexLoader::live$ = false;

        jclass SinexLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/SinexLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_init$_4345325324782fee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
            mids$[mid_init$_f266484a594a0c99] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_init$_6d628f04453f432c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_fillHistory_f091b90ef4456eb3] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");
            mids$[mid_getCreationDate_c325492395d89b24] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDcbSatellite_8fdf962db5d73394] = env->getMethodID(cls, "getDcbSatellite", "(Ljava/lang/String;)Lorg/orekit/files/sinex/DcbSatellite;");
            mids$[mid_getDcbStation_e8c6abf43cbaa30c] = env->getMethodID(cls, "getDcbStation", "(Ljava/lang/String;)Lorg/orekit/files/sinex/DcbStation;");
            mids$[mid_getFileEpochEndTime_c325492395d89b24] = env->getMethodID(cls, "getFileEpochEndTime", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getFileEpochStartTime_c325492395d89b24] = env->getMethodID(cls, "getFileEpochStartTime", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getITRFVersion_8bcdfad365f6d36a] = env->getMethodID(cls, "getITRFVersion", "()Lorg/orekit/frames/ITRFVersion;");
            mids$[mid_getParsedEop_810bed48fafb0b9a] = env->getMethodID(cls, "getParsedEop", "()Ljava/util/Map;");
            mids$[mid_getStation_d0046006e4a0f7f7] = env->getMethodID(cls, "getStation", "(Ljava/lang/String;)Lorg/orekit/files/sinex/Station;");
            mids$[mid_getStations_810bed48fafb0b9a] = env->getMethodID(cls, "getStations", "()Ljava/util/Map;");
            mids$[mid_setITRFVersion_44ed599e93e8a30c] = env->getMethodID(cls, "setITRFVersion", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SinexLoader::SinexLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

        SinexLoader::SinexLoader(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4345325324782fee, a0.this$)) {}

        SinexLoader::SinexLoader(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScales & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f266484a594a0c99, a0.this$, a1.this$)) {}

        SinexLoader::SinexLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d628f04453f432c, a0.this$, a1.this$, a2.this$)) {}

        void SinexLoader::fillHistory(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter & a0, const ::java::util::SortedSet & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_fillHistory_f091b90ef4456eb3], a0.this$, a1.this$);
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getCreationDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_c325492395d89b24]));
        }

        ::org::orekit::files::sinex::DcbSatellite SinexLoader::getDcbSatellite(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::DcbSatellite(env->callObjectMethod(this$, mids$[mid_getDcbSatellite_8fdf962db5d73394], a0.this$));
        }

        ::org::orekit::files::sinex::DcbStation SinexLoader::getDcbStation(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::DcbStation(env->callObjectMethod(this$, mids$[mid_getDcbStation_e8c6abf43cbaa30c], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getFileEpochEndTime() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFileEpochEndTime_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate SinexLoader::getFileEpochStartTime() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFileEpochStartTime_c325492395d89b24]));
        }

        ::org::orekit::frames::ITRFVersion SinexLoader::getITRFVersion() const
        {
          return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFVersion_8bcdfad365f6d36a]));
        }

        ::java::util::Map SinexLoader::getParsedEop() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParsedEop_810bed48fafb0b9a]));
        }

        ::org::orekit::files::sinex::Station SinexLoader::getStation(const ::java::lang::String & a0) const
        {
          return ::org::orekit::files::sinex::Station(env->callObjectMethod(this$, mids$[mid_getStation_d0046006e4a0f7f7], a0.this$));
        }

        ::java::util::Map SinexLoader::getStations() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getStations_810bed48fafb0b9a]));
        }

        void SinexLoader::setITRFVersion(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setITRFVersion_44ed599e93e8a30c], a0);
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
      namespace sinex {
        static PyObject *t_SinexLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SinexLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SinexLoader_init_(t_SinexLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SinexLoader_fillHistory(t_SinexLoader *self, PyObject *args);
        static PyObject *t_SinexLoader_getCreationDate(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getDcbSatellite(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getDcbStation(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getFileEpochEndTime(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getFileEpochStartTime(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getITRFVersion(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getParsedEop(t_SinexLoader *self);
        static PyObject *t_SinexLoader_getStation(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_getStations(t_SinexLoader *self);
        static PyObject *t_SinexLoader_setITRFVersion(t_SinexLoader *self, PyObject *arg);
        static PyObject *t_SinexLoader_get__creationDate(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__fileEpochEndTime(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__fileEpochStartTime(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__iTRFVersion(t_SinexLoader *self, void *data);
        static int t_SinexLoader_set__iTRFVersion(t_SinexLoader *self, PyObject *arg, void *data);
        static PyObject *t_SinexLoader_get__parsedEop(t_SinexLoader *self, void *data);
        static PyObject *t_SinexLoader_get__stations(t_SinexLoader *self, void *data);
        static PyGetSetDef t_SinexLoader__fields_[] = {
          DECLARE_GET_FIELD(t_SinexLoader, creationDate),
          DECLARE_GET_FIELD(t_SinexLoader, fileEpochEndTime),
          DECLARE_GET_FIELD(t_SinexLoader, fileEpochStartTime),
          DECLARE_GETSET_FIELD(t_SinexLoader, iTRFVersion),
          DECLARE_GET_FIELD(t_SinexLoader, parsedEop),
          DECLARE_GET_FIELD(t_SinexLoader, stations),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SinexLoader__methods_[] = {
          DECLARE_METHOD(t_SinexLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SinexLoader, fillHistory, METH_VARARGS),
          DECLARE_METHOD(t_SinexLoader, getCreationDate, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getDcbSatellite, METH_O),
          DECLARE_METHOD(t_SinexLoader, getDcbStation, METH_O),
          DECLARE_METHOD(t_SinexLoader, getFileEpochEndTime, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getFileEpochStartTime, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getITRFVersion, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getParsedEop, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, getStation, METH_O),
          DECLARE_METHOD(t_SinexLoader, getStations, METH_NOARGS),
          DECLARE_METHOD(t_SinexLoader, setITRFVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SinexLoader)[] = {
          { Py_tp_methods, t_SinexLoader__methods_ },
          { Py_tp_init, (void *) t_SinexLoader_init_ },
          { Py_tp_getset, t_SinexLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SinexLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SinexLoader, t_SinexLoader, SinexLoader);

        void t_SinexLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(SinexLoader), &PY_TYPE_DEF(SinexLoader), module, "SinexLoader", 0);
        }

        void t_SinexLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "class_", make_descriptor(SinexLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "wrapfn_", make_descriptor(t_SinexLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SinexLoader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SinexLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SinexLoader::initializeClass, 1)))
            return NULL;
          return t_SinexLoader::wrap_Object(SinexLoader(((t_SinexLoader *) arg)->object.this$));
        }
        static PyObject *t_SinexLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SinexLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SinexLoader_init_(t_SinexLoader *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                INT_CALL(object = SinexLoader(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = SinexLoader(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::org::orekit::time::TimeScales a1((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
              {
                INT_CALL(object = SinexLoader(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
              ::org::orekit::time::TimeScales a2((jobject) NULL);
              SinexLoader object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SinexLoader(a0, a1, a2));
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

        static PyObject *t_SinexLoader_fillHistory(t_SinexLoader *self, PyObject *args)
        {
          ::org::orekit::utils::IERSConventions$NutationCorrectionConverter a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::SortedSet a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::utils::IERSConventions$NutationCorrectionConverter::initializeClass, ::java::util::SortedSet::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::parameters_, &a1, &p1, ::java::util::t_SortedSet::parameters_))
          {
            OBJ_CALL(self->object.fillHistory(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "fillHistory", args);
          return NULL;
        }

        static PyObject *t_SinexLoader_getCreationDate(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCreationDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getDcbSatellite(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::DcbSatellite result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getDcbSatellite(a0));
            return ::org::orekit::files::sinex::t_DcbSatellite::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbSatellite", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getDcbStation(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::DcbStation result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getDcbStation(a0));
            return ::org::orekit::files::sinex::t_DcbStation::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbStation", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getFileEpochEndTime(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getFileEpochEndTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getFileEpochStartTime(t_SinexLoader *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getFileEpochStartTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getITRFVersion(t_SinexLoader *self)
        {
          ::org::orekit::frames::ITRFVersion result((jobject) NULL);
          OBJ_CALL(result = self->object.getITRFVersion());
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
        }

        static PyObject *t_SinexLoader_getParsedEop(t_SinexLoader *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getParsedEop());
          return ::java::util::t_Map::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate), ::org::orekit::files::sinex::PY_TYPE(SinexEopEntry));
        }

        static PyObject *t_SinexLoader_getStation(t_SinexLoader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::sinex::Station result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getStation(a0));
            return ::org::orekit::files::sinex::t_Station::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getStation", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_getStations(t_SinexLoader *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getStations());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::sinex::PY_TYPE(Station));
        }

        static PyObject *t_SinexLoader_setITRFVersion(t_SinexLoader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setITRFVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setITRFVersion", arg);
          return NULL;
        }

        static PyObject *t_SinexLoader_get__creationDate(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCreationDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__fileEpochEndTime(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getFileEpochEndTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__fileEpochStartTime(t_SinexLoader *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getFileEpochStartTime());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__iTRFVersion(t_SinexLoader *self, void *data)
        {
          ::org::orekit::frames::ITRFVersion value((jobject) NULL);
          OBJ_CALL(value = self->object.getITRFVersion());
          return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
        }
        static int t_SinexLoader_set__iTRFVersion(t_SinexLoader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setITRFVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "iTRFVersion", arg);
          return -1;
        }

        static PyObject *t_SinexLoader_get__parsedEop(t_SinexLoader *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getParsedEop());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_SinexLoader_get__stations(t_SinexLoader *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getStations());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEnablingPredicate::class$ = NULL;
        jmethodID *FieldEnablingPredicate::mids$ = NULL;
        bool FieldEnablingPredicate::live$ = false;

        jclass FieldEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventIsEnabled_998abd1e19002665] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldEnablingPredicate::eventIsEnabled(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_eventIsEnabled_998abd1e19002665], a0.this$, a1.this$, a2.this$);
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
      namespace events {
        static PyObject *t_FieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEnablingPredicate_of_(t_FieldEnablingPredicate *self, PyObject *args);
        static PyObject *t_FieldEnablingPredicate_eventIsEnabled(t_FieldEnablingPredicate *self, PyObject *args);
        static PyObject *t_FieldEnablingPredicate_get__parameters_(t_FieldEnablingPredicate *self, void *data);
        static PyGetSetDef t_FieldEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEnablingPredicate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_FieldEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEnablingPredicate, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEnablingPredicate, eventIsEnabled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEnablingPredicate)[] = {
          { Py_tp_methods, t_FieldEnablingPredicate__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEnablingPredicate, t_FieldEnablingPredicate, FieldEnablingPredicate);
        PyObject *t_FieldEnablingPredicate::wrap_Object(const FieldEnablingPredicate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEnablingPredicate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEnablingPredicate *self = (t_FieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEnablingPredicate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEnablingPredicate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEnablingPredicate *self = (t_FieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEnablingPredicate), &PY_TYPE_DEF(FieldEnablingPredicate), module, "FieldEnablingPredicate", 0);
        }

        void t_FieldEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "class_", make_descriptor(FieldEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "wrapfn_", make_descriptor(t_FieldEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_FieldEnablingPredicate::wrap_Object(FieldEnablingPredicate(((t_FieldEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_FieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEnablingPredicate_of_(t_FieldEnablingPredicate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEnablingPredicate_eventIsEnabled(t_FieldEnablingPredicate *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean result;

          if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.eventIsEnabled(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventIsEnabled", args);
          return NULL;
        }
        static PyObject *t_FieldEnablingPredicate_get__parameters_(t_FieldEnablingPredicate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *OrbitCorrection::class$ = NULL;
            jmethodID *OrbitCorrection::mids$ = NULL;
            bool OrbitCorrection::live$ = false;

            jclass OrbitCorrection::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/OrbitCorrection");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_5efe929945898acc] = env->getMethodID(cls, "<init>", "(DDDDDD)V");
                mids$[mid_getDeltaOrbitAlongTrack_b74f83833fdad017] = env->getMethodID(cls, "getDeltaOrbitAlongTrack", "()D");
                mids$[mid_getDeltaOrbitCrossTrack_b74f83833fdad017] = env->getMethodID(cls, "getDeltaOrbitCrossTrack", "()D");
                mids$[mid_getDeltaOrbitRadial_b74f83833fdad017] = env->getMethodID(cls, "getDeltaOrbitRadial", "()D");
                mids$[mid_getDotOrbitDeltaAlongTrack_b74f83833fdad017] = env->getMethodID(cls, "getDotOrbitDeltaAlongTrack", "()D");
                mids$[mid_getDotOrbitDeltaCrossTrack_b74f83833fdad017] = env->getMethodID(cls, "getDotOrbitDeltaCrossTrack", "()D");
                mids$[mid_getDotOrbitDeltaRadial_b74f83833fdad017] = env->getMethodID(cls, "getDotOrbitDeltaRadial", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OrbitCorrection::OrbitCorrection(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5efe929945898acc, a0, a1, a2, a3, a4, a5)) {}

            jdouble OrbitCorrection::getDeltaOrbitAlongTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitAlongTrack_b74f83833fdad017]);
            }

            jdouble OrbitCorrection::getDeltaOrbitCrossTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitCrossTrack_b74f83833fdad017]);
            }

            jdouble OrbitCorrection::getDeltaOrbitRadial() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaOrbitRadial_b74f83833fdad017]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaAlongTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaAlongTrack_b74f83833fdad017]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaCrossTrack() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaCrossTrack_b74f83833fdad017]);
            }

            jdouble OrbitCorrection::getDotOrbitDeltaRadial() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDotOrbitDeltaRadial_b74f83833fdad017]);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            static PyObject *t_OrbitCorrection_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OrbitCorrection_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OrbitCorrection_init_(t_OrbitCorrection *self, PyObject *args, PyObject *kwds);
            static PyObject *t_OrbitCorrection_getDeltaOrbitAlongTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDeltaOrbitCrossTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDeltaOrbitRadial(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaAlongTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaCrossTrack(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_getDotOrbitDeltaRadial(t_OrbitCorrection *self);
            static PyObject *t_OrbitCorrection_get__deltaOrbitAlongTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__deltaOrbitCrossTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__deltaOrbitRadial(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaAlongTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaCrossTrack(t_OrbitCorrection *self, void *data);
            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaRadial(t_OrbitCorrection *self, void *data);
            static PyGetSetDef t_OrbitCorrection__fields_[] = {
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitAlongTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitCrossTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, deltaOrbitRadial),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaAlongTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaCrossTrack),
              DECLARE_GET_FIELD(t_OrbitCorrection, dotOrbitDeltaRadial),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OrbitCorrection__methods_[] = {
              DECLARE_METHOD(t_OrbitCorrection, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OrbitCorrection, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitAlongTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitCrossTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDeltaOrbitRadial, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaAlongTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaCrossTrack, METH_NOARGS),
              DECLARE_METHOD(t_OrbitCorrection, getDotOrbitDeltaRadial, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OrbitCorrection)[] = {
              { Py_tp_methods, t_OrbitCorrection__methods_ },
              { Py_tp_init, (void *) t_OrbitCorrection_init_ },
              { Py_tp_getset, t_OrbitCorrection__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OrbitCorrection)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(OrbitCorrection, t_OrbitCorrection, OrbitCorrection);

            void t_OrbitCorrection::install(PyObject *module)
            {
              installType(&PY_TYPE(OrbitCorrection), &PY_TYPE_DEF(OrbitCorrection), module, "OrbitCorrection", 0);
            }

            void t_OrbitCorrection::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "class_", make_descriptor(OrbitCorrection::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "wrapfn_", make_descriptor(t_OrbitCorrection::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCorrection), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OrbitCorrection_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OrbitCorrection::initializeClass, 1)))
                return NULL;
              return t_OrbitCorrection::wrap_Object(OrbitCorrection(((t_OrbitCorrection *) arg)->object.this$));
            }
            static PyObject *t_OrbitCorrection_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OrbitCorrection::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OrbitCorrection_init_(t_OrbitCorrection *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              OrbitCorrection object((jobject) NULL);

              if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = OrbitCorrection(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitAlongTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitAlongTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitCrossTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitCrossTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDeltaOrbitRadial(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaOrbitRadial());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaAlongTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaAlongTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaCrossTrack(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaCrossTrack());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_getDotOrbitDeltaRadial(t_OrbitCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDotOrbitDeltaRadial());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitAlongTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitAlongTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitCrossTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitCrossTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__deltaOrbitRadial(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaOrbitRadial());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaAlongTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaAlongTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaCrossTrack(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaCrossTrack());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_OrbitCorrection_get__dotOrbitDeltaRadial(t_OrbitCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDotOrbitDeltaRadial());
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
#include "org/orekit/data/FundamentalNutationArguments.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/io/InputStream.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FundamentalNutationArguments::class$ = NULL;
      jmethodID *FundamentalNutationArguments::mids$ = NULL;
      bool FundamentalNutationArguments::live$ = false;

      jclass FundamentalNutationArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FundamentalNutationArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4dca6754391e0716] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/util/List;)V");
          mids$[mid_init$_e3a60f0443eea66f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_init$_eef6cdf2d94d9097] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/util/List;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_init$_9852e659e38b28b8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Ljava/io/InputStream;Ljava/lang/String;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_evaluateAll_8263d887c1bcc144] = env->getMethodID(cls, "evaluateAll", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/data/BodiesElements;");
          mids$[mid_evaluateAll_277b5594ce9ed429] = env->getMethodID(cls, "evaluateAll", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/data/FieldBodiesElements;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4dca6754391e0716, a0.this$, a1.this$, a2.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::io::InputStream & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e3a60f0443eea66f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeScales & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eef6cdf2d94d9097, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FundamentalNutationArguments::FundamentalNutationArguments(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::time::TimeScale & a1, const ::java::io::InputStream & a2, const ::java::lang::String & a3, const ::org::orekit::time::TimeScales & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9852e659e38b28b8, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::data::BodiesElements FundamentalNutationArguments::evaluateAll(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::data::BodiesElements(env->callObjectMethod(this$, mids$[mid_evaluateAll_8263d887c1bcc144], a0.this$));
      }

      ::org::orekit::data::FieldBodiesElements FundamentalNutationArguments::evaluateAll(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::data::FieldBodiesElements(env->callObjectMethod(this$, mids$[mid_evaluateAll_277b5594ce9ed429], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_FundamentalNutationArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FundamentalNutationArguments_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FundamentalNutationArguments_init_(t_FundamentalNutationArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FundamentalNutationArguments_evaluateAll(t_FundamentalNutationArguments *self, PyObject *args);

      static PyMethodDef t_FundamentalNutationArguments__methods_[] = {
        DECLARE_METHOD(t_FundamentalNutationArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FundamentalNutationArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FundamentalNutationArguments, evaluateAll, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FundamentalNutationArguments)[] = {
        { Py_tp_methods, t_FundamentalNutationArguments__methods_ },
        { Py_tp_init, (void *) t_FundamentalNutationArguments_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FundamentalNutationArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FundamentalNutationArguments, t_FundamentalNutationArguments, FundamentalNutationArguments);

      void t_FundamentalNutationArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(FundamentalNutationArguments), &PY_TYPE_DEF(FundamentalNutationArguments), module, "FundamentalNutationArguments", 0);
      }

      void t_FundamentalNutationArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "class_", make_descriptor(FundamentalNutationArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "wrapfn_", make_descriptor(t_FundamentalNutationArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FundamentalNutationArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FundamentalNutationArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FundamentalNutationArguments::initializeClass, 1)))
          return NULL;
        return t_FundamentalNutationArguments::wrap_Object(FundamentalNutationArguments(((t_FundamentalNutationArguments *) arg)->object.this$));
      }
      static PyObject *t_FundamentalNutationArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FundamentalNutationArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FundamentalNutationArguments_init_(t_FundamentalNutationArguments *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::io::InputStream a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "Kkks", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::io::InputStream::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "KkKk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::io::InputStream a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::time::TimeScales a4((jobject) NULL);
            FundamentalNutationArguments object((jobject) NULL);

            if (!parseArgs(args, "Kkksk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::java::io::InputStream::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = FundamentalNutationArguments(a0, a1, a2, a3, a4));
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

      static PyObject *t_FundamentalNutationArguments_evaluateAll(t_FundamentalNutationArguments *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::data::BodiesElements result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.evaluateAll(a0));
              return ::org::orekit::data::t_BodiesElements::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::data::FieldBodiesElements result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.evaluateAll(a0));
              return ::org::orekit::data::t_FieldBodiesElements::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluateAll", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Byte.h"
#include "java/lang/Byte.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Byte::class$ = NULL;
    jmethodID *Byte::mids$ = NULL;
    bool Byte::live$ = false;
    jint Byte::BYTES = (jint) 0;
    jbyte Byte::MAX_VALUE = (jbyte) 0;
    jbyte Byte::MIN_VALUE = (jbyte) 0;
    jint Byte::SIZE = (jint) 0;
    ::java::lang::Class *Byte::TYPE = NULL;

    jclass Byte::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Byte");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_693a437249a56ecd] = env->getMethodID(cls, "<init>", "(B)V");
        mids$[mid_byteValue_82ba37184c5152a3] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_f794c048a600eb0b] = env->getStaticMethodID(cls, "compare", "(BB)I");
        mids$[mid_compareTo_3473363a2c415e3d] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Byte;)I");
        mids$[mid_compareUnsigned_f794c048a600eb0b] = env->getStaticMethodID(cls, "compareUnsigned", "(BB)I");
        mids$[mid_decode_aa87ba6c79ccb038] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Byte;");
        mids$[mid_doubleValue_b74f83833fdad017] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_1fb1bf0772ae5db7] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_6aa6edba525f59f6] = env->getStaticMethodID(cls, "hashCode", "(B)I");
        mids$[mid_intValue_55546ef6a647f39b] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_6c0ce7e438e5ded4] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_parseByte_9343b8e301fce9f5] = env->getStaticMethodID(cls, "parseByte", "(Ljava/lang/String;)B");
        mids$[mid_parseByte_c27b8b77830595b4] = env->getStaticMethodID(cls, "parseByte", "(Ljava/lang/String;I)B");
        mids$[mid_shortValue_02a2271f89f4492b] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_f271aa7672b03c42] = env->getStaticMethodID(cls, "toString", "(B)Ljava/lang/String;");
        mids$[mid_toUnsignedInt_6aa6edba525f59f6] = env->getStaticMethodID(cls, "toUnsignedInt", "(B)I");
        mids$[mid_toUnsignedLong_de8fc968a17e269a] = env->getStaticMethodID(cls, "toUnsignedLong", "(B)J");
        mids$[mid_valueOf_aa87ba6c79ccb038] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Byte;");
        mids$[mid_valueOf_0adc4b7056ad497c] = env->getStaticMethodID(cls, "valueOf", "(B)Ljava/lang/Byte;");
        mids$[mid_valueOf_8d9c7dc0fe337043] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Byte;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticByteField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticByteField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Byte::Byte(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    Byte::Byte(jbyte a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_693a437249a56ecd, a0)) {}

    jbyte Byte::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_82ba37184c5152a3]);
    }

    jint Byte::compare(jbyte a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_f794c048a600eb0b], a0, a1);
    }

    jint Byte::compareTo(const Byte & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_3473363a2c415e3d], a0.this$);
    }

    jint Byte::compareUnsigned(jbyte a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_f794c048a600eb0b], a0, a1);
    }

    Byte Byte::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_decode_aa87ba6c79ccb038], a0.this$));
    }

    jdouble Byte::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_b74f83833fdad017]);
    }

    jboolean Byte::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jfloat Byte::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_1fb1bf0772ae5db7]);
    }

    jint Byte::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jint Byte::hashCode(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_6aa6edba525f59f6], a0);
    }

    jint Byte::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_55546ef6a647f39b]);
    }

    jlong Byte::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_6c0ce7e438e5ded4]);
    }

    jbyte Byte::parseByte(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_parseByte_9343b8e301fce9f5], a0.this$);
    }

    jbyte Byte::parseByte(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticByteMethod(cls, mids$[mid_parseByte_c27b8b77830595b4], a0.this$, a1);
    }

    jshort Byte::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_02a2271f89f4492b]);
    }

    ::java::lang::String Byte::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Byte::toString(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_f271aa7672b03c42], a0));
    }

    jint Byte::toUnsignedInt(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_toUnsignedInt_6aa6edba525f59f6], a0);
    }

    jlong Byte::toUnsignedLong(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_toUnsignedLong_de8fc968a17e269a], a0);
    }

    Byte Byte::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_aa87ba6c79ccb038], a0.this$));
    }

    Byte Byte::valueOf(jbyte a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0adc4b7056ad497c], a0));
    }

    Byte Byte::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Byte(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8d9c7dc0fe337043], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Byte_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Byte_init_(t_Byte *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Byte_byteValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_compareTo(t_Byte *self, PyObject *arg);
    static PyObject *t_Byte_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_doubleValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_equals(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_floatValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_hashCode(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_intValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_longValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_parseByte(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_shortValue(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_toString(t_Byte *self, PyObject *args);
    static PyObject *t_Byte_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Byte_toUnsignedInt(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_toUnsignedLong(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Byte_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Byte__methods_[] = {
      DECLARE_METHOD(t_Byte, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, compareTo, METH_O),
      DECLARE_METHOD(t_Byte, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, equals, METH_VARARGS),
      DECLARE_METHOD(t_Byte, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Byte, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, parseByte, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Byte, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Byte, toString, METH_VARARGS),
      DECLARE_METHOD(t_Byte, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, toUnsignedInt, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, toUnsignedLong, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Byte, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Byte)[] = {
      { Py_tp_methods, t_Byte__methods_ },
      { Py_tp_init, (void *) t_Byte_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Byte)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Byte, t_Byte, Byte);

    void t_Byte::install(PyObject *module)
    {
      installType(&PY_TYPE(Byte), &PY_TYPE_DEF(Byte), module, "Byte", 0);
    }

    void t_Byte::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "class_", make_descriptor(Byte::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "wrapfn_", make_descriptor(unboxByte));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "boxfn_", make_descriptor(boxByte));
      env->getClass(Byte::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "BYTES", make_descriptor(Byte::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "MAX_VALUE", make_descriptor(Byte::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "MIN_VALUE", make_descriptor(Byte::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "SIZE", make_descriptor(Byte::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Byte), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Byte::TYPE)));
    }

    static PyObject *t_Byte_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Byte::initializeClass, 1)))
        return NULL;
      return t_Byte::wrap_Object(Byte(((t_Byte *) arg)->object.this$));
    }
    static PyObject *t_Byte_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Byte::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Byte_init_(t_Byte *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Byte object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Byte(a0));
            self->object = object;
            break;
          }
        }
        {
          jbyte a0;
          Byte object((jobject) NULL);

          if (!parseArgs(args, "B", &a0))
          {
            INT_CALL(object = Byte(a0));
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

    static PyObject *t_Byte_byteValue(t_Byte *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Byte_compare(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jbyte a1;
      jint result;

      if (!parseArgs(args, "BB", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Byte::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Byte_compareTo(t_Byte *self, PyObject *arg)
    {
      Byte a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Byte), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Byte_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jbyte a1;
      jint result;

      if (!parseArgs(args, "BB", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Byte::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Byte_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Byte result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::decode(a0));
        return t_Byte::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Byte_doubleValue(t_Byte *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Byte_equals(t_Byte *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Byte_floatValue(t_Byte *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Byte_hashCode(t_Byte *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Byte_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      jint result;

      if (!parseArgs(args, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Byte_intValue(t_Byte *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Byte_longValue(t_Byte *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Byte_parseByte(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jbyte result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::parseByte(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jbyte result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Byte::parseByte(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseByte", args);
      return NULL;
    }

    static PyObject *t_Byte_shortValue(t_Byte *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Byte_toString(t_Byte *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Byte), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Byte_toString_(PyTypeObject *type, PyObject *args)
    {
      jbyte a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Byte_toUnsignedInt(PyTypeObject *type, PyObject *arg)
    {
      jbyte a0;
      jint result;

      if (!parseArg(arg, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toUnsignedInt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "toUnsignedInt", arg);
      return NULL;
    }

    static PyObject *t_Byte_toUnsignedLong(PyTypeObject *type, PyObject *arg)
    {
      jbyte a0;
      jlong result;

      if (!parseArg(arg, "B", &a0))
      {
        OBJ_CALL(result = ::java::lang::Byte::toUnsignedLong(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "toUnsignedLong", arg);
      return NULL;
    }

    static PyObject *t_Byte_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Byte result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0));
            return t_Byte::wrap_Object(result);
          }
        }
        {
          jbyte a0;
          Byte result((jobject) NULL);

          if (!parseArgs(args, "B", &a0))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0));
            return t_Byte::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Byte result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Byte::valueOf(a0, a1));
            return t_Byte::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame5B.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame5B::class$ = NULL;
          jmethodID *SubFrame5B::mids$ = NULL;
          bool SubFrame5B::live$ = false;

          jclass SubFrame5B::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame5B");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReservedA10_55546ef6a647f39b] = env->getMethodID(cls, "getReservedA10", "()I");
              mids$[mid_getReservedB10_55546ef6a647f39b] = env->getMethodID(cls, "getReservedB10", "()I");
              mids$[mid_getSvHealth_0e7cf35192c3effe] = env->getMethodID(cls, "getSvHealth", "(I)I");
              mids$[mid_getTOA_55546ef6a647f39b] = env->getMethodID(cls, "getTOA", "()I");
              mids$[mid_getWeekNumber_55546ef6a647f39b] = env->getMethodID(cls, "getWeekNumber", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame5B::getReservedA10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedA10_55546ef6a647f39b]);
          }

          jint SubFrame5B::getReservedB10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedB10_55546ef6a647f39b]);
          }

          jint SubFrame5B::getSvHealth(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_0e7cf35192c3effe], a0);
          }

          jint SubFrame5B::getTOA() const
          {
            return env->callIntMethod(this$, mids$[mid_getTOA_55546ef6a647f39b]);
          }

          jint SubFrame5B::getWeekNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumber_55546ef6a647f39b]);
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
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame5B_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame5B_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame5B_getReservedA10(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getReservedB10(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getSvHealth(t_SubFrame5B *self, PyObject *arg);
          static PyObject *t_SubFrame5B_getTOA(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_getWeekNumber(t_SubFrame5B *self);
          static PyObject *t_SubFrame5B_get__reservedA10(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__reservedB10(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__tOA(t_SubFrame5B *self, void *data);
          static PyObject *t_SubFrame5B_get__weekNumber(t_SubFrame5B *self, void *data);
          static PyGetSetDef t_SubFrame5B__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame5B, reservedA10),
            DECLARE_GET_FIELD(t_SubFrame5B, reservedB10),
            DECLARE_GET_FIELD(t_SubFrame5B, tOA),
            DECLARE_GET_FIELD(t_SubFrame5B, weekNumber),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame5B__methods_[] = {
            DECLARE_METHOD(t_SubFrame5B, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame5B, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame5B, getReservedA10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getReservedB10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getSvHealth, METH_O),
            DECLARE_METHOD(t_SubFrame5B, getTOA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame5B, getWeekNumber, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame5B)[] = {
            { Py_tp_methods, t_SubFrame5B__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame5B__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame5B)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame5B, t_SubFrame5B, SubFrame5B);

          void t_SubFrame5B::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame5B), &PY_TYPE_DEF(SubFrame5B), module, "SubFrame5B", 0);
          }

          void t_SubFrame5B::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "class_", make_descriptor(SubFrame5B::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "wrapfn_", make_descriptor(t_SubFrame5B::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame5B), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame5B_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame5B::initializeClass, 1)))
              return NULL;
            return t_SubFrame5B::wrap_Object(SubFrame5B(((t_SubFrame5B *) arg)->object.this$));
          }
          static PyObject *t_SubFrame5B_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame5B::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame5B_getReservedA10(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedA10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getReservedB10(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedB10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getSvHealth(t_SubFrame5B *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getSvHealth(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSvHealth", arg);
            return NULL;
          }

          static PyObject *t_SubFrame5B_getTOA(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTOA());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_getWeekNumber(t_SubFrame5B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame5B_get__reservedA10(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedA10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__reservedB10(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedB10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__tOA(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTOA());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame5B_get__weekNumber(t_SubFrame5B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *StepNormalizerMode::class$ = NULL;
        jmethodID *StepNormalizerMode::mids$ = NULL;
        bool StepNormalizerMode::live$ = false;
        StepNormalizerMode *StepNormalizerMode::INCREMENT = NULL;
        StepNormalizerMode *StepNormalizerMode::MULTIPLES = NULL;

        jclass StepNormalizerMode::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/StepNormalizerMode");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_5210eb97c181891e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/sampling/StepNormalizerMode;");
            mids$[mid_values_4e88c687f0832d68] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/sampling/StepNormalizerMode;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INCREMENT = new StepNormalizerMode(env->getStaticObjectField(cls, "INCREMENT", "Lorg/hipparchus/ode/sampling/StepNormalizerMode;"));
            MULTIPLES = new StepNormalizerMode(env->getStaticObjectField(cls, "MULTIPLES", "Lorg/hipparchus/ode/sampling/StepNormalizerMode;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepNormalizerMode StepNormalizerMode::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StepNormalizerMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5210eb97c181891e], a0.this$));
        }

        JArray< StepNormalizerMode > StepNormalizerMode::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StepNormalizerMode >(env->callStaticObjectMethod(cls, mids$[mid_values_4e88c687f0832d68]));
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
      namespace sampling {
        static PyObject *t_StepNormalizerMode_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerMode_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerMode_of_(t_StepNormalizerMode *self, PyObject *args);
        static PyObject *t_StepNormalizerMode_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_StepNormalizerMode_values(PyTypeObject *type);
        static PyObject *t_StepNormalizerMode_get__parameters_(t_StepNormalizerMode *self, void *data);
        static PyGetSetDef t_StepNormalizerMode__fields_[] = {
          DECLARE_GET_FIELD(t_StepNormalizerMode, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepNormalizerMode__methods_[] = {
          DECLARE_METHOD(t_StepNormalizerMode, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerMode, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerMode, of_, METH_VARARGS),
          DECLARE_METHOD(t_StepNormalizerMode, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerMode, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepNormalizerMode)[] = {
          { Py_tp_methods, t_StepNormalizerMode__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StepNormalizerMode__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepNormalizerMode)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(StepNormalizerMode, t_StepNormalizerMode, StepNormalizerMode);
        PyObject *t_StepNormalizerMode::wrap_Object(const StepNormalizerMode& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerMode::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerMode *self = (t_StepNormalizerMode *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_StepNormalizerMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerMode::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerMode *self = (t_StepNormalizerMode *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_StepNormalizerMode::install(PyObject *module)
        {
          installType(&PY_TYPE(StepNormalizerMode), &PY_TYPE_DEF(StepNormalizerMode), module, "StepNormalizerMode", 0);
        }

        void t_StepNormalizerMode::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "class_", make_descriptor(StepNormalizerMode::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "wrapfn_", make_descriptor(t_StepNormalizerMode::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "boxfn_", make_descriptor(boxObject));
          env->getClass(StepNormalizerMode::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "INCREMENT", make_descriptor(t_StepNormalizerMode::wrap_Object(*StepNormalizerMode::INCREMENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerMode), "MULTIPLES", make_descriptor(t_StepNormalizerMode::wrap_Object(*StepNormalizerMode::MULTIPLES)));
        }

        static PyObject *t_StepNormalizerMode_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepNormalizerMode::initializeClass, 1)))
            return NULL;
          return t_StepNormalizerMode::wrap_Object(StepNormalizerMode(((t_StepNormalizerMode *) arg)->object.this$));
        }
        static PyObject *t_StepNormalizerMode_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepNormalizerMode::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StepNormalizerMode_of_(t_StepNormalizerMode *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_StepNormalizerMode_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          StepNormalizerMode result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerMode::valueOf(a0));
            return t_StepNormalizerMode::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_StepNormalizerMode_values(PyTypeObject *type)
        {
          JArray< StepNormalizerMode > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerMode::values());
          return JArray<jobject>(result.this$).wrap(t_StepNormalizerMode::wrap_jobject);
        }
        static PyObject *t_StepNormalizerMode_get__parameters_(t_StepNormalizerMode *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/FixedPointTleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *FixedPointTleGenerationAlgorithm::class$ = NULL;
            jmethodID *FixedPointTleGenerationAlgorithm::mids$ = NULL;
            bool FixedPointTleGenerationAlgorithm::live$ = false;
            jdouble FixedPointTleGenerationAlgorithm::EPSILON_DEFAULT = (jdouble) 0;
            jint FixedPointTleGenerationAlgorithm::MAX_ITERATIONS_DEFAULT = (jint) 0;
            jdouble FixedPointTleGenerationAlgorithm::SCALE_DEFAULT = (jdouble) 0;

            jclass FixedPointTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/FixedPointTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_d2215b3b0e5c9451] = env->getMethodID(cls, "<init>", "(DID)V");
                mids$[mid_init$_2aa894bf8ef2619f] = env->getMethodID(cls, "<init>", "(DIDLorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)V");
                mids$[mid_generate_6e4ccfee7888f727] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_7dac79832039ea3a] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                EPSILON_DEFAULT = env->getStaticDoubleField(cls, "EPSILON_DEFAULT");
                MAX_ITERATIONS_DEFAULT = env->getStaticIntField(cls, "MAX_ITERATIONS_DEFAULT");
                SCALE_DEFAULT = env->getStaticDoubleField(cls, "SCALE_DEFAULT");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm(jdouble a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d2215b3b0e5c9451, a0, a1, a2)) {}

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm(jdouble a0, jint a1, jdouble a2, const ::org::orekit::time::TimeScale & a3, const ::org::orekit::frames::Frame & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2aa894bf8ef2619f, a0, a1, a2, a3.this$, a4.this$)) {}

            ::org::orekit::propagation::analytical::tle::FieldTLE FixedPointTleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_6e4ccfee7888f727], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE FixedPointTleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_7dac79832039ea3a], a0.this$, a1.this$));
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
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {
            static PyObject *t_FixedPointTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FixedPointTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_FixedPointTleGenerationAlgorithm_init_(t_FixedPointTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FixedPointTleGenerationAlgorithm_generate(t_FixedPointTleGenerationAlgorithm *self, PyObject *args);

            static PyMethodDef t_FixedPointTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FixedPointTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_FixedPointTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_FixedPointTleGenerationAlgorithm_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FixedPointTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FixedPointTleGenerationAlgorithm, t_FixedPointTleGenerationAlgorithm, FixedPointTleGenerationAlgorithm);

            void t_FixedPointTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(FixedPointTleGenerationAlgorithm), &PY_TYPE_DEF(FixedPointTleGenerationAlgorithm), module, "FixedPointTleGenerationAlgorithm", 0);
            }

            void t_FixedPointTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "class_", make_descriptor(FixedPointTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_FixedPointTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              env->getClass(FixedPointTleGenerationAlgorithm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "EPSILON_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::EPSILON_DEFAULT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "MAX_ITERATIONS_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::MAX_ITERATIONS_DEFAULT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "SCALE_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::SCALE_DEFAULT));
            }

            static PyObject *t_FixedPointTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FixedPointTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_FixedPointTleGenerationAlgorithm::wrap_Object(FixedPointTleGenerationAlgorithm(((t_FixedPointTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_FixedPointTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FixedPointTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_FixedPointTleGenerationAlgorithm_init_(t_FixedPointTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  INT_CALL(object = FixedPointTleGenerationAlgorithm());
                  self->object = object;
                  break;
                }
               case 3:
                {
                  jdouble a0;
                  jint a1;
                  jdouble a2;
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "DID", &a0, &a1, &a2))
                  {
                    INT_CALL(object = FixedPointTleGenerationAlgorithm(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jint a1;
                  jdouble a2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::frames::Frame a4((jobject) NULL);
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "DIDkk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = FixedPointTleGenerationAlgorithm(a0, a1, a2, a3, a4));
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

            static PyObject *t_FixedPointTleGenerationAlgorithm_generate(t_FixedPointTleGenerationAlgorithm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "generate", args);
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
#include "org/orekit/gnss/metric/messages/rtcm/RtcmMessage.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {

            ::java::lang::Class *RtcmMessage::class$ = NULL;
            jmethodID *RtcmMessage::mids$ = NULL;
            bool RtcmMessage::live$ = false;

            jclass RtcmMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/RtcmMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6a13329ba9fb80e7] = env->getMethodID(cls, "<init>", "(ILjava/util/List;)V");
                mids$[mid_getData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getData", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RtcmMessage::RtcmMessage(jint a0, const ::java::util::List & a1) : ::org::orekit::gnss::metric::messages::ParsedMessage(env->newObject(initializeClass, &mids$, mid_init$_6a13329ba9fb80e7, a0, a1.this$)) {}

            ::java::util::List RtcmMessage::getData() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_e62d3bb06d56d7e3]));
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            static PyObject *t_RtcmMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmMessage_of_(t_RtcmMessage *self, PyObject *args);
            static int t_RtcmMessage_init_(t_RtcmMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RtcmMessage_getData(t_RtcmMessage *self);
            static PyObject *t_RtcmMessage_get__data(t_RtcmMessage *self, void *data);
            static PyObject *t_RtcmMessage_get__parameters_(t_RtcmMessage *self, void *data);
            static PyGetSetDef t_RtcmMessage__fields_[] = {
              DECLARE_GET_FIELD(t_RtcmMessage, data),
              DECLARE_GET_FIELD(t_RtcmMessage, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RtcmMessage__methods_[] = {
              DECLARE_METHOD(t_RtcmMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmMessage, of_, METH_VARARGS),
              DECLARE_METHOD(t_RtcmMessage, getData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RtcmMessage)[] = {
              { Py_tp_methods, t_RtcmMessage__methods_ },
              { Py_tp_init, (void *) t_RtcmMessage_init_ },
              { Py_tp_getset, t_RtcmMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RtcmMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ParsedMessage),
              NULL
            };

            DEFINE_TYPE(RtcmMessage, t_RtcmMessage, RtcmMessage);
            PyObject *t_RtcmMessage::wrap_Object(const RtcmMessage& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RtcmMessage::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RtcmMessage *self = (t_RtcmMessage *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RtcmMessage::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RtcmMessage::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RtcmMessage *self = (t_RtcmMessage *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RtcmMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(RtcmMessage), &PY_TYPE_DEF(RtcmMessage), module, "RtcmMessage", 0);
            }

            void t_RtcmMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "class_", make_descriptor(RtcmMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "wrapfn_", make_descriptor(t_RtcmMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RtcmMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RtcmMessage::initializeClass, 1)))
                return NULL;
              return t_RtcmMessage::wrap_Object(RtcmMessage(((t_RtcmMessage *) arg)->object.this$));
            }
            static PyObject *t_RtcmMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RtcmMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RtcmMessage_of_(t_RtcmMessage *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_RtcmMessage_init_(t_RtcmMessage *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              RtcmMessage object((jobject) NULL);

              if (!parseArgs(args, "IK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = RtcmMessage(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_RtcmMessage_getData(t_RtcmMessage *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getData());
              return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
            }
            static PyObject *t_RtcmMessage_get__parameters_(t_RtcmMessage *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_RtcmMessage_get__data(t_RtcmMessage *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getData());
              return ::java::util::t_List::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmMetadataKey::class$ = NULL;
              jmethodID *AcmMetadataKey::mids$ = NULL;
              bool AcmMetadataKey::live$ = false;
              AcmMetadataKey *AcmMetadataKey::ACM_DATA_ELEMENTS = NULL;
              AcmMetadataKey *AcmMetadataKey::CATALOG_NAME = NULL;
              AcmMetadataKey *AcmMetadataKey::EPOCH_TZERO = NULL;
              AcmMetadataKey *AcmMetadataKey::INTERNATIONAL_DESIGNATOR = NULL;
              AcmMetadataKey *AcmMetadataKey::NEXT_LEAP_EPOCH = NULL;
              AcmMetadataKey *AcmMetadataKey::NEXT_LEAP_TAIMUTC = NULL;
              AcmMetadataKey *AcmMetadataKey::OBJECT_DESIGNATOR = NULL;
              AcmMetadataKey *AcmMetadataKey::ODM_MSG_LINK = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_ADDRESS = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_EMAIL = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_PHONE = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_POC = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_POSITION = NULL;
              AcmMetadataKey *AcmMetadataKey::START_TIME = NULL;
              AcmMetadataKey *AcmMetadataKey::STOP_TIME = NULL;
              AcmMetadataKey *AcmMetadataKey::TAIMUTC_AT_TZERO = NULL;

              jclass AcmMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_bc8d49016118987c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadata;)Z");
                  mids$[mid_valueOf_c7b77242db87c4d9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;");
                  mids$[mid_values_c93601e6a60f4ab4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACM_DATA_ELEMENTS = new AcmMetadataKey(env->getStaticObjectField(cls, "ACM_DATA_ELEMENTS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  CATALOG_NAME = new AcmMetadataKey(env->getStaticObjectField(cls, "CATALOG_NAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  EPOCH_TZERO = new AcmMetadataKey(env->getStaticObjectField(cls, "EPOCH_TZERO", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  INTERNATIONAL_DESIGNATOR = new AcmMetadataKey(env->getStaticObjectField(cls, "INTERNATIONAL_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  NEXT_LEAP_EPOCH = new AcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_EPOCH", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  NEXT_LEAP_TAIMUTC = new AcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_TAIMUTC", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  OBJECT_DESIGNATOR = new AcmMetadataKey(env->getStaticObjectField(cls, "OBJECT_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ODM_MSG_LINK = new AcmMetadataKey(env->getStaticObjectField(cls, "ODM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_ADDRESS = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_ADDRESS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_EMAIL = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_EMAIL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_PHONE = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_PHONE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_POC = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POC", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_POSITION = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POSITION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  START_TIME = new AcmMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  STOP_TIME = new AcmMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  TAIMUTC_AT_TZERO = new AcmMetadataKey(env->getStaticObjectField(cls, "TAIMUTC_AT_TZERO", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AcmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_bc8d49016118987c], a0.this$, a1.this$, a2.this$);
              }

              AcmMetadataKey AcmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c7b77242db87c4d9], a0.this$));
              }

              JArray< AcmMetadataKey > AcmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c93601e6a60f4ab4]));
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
          namespace adm {
            namespace acm {
              static PyObject *t_AcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmMetadataKey_of_(t_AcmMetadataKey *self, PyObject *args);
              static PyObject *t_AcmMetadataKey_process(t_AcmMetadataKey *self, PyObject *args);
              static PyObject *t_AcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AcmMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AcmMetadataKey_get__parameters_(t_AcmMetadataKey *self, void *data);
              static PyGetSetDef t_AcmMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AcmMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AcmMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AcmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmMetadataKey)[] = {
                { Py_tp_methods, t_AcmMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AcmMetadataKey, t_AcmMetadataKey, AcmMetadataKey);
              PyObject *t_AcmMetadataKey::wrap_Object(const AcmMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmMetadataKey *self = (t_AcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AcmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmMetadataKey *self = (t_AcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AcmMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmMetadataKey), &PY_TYPE_DEF(AcmMetadataKey), module, "AcmMetadataKey", 0);
              }

              void t_AcmMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "class_", make_descriptor(AcmMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "wrapfn_", make_descriptor(t_AcmMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ACM_DATA_ELEMENTS", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ACM_DATA_ELEMENTS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "CATALOG_NAME", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::CATALOG_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "EPOCH_TZERO", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::EPOCH_TZERO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "INTERNATIONAL_DESIGNATOR", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::INTERNATIONAL_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "NEXT_LEAP_EPOCH", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::NEXT_LEAP_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "NEXT_LEAP_TAIMUTC", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::NEXT_LEAP_TAIMUTC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "OBJECT_DESIGNATOR", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::OBJECT_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ODM_MSG_LINK", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ODM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_ADDRESS", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_ADDRESS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_EMAIL", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_EMAIL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_PHONE", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_PHONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_POC", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_POC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_POSITION", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_POSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "START_TIME", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "STOP_TIME", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "TAIMUTC_AT_TZERO", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::TAIMUTC_AT_TZERO)));
              }

              static PyObject *t_AcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AcmMetadataKey::wrap_Object(AcmMetadataKey(((t_AcmMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmMetadataKey_of_(t_AcmMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmMetadataKey_process(t_AcmMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AcmMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadataKey::valueOf(a0));
                  return t_AcmMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AcmMetadataKey_values(PyTypeObject *type)
              {
                JArray< AcmMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AcmMetadataKey::wrap_jobject);
              }
              static PyObject *t_AcmMetadataKey_get__parameters_(t_AcmMetadataKey *self, void *data)
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
#include "org/orekit/python/PythonFieldUnivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonFieldUnivariateFunction::class$ = NULL;
      jmethodID *PythonFieldUnivariateFunction::mids$ = NULL;
      bool PythonFieldUnivariateFunction::live$ = false;

      jclass PythonFieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonFieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_6e00dc5eb352fe51] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldUnivariateFunction::PythonFieldUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFieldUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFieldUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFieldUnivariateFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace python {
      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self);
      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonFieldUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonFieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFieldUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonFieldUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldUnivariateFunction, t_PythonFieldUnivariateFunction, PythonFieldUnivariateFunction);

      void t_PythonFieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldUnivariateFunction), &PY_TYPE_DEF(PythonFieldUnivariateFunction), module, "PythonFieldUnivariateFunction", 1);
      }

      void t_PythonFieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "class_", make_descriptor(PythonFieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "wrapfn_", make_descriptor(t_PythonFieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonFieldUnivariateFunction_pythonDecRef0 },
          { "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFieldUnivariateFunction::wrap_Object(PythonFieldUnivariateFunction(((t_PythonFieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonFieldUnivariateFunction_init_(t_PythonFieldUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonFieldUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldUnivariateFunction_finalize(t_PythonFieldUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldUnivariateFunction_pythonExtension(t_PythonFieldUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonFieldUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldUnivariateFunction::mids$[PythonFieldUnivariateFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonFieldUnivariateFunction_get__self(t_PythonFieldUnivariateFunction *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonJ2SquaredModel.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonJ2SquaredModel::class$ = NULL;
            jmethodID *PythonJ2SquaredModel::mids$ = NULL;
            bool PythonJ2SquaredModel::live$ = false;

            jclass PythonJ2SquaredModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonJ2SquaredModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_9e21a8e72403ad02] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D");
                mids$[mid_computeMeanEquinoctialSecondOrderTerms_4a156b883cf16de2] = env->getMethodID(cls, "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonJ2SquaredModel::PythonJ2SquaredModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonJ2SquaredModel::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonJ2SquaredModel::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonJ2SquaredModel::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_PythonJ2SquaredModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonJ2SquaredModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonJ2SquaredModel_init_(t_PythonJ2SquaredModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonJ2SquaredModel_finalize(t_PythonJ2SquaredModel *self);
            static PyObject *t_PythonJ2SquaredModel_pythonExtension(t_PythonJ2SquaredModel *self, PyObject *args);
            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonJ2SquaredModel_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonJ2SquaredModel_get__self(t_PythonJ2SquaredModel *self, void *data);
            static PyGetSetDef t_PythonJ2SquaredModel__fields_[] = {
              DECLARE_GET_FIELD(t_PythonJ2SquaredModel, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonJ2SquaredModel__methods_[] = {
              DECLARE_METHOD(t_PythonJ2SquaredModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonJ2SquaredModel, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonJ2SquaredModel)[] = {
              { Py_tp_methods, t_PythonJ2SquaredModel__methods_ },
              { Py_tp_init, (void *) t_PythonJ2SquaredModel_init_ },
              { Py_tp_getset, t_PythonJ2SquaredModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonJ2SquaredModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonJ2SquaredModel, t_PythonJ2SquaredModel, PythonJ2SquaredModel);

            void t_PythonJ2SquaredModel::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonJ2SquaredModel), &PY_TYPE_DEF(PythonJ2SquaredModel), module, "PythonJ2SquaredModel", 1);
            }

            void t_PythonJ2SquaredModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "class_", make_descriptor(PythonJ2SquaredModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "wrapfn_", make_descriptor(t_PythonJ2SquaredModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonJ2SquaredModel), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonJ2SquaredModel::initializeClass);
              JNINativeMethod methods[] = {
                { "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext;)[D", (void *) t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0 },
                { "computeMeanEquinoctialSecondOrderTerms", "(Lorg/orekit/propagation/semianalytical/dsst/forces/FieldDSSTJ2SquaredClosedFormContext;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1 },
                { "pythonDecRef", "()V", (void *) t_PythonJ2SquaredModel_pythonDecRef2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonJ2SquaredModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonJ2SquaredModel::initializeClass, 1)))
                return NULL;
              return t_PythonJ2SquaredModel::wrap_Object(PythonJ2SquaredModel(((t_PythonJ2SquaredModel *) arg)->object.this$));
            }
            static PyObject *t_PythonJ2SquaredModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonJ2SquaredModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonJ2SquaredModel_init_(t_PythonJ2SquaredModel *self, PyObject *args, PyObject *kwds)
            {
              PythonJ2SquaredModel object((jobject) NULL);

              INT_CALL(object = PythonJ2SquaredModel());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonJ2SquaredModel_finalize(t_PythonJ2SquaredModel *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonJ2SquaredModel_pythonExtension(t_PythonJ2SquaredModel *self, PyObject *args)
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

            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::forces::t_DSSTJ2SquaredClosedFormContext::wrap_Object(::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext(a0));
              PyObject *result = PyObject_CallMethod(obj, "computeMeanEquinoctialSecondOrderTerms", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("computeMeanEquinoctialSecondOrderTerms", result);
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

            static jobject JNICALL t_PythonJ2SquaredModel_computeMeanEquinoctialSecondOrderTerms1(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::forces::t_FieldDSSTJ2SquaredClosedFormContext::wrap_Object(::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext(a0));
              PyObject *result = PyObject_CallMethod(obj, "computeMeanEquinoctialSecondOrderTerms", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("computeMeanEquinoctialSecondOrderTerms", result);
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

            static void JNICALL t_PythonJ2SquaredModel_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonJ2SquaredModel::mids$[PythonJ2SquaredModel::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonJ2SquaredModel_get__self(t_PythonJ2SquaredModel *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/FundamentalNutationArguments.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/LoveNumbers.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *IERSConventions::class$ = NULL;
      jmethodID *IERSConventions::mids$ = NULL;
      bool IERSConventions::live$ = false;
      IERSConventions *IERSConventions::IERS_1996 = NULL;
      IERSConventions *IERSConventions::IERS_2003 = NULL;
      IERSConventions *IERSConventions::IERS_2010 = NULL;

      jclass IERSConventions::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/IERSConventions");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluateTC_fd347811007a6ba3] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_evaluateTC_140b8964300ddedf] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluateTC_9a538b1a5d936574] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScales;)D");
          mids$[mid_evaluateTC_8473c21b3708b391] = env->getMethodID(cls, "evaluateTC", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/TimeScales;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEOPTidalCorrection_993e7a7f8f920b31] = env->getMethodID(cls, "getEOPTidalCorrection", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getEOPTidalCorrection_3e31b1559a5d91ec] = env->getMethodID(cls, "getEOPTidalCorrection", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getEarthOrientationAngleFunction_a76c7be685887fb8] = env->getMethodID(cls, "getEarthOrientationAngleFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getEarthOrientationAngleFunction_d9ed9b7123329872] = env->getMethodID(cls, "getEarthOrientationAngleFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGASTFunction_17ca7688163ef7c3] = env->getMethodID(cls, "getGASTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGASTFunction_3d623f236f132123] = env->getMethodID(cls, "getGASTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/frames/EOPHistory;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTFunction_a76c7be685887fb8] = env->getMethodID(cls, "getGMSTFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTFunction_a0ca30a02329eec8] = env->getMethodID(cls, "getGMSTFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTRateFunction_a76c7be685887fb8] = env->getMethodID(cls, "getGMSTRateFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getGMSTRateFunction_a0ca30a02329eec8] = env->getMethodID(cls, "getGMSTRateFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getLoveNumbers_51bbf924b608ef18] = env->getMethodID(cls, "getLoveNumbers", "()Lorg/orekit/utils/LoveNumbers;");
          mids$[mid_getMeanObliquityFunction_42b94f9e14367556] = env->getMethodID(cls, "getMeanObliquityFunction", "()Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getMeanObliquityFunction_38ee1f0602177ed7] = env->getMethodID(cls, "getMeanObliquityFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScalarFunction;");
          mids$[mid_getNominalTidalDisplacement_25e1757a36c4dde2] = env->getMethodID(cls, "getNominalTidalDisplacement", "()[D");
          mids$[mid_getNutationArguments_844055074f7695cf] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getNutationArguments_419496b5ab61e079] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getNutationCorrectionConverter_4136999951aaddfb] = env->getMethodID(cls, "getNutationCorrectionConverter", "()Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getNutationCorrectionConverter_d87614d91798fcb7] = env->getMethodID(cls, "getNutationCorrectionConverter", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getNutationFunction_993e7a7f8f920b31] = env->getMethodID(cls, "getNutationFunction", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getNutationFunction_3e31b1559a5d91ec] = env->getMethodID(cls, "getNutationFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getNutationReferenceEpoch_c325492395d89b24] = env->getMethodID(cls, "getNutationReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getNutationReferenceEpoch_2f879ddf888ebd4c] = env->getMethodID(cls, "getNutationReferenceEpoch", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getOceanPoleTide_d454e789d89ec43b] = env->getMethodID(cls, "getOceanPoleTide", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getPermanentTide_b74f83833fdad017] = env->getMethodID(cls, "getPermanentTide", "()D");
          mids$[mid_getPrecessionFunction_993e7a7f8f920b31] = env->getMethodID(cls, "getPrecessionFunction", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getPrecessionFunction_3e31b1559a5d91ec] = env->getMethodID(cls, "getPrecessionFunction", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getSolidPoleTide_d454e789d89ec43b] = env->getMethodID(cls, "getSolidPoleTide", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_4f5f606b4ceffcb8] = env->getMethodID(cls, "getTidalDisplacementFrequencyCorrectionDiurnal", "()Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_4f5f606b4ceffcb8] = env->getMethodID(cls, "getTidalDisplacementFrequencyCorrectionZonal", "()Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTideFrequencyDependenceFunction_7caeaa26ef9e4fd2] = env->getMethodID(cls, "getTideFrequencyDependenceFunction", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getTideFrequencyDependenceFunction_5d077ebb089cff43] = env->getMethodID(cls, "getTideFrequencyDependenceFunction", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getXYSpXY2Function_993e7a7f8f920b31] = env->getMethodID(cls, "getXYSpXY2Function", "()Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_getXYSpXY2Function_3e31b1559a5d91ec] = env->getMethodID(cls, "getXYSpXY2Function", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeVectorFunction;");
          mids$[mid_valueOf_46305f8407d09490] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/IERSConventions;");
          mids$[mid_values_8edcfc2cf2fdd3bc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/IERSConventions;");
          mids$[mid_getNutationArguments_cd1b6f5dfaf0692e] = env->getMethodID(cls, "getNutationArguments", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/data/FundamentalNutationArguments;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_225b6ff6660e5c1b] = env->getStaticMethodID(cls, "getTidalDisplacementFrequencyCorrectionDiurnal", "(Ljava/lang/String;IIIII)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_225b6ff6660e5c1b] = env->getStaticMethodID(cls, "getTidalDisplacementFrequencyCorrectionZonal", "(Ljava/lang/String;IIIII)Lorg/orekit/data/PoissonSeries$CompiledSeries;");
          mids$[mid_loadLoveNumbers_d0c912d8f74c3d61] = env->getMethodID(cls, "loadLoveNumbers", "(Ljava/lang/String;)Lorg/orekit/utils/LoveNumbers;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IERS_1996 = new IERSConventions(env->getStaticObjectField(cls, "IERS_1996", "Lorg/orekit/utils/IERSConventions;"));
          IERS_2003 = new IERSConventions(env->getStaticObjectField(cls, "IERS_2003", "Lorg/orekit/utils/IERSConventions;"));
          IERS_2010 = new IERSConventions(env->getStaticObjectField(cls, "IERS_2010", "Lorg/orekit/utils/IERSConventions;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble IERSConventions::evaluateTC(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluateTC_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IERSConventions::evaluateTC(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluateTC_140b8964300ddedf], a0.this$));
      }

      jdouble IERSConventions::evaluateTC(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluateTC_9a538b1a5d936574], a0.this$, a1.this$);
      }

      ::org::hipparchus::CalculusFieldElement IERSConventions::evaluateTC(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluateTC_8473c21b3708b391], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getEOPTidalCorrection() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getEOPTidalCorrection_993e7a7f8f920b31]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getEOPTidalCorrection(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getEOPTidalCorrection_3e31b1559a5d91ec], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getEarthOrientationAngleFunction_a76c7be685887fb8], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getEarthOrientationAngleFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getEarthOrientationAngleFunction_d9ed9b7123329872], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGASTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::EOPHistory & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGASTFunction_17ca7688163ef7c3], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGASTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::frames::EOPHistory & a1, const ::org::orekit::time::TimeScales & a2) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGASTFunction_3d623f236f132123], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTFunction_a76c7be685887fb8], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTFunction_a0ca30a02329eec8], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTRateFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTRateFunction_a76c7be685887fb8], a0.this$));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getGMSTRateFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getGMSTRateFunction_a0ca30a02329eec8], a0.this$, a1.this$));
      }

      ::org::orekit::utils::LoveNumbers IERSConventions::getLoveNumbers() const
      {
        return ::org::orekit::utils::LoveNumbers(env->callObjectMethod(this$, mids$[mid_getLoveNumbers_51bbf924b608ef18]));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getMeanObliquityFunction() const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getMeanObliquityFunction_42b94f9e14367556]));
      }

      ::org::orekit::time::TimeScalarFunction IERSConventions::getMeanObliquityFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScalarFunction(env->callObjectMethod(this$, mids$[mid_getMeanObliquityFunction_38ee1f0602177ed7], a0.this$));
      }

      JArray< jdouble > IERSConventions::getNominalTidalDisplacement() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNominalTidalDisplacement_25e1757a36c4dde2]));
      }

      ::org::orekit::data::FundamentalNutationArguments IERSConventions::getNutationArguments(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::data::FundamentalNutationArguments(env->callObjectMethod(this$, mids$[mid_getNutationArguments_844055074f7695cf], a0.this$));
      }

      ::org::orekit::data::FundamentalNutationArguments IERSConventions::getNutationArguments(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::data::FundamentalNutationArguments(env->callObjectMethod(this$, mids$[mid_getNutationArguments_419496b5ab61e079], a0.this$, a1.this$));
      }

      ::org::orekit::utils::IERSConventions$NutationCorrectionConverter IERSConventions::getNutationCorrectionConverter() const
      {
        return ::org::orekit::utils::IERSConventions$NutationCorrectionConverter(env->callObjectMethod(this$, mids$[mid_getNutationCorrectionConverter_4136999951aaddfb]));
      }

      ::org::orekit::utils::IERSConventions$NutationCorrectionConverter IERSConventions::getNutationCorrectionConverter(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::utils::IERSConventions$NutationCorrectionConverter(env->callObjectMethod(this$, mids$[mid_getNutationCorrectionConverter_d87614d91798fcb7], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getNutationFunction() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getNutationFunction_993e7a7f8f920b31]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getNutationFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getNutationFunction_3e31b1559a5d91ec], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate IERSConventions::getNutationReferenceEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNutationReferenceEpoch_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate IERSConventions::getNutationReferenceEpoch(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNutationReferenceEpoch_2f879ddf888ebd4c], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getOceanPoleTide(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getOceanPoleTide_d454e789d89ec43b], a0.this$));
      }

      jdouble IERSConventions::getPermanentTide() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPermanentTide_b74f83833fdad017]);
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getPrecessionFunction() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getPrecessionFunction_993e7a7f8f920b31]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getPrecessionFunction(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getPrecessionFunction_3e31b1559a5d91ec], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getSolidPoleTide(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getSolidPoleTide_d454e789d89ec43b], a0.this$));
      }

      ::org::orekit::data::PoissonSeries$CompiledSeries IERSConventions::getTidalDisplacementFrequencyCorrectionDiurnal() const
      {
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callObjectMethod(this$, mids$[mid_getTidalDisplacementFrequencyCorrectionDiurnal_4f5f606b4ceffcb8]));
      }

      ::org::orekit::data::PoissonSeries$CompiledSeries IERSConventions::getTidalDisplacementFrequencyCorrectionZonal() const
      {
        return ::org::orekit::data::PoissonSeries$CompiledSeries(env->callObjectMethod(this$, mids$[mid_getTidalDisplacementFrequencyCorrectionZonal_4f5f606b4ceffcb8]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getTideFrequencyDependenceFunction_7caeaa26ef9e4fd2], a0.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getTideFrequencyDependenceFunction(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScales & a1) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getTideFrequencyDependenceFunction_5d077ebb089cff43], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getXYSpXY2Function() const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getXYSpXY2Function_993e7a7f8f920b31]));
      }

      ::org::orekit::time::TimeVectorFunction IERSConventions::getXYSpXY2Function(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeVectorFunction(env->callObjectMethod(this$, mids$[mid_getXYSpXY2Function_3e31b1559a5d91ec], a0.this$));
      }

      IERSConventions IERSConventions::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return IERSConventions(env->callStaticObjectMethod(cls, mids$[mid_valueOf_46305f8407d09490], a0.this$));
      }

      JArray< IERSConventions > IERSConventions::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< IERSConventions >(env->callStaticObjectMethod(cls, mids$[mid_values_8edcfc2cf2fdd3bc]));
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
      static PyObject *t_IERSConventions_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions_of_(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_evaluateTC(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getEOPTidalCorrection(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getEarthOrientationAngleFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGASTFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGMSTFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getGMSTRateFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getLoveNumbers(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getMeanObliquityFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNominalTidalDisplacement(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getNutationArguments(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationCorrectionConverter(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getNutationReferenceEpoch(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getOceanPoleTide(t_IERSConventions *self, PyObject *arg);
      static PyObject *t_IERSConventions_getPermanentTide(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getPrecessionFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getSolidPoleTide(t_IERSConventions *self, PyObject *arg);
      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self);
      static PyObject *t_IERSConventions_getTideFrequencyDependenceFunction(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_getXYSpXY2Function(t_IERSConventions *self, PyObject *args);
      static PyObject *t_IERSConventions_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_IERSConventions_values(PyTypeObject *type);
      static PyObject *t_IERSConventions_get__eOPTidalCorrection(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__loveNumbers(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__meanObliquityFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nominalTidalDisplacement(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationCorrectionConverter(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__nutationReferenceEpoch(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__permanentTide(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__precessionFunction(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__xYSpXY2Function(t_IERSConventions *self, void *data);
      static PyObject *t_IERSConventions_get__parameters_(t_IERSConventions *self, void *data);
      static PyGetSetDef t_IERSConventions__fields_[] = {
        DECLARE_GET_FIELD(t_IERSConventions, eOPTidalCorrection),
        DECLARE_GET_FIELD(t_IERSConventions, loveNumbers),
        DECLARE_GET_FIELD(t_IERSConventions, meanObliquityFunction),
        DECLARE_GET_FIELD(t_IERSConventions, nominalTidalDisplacement),
        DECLARE_GET_FIELD(t_IERSConventions, nutationCorrectionConverter),
        DECLARE_GET_FIELD(t_IERSConventions, nutationFunction),
        DECLARE_GET_FIELD(t_IERSConventions, nutationReferenceEpoch),
        DECLARE_GET_FIELD(t_IERSConventions, permanentTide),
        DECLARE_GET_FIELD(t_IERSConventions, precessionFunction),
        DECLARE_GET_FIELD(t_IERSConventions, tidalDisplacementFrequencyCorrectionDiurnal),
        DECLARE_GET_FIELD(t_IERSConventions, tidalDisplacementFrequencyCorrectionZonal),
        DECLARE_GET_FIELD(t_IERSConventions, xYSpXY2Function),
        DECLARE_GET_FIELD(t_IERSConventions, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IERSConventions__methods_[] = {
        DECLARE_METHOD(t_IERSConventions, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, of_, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, evaluateTC, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getEOPTidalCorrection, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getEarthOrientationAngleFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGASTFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGMSTFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getGMSTRateFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getLoveNumbers, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getMeanObliquityFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNominalTidalDisplacement, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationArguments, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationCorrectionConverter, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getNutationReferenceEpoch, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getOceanPoleTide, METH_O),
        DECLARE_METHOD(t_IERSConventions, getPermanentTide, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getPrecessionFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getSolidPoleTide, METH_O),
        DECLARE_METHOD(t_IERSConventions, getTidalDisplacementFrequencyCorrectionDiurnal, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getTidalDisplacementFrequencyCorrectionZonal, METH_NOARGS),
        DECLARE_METHOD(t_IERSConventions, getTideFrequencyDependenceFunction, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, getXYSpXY2Function, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IERSConventions)[] = {
        { Py_tp_methods, t_IERSConventions__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IERSConventions__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IERSConventions)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(IERSConventions, t_IERSConventions, IERSConventions);
      PyObject *t_IERSConventions::wrap_Object(const IERSConventions& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions *self = (t_IERSConventions *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_IERSConventions::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions *self = (t_IERSConventions *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_IERSConventions::install(PyObject *module)
      {
        installType(&PY_TYPE(IERSConventions), &PY_TYPE_DEF(IERSConventions), module, "IERSConventions", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "NutationCorrectionConverter", make_descriptor(&PY_TYPE_DEF(IERSConventions$NutationCorrectionConverter)));
      }

      void t_IERSConventions::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "class_", make_descriptor(IERSConventions::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "wrapfn_", make_descriptor(t_IERSConventions::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "boxfn_", make_descriptor(boxObject));
        env->getClass(IERSConventions::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_1996", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_2003", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_2003)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions), "IERS_2010", make_descriptor(t_IERSConventions::wrap_Object(*IERSConventions::IERS_2010)));
      }

      static PyObject *t_IERSConventions_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IERSConventions::initializeClass, 1)))
          return NULL;
        return t_IERSConventions::wrap_Object(IERSConventions(((t_IERSConventions *) arg)->object.this$));
      }
      static PyObject *t_IERSConventions_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IERSConventions::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IERSConventions_of_(t_IERSConventions *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_IERSConventions_evaluateTC(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluateTC(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluateTC", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getEOPTidalCorrection(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getEOPTidalCorrection());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEOPTidalCorrection(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEOPTidalCorrection", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getEarthOrientationAngleFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getEarthOrientationAngleFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getEarthOrientationAngleFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getEarthOrientationAngleFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGASTFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::EOPHistory a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGASTFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::EOPHistory a1((jobject) NULL);
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getGASTFunction(a0, a1, a2));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGASTFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGMSTFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getGMSTFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGMSTFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGMSTFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getGMSTRateFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getGMSTRateFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGMSTRateFunction(a0, a1));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getGMSTRateFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getLoveNumbers(t_IERSConventions *self)
      {
        ::org::orekit::utils::LoveNumbers result((jobject) NULL);
        OBJ_CALL(result = self->object.getLoveNumbers());
        return ::org::orekit::utils::t_LoveNumbers::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getMeanObliquityFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeanObliquityFunction());
            return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeScalarFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMeanObliquityFunction(a0));
              return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getMeanObliquityFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNominalTidalDisplacement(t_IERSConventions *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getNominalTidalDisplacement());
        return result.wrap();
      }

      static PyObject *t_IERSConventions_getNutationArguments(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::data::FundamentalNutationArguments result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationArguments(a0));
              return ::org::orekit::data::t_FundamentalNutationArguments::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::data::FundamentalNutationArguments result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNutationArguments(a0, a1));
              return ::org::orekit::data::t_FundamentalNutationArguments::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationArguments", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationCorrectionConverter(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::IERSConventions$NutationCorrectionConverter result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationCorrectionConverter());
            return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::utils::IERSConventions$NutationCorrectionConverter result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationCorrectionConverter(a0));
              return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationCorrectionConverter", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationFunction());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getNutationReferenceEpoch(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getNutationReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNutationReferenceEpoch(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNutationReferenceEpoch", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getOceanPoleTide(t_IERSConventions *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getOceanPoleTide(a0));
          return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getOceanPoleTide", arg);
        return NULL;
      }

      static PyObject *t_IERSConventions_getPermanentTide(t_IERSConventions *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPermanentTide());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IERSConventions_getPrecessionFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getPrecessionFunction());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPrecessionFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPrecessionFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getSolidPoleTide(t_IERSConventions *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getSolidPoleTide(a0));
          return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSolidPoleTide", arg);
        return NULL;
      }

      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);
        OBJ_CALL(result = self->object.getTidalDisplacementFrequencyCorrectionDiurnal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getTidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries result((jobject) NULL);
        OBJ_CALL(result = self->object.getTidalDisplacementFrequencyCorrectionZonal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(result);
      }

      static PyObject *t_IERSConventions_getTideFrequencyDependenceFunction(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTideFrequencyDependenceFunction(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTideFrequencyDependenceFunction(a0, a1));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTideFrequencyDependenceFunction", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_getXYSpXY2Function(t_IERSConventions *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getXYSpXY2Function());
            return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScales a0((jobject) NULL);
            ::org::orekit::time::TimeVectorFunction result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getXYSpXY2Function(a0));
              return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getXYSpXY2Function", args);
        return NULL;
      }

      static PyObject *t_IERSConventions_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        IERSConventions result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::IERSConventions::valueOf(a0));
          return t_IERSConventions::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_IERSConventions_values(PyTypeObject *type)
      {
        JArray< IERSConventions > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::IERSConventions::values());
        return JArray<jobject>(result.this$).wrap(t_IERSConventions::wrap_jobject);
      }
      static PyObject *t_IERSConventions_get__parameters_(t_IERSConventions *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_IERSConventions_get__eOPTidalCorrection(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPTidalCorrection());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__loveNumbers(t_IERSConventions *self, void *data)
      {
        ::org::orekit::utils::LoveNumbers value((jobject) NULL);
        OBJ_CALL(value = self->object.getLoveNumbers());
        return ::org::orekit::utils::t_LoveNumbers::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__meanObliquityFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeScalarFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanObliquityFunction());
        return ::org::orekit::time::t_TimeScalarFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nominalTidalDisplacement(t_IERSConventions *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getNominalTidalDisplacement());
        return value.wrap();
      }

      static PyObject *t_IERSConventions_get__nutationCorrectionConverter(t_IERSConventions *self, void *data)
      {
        ::org::orekit::utils::IERSConventions$NutationCorrectionConverter value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationCorrectionConverter());
        return ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nutationFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationFunction());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__nutationReferenceEpoch(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getNutationReferenceEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__permanentTide(t_IERSConventions *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPermanentTide());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IERSConventions_get__precessionFunction(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrecessionFunction());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionDiurnal(t_IERSConventions *self, void *data)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries value((jobject) NULL);
        OBJ_CALL(value = self->object.getTidalDisplacementFrequencyCorrectionDiurnal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__tidalDisplacementFrequencyCorrectionZonal(t_IERSConventions *self, void *data)
      {
        ::org::orekit::data::PoissonSeries$CompiledSeries value((jobject) NULL);
        OBJ_CALL(value = self->object.getTidalDisplacementFrequencyCorrectionZonal());
        return ::org::orekit::data::t_PoissonSeries$CompiledSeries::wrap_Object(value);
      }

      static PyObject *t_IERSConventions_get__xYSpXY2Function(t_IERSConventions *self, void *data)
      {
        ::org::orekit::time::TimeVectorFunction value((jobject) NULL);
        OBJ_CALL(value = self->object.getXYSpXY2Function());
        return ::org::orekit::time::t_TimeVectorFunction::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/SpacecraftStateInterpolator.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "java/util/Collection.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/util/Optional.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *SpacecraftStateInterpolator::class$ = NULL;
      jmethodID *SpacecraftStateInterpolator::mids$ = NULL;
      bool SpacecraftStateInterpolator::live$ = false;

      jclass SpacecraftStateInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/SpacecraftStateInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_237ae1c2ddd68062] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_92e0516c51076c2f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_9fa6786ed88e4116] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_9188826e4203adb2] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_4e698ca934323ab9] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_47a06a543038ccdd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;)V");
          mids$[mid_checkSampleAndInterpolatorConsistency_175e0bdab326549a] = env->getStaticMethodID(cls, "checkSampleAndInterpolatorConsistency", "(Ljava/util/List;ZZ)V");
          mids$[mid_checkStatesDefinitionsConsistency_0e7c3032c7c93ed3] = env->getStaticMethodID(cls, "checkStatesDefinitionsConsistency", "(Ljava/util/List;)V");
          mids$[mid_getAbsPVAInterpolator_9fe5189c8c3b230d] = env->getMethodID(cls, "getAbsPVAInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAdditionalStateInterpolator_9fe5189c8c3b230d] = env->getMethodID(cls, "getAdditionalStateInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAttitudeInterpolator_9fe5189c8c3b230d] = env->getMethodID(cls, "getAttitudeInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getMassInterpolator_9fe5189c8c3b230d] = env->getMethodID(cls, "getMassInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getNbInterpolationPoints_55546ef6a647f39b] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getOrbitInterpolator_9fe5189c8c3b230d] = env->getMethodID(cls, "getOrbitInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getOutputFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSubInterpolators_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_96a2305a7aa752cc] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_interpolate_5f913ee7dc803ec0] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/propagation/SpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_237ae1c2ddd68062, a0.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_92e0516c51076c2f, a0, a1.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_9fa6786ed88e4116, a0, a1.this$, a2.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_9188826e4203adb2, a0, a1, a2.this$, a3.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4, const ::org::orekit::utils::AngularDerivativesFilter & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_4e698ca934323ab9, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::time::TimeInterpolator & a4, const ::org::orekit::time::TimeInterpolator & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_47a06a543038ccdd, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      void SpacecraftStateInterpolator::checkSampleAndInterpolatorConsistency(const ::java::util::List & a0, jboolean a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSampleAndInterpolatorConsistency_175e0bdab326549a], a0.this$, a1, a2);
      }

      void SpacecraftStateInterpolator::checkStatesDefinitionsConsistency(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkStatesDefinitionsConsistency_0e7c3032c7c93ed3], a0.this$);
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAbsPVAInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAbsPVAInterpolator_9fe5189c8c3b230d]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAdditionalStateInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAdditionalStateInterpolator_9fe5189c8c3b230d]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAttitudeInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAttitudeInterpolator_9fe5189c8c3b230d]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getMassInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getMassInterpolator_9fe5189c8c3b230d]));
      }

      jint SpacecraftStateInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_55546ef6a647f39b]);
      }

      ::java::util::Optional SpacecraftStateInterpolator::getOrbitInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_9fe5189c8c3b230d]));
      }

      ::org::orekit::frames::Frame SpacecraftStateInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_2c51111cc6894ba1]));
      }

      ::java::util::List SpacecraftStateInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_e62d3bb06d56d7e3]));
      }

      ::org::orekit::propagation::SpacecraftState SpacecraftStateInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_interpolate_96a2305a7aa752cc], a0.this$, a1.this$));
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
      static PyObject *t_SpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_of_(t_SpacecraftStateInterpolator *self, PyObject *args);
      static int t_SpacecraftStateInterpolator_init_(t_SpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SpacecraftStateInterpolator_checkSampleAndInterpolatorConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_checkStatesDefinitionsConsistency(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_getAbsPVAInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getAdditionalStateInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getAttitudeInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getMassInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getNbInterpolationPoints(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_getOrbitInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getOutputFrame(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getSubInterpolators(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_interpolate(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_get__absPVAInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__additionalStateInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__attitudeInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__massInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__nbInterpolationPoints(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__orbitInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__outputFrame(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__subInterpolators(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__parameters_(t_SpacecraftStateInterpolator *self, void *data);
      static PyGetSetDef t_SpacecraftStateInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, absPVAInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, additionalStateInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, attitudeInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, massInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SpacecraftStateInterpolator__methods_[] = {
        DECLARE_METHOD(t_SpacecraftStateInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, checkSampleAndInterpolatorConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, checkStatesDefinitionsConsistency, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAbsPVAInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAdditionalStateInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAttitudeInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getMassInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getNbInterpolationPoints, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getOutputFrame, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getSubInterpolators, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SpacecraftStateInterpolator)[] = {
        { Py_tp_methods, t_SpacecraftStateInterpolator__methods_ },
        { Py_tp_init, (void *) t_SpacecraftStateInterpolator_init_ },
        { Py_tp_getset, t_SpacecraftStateInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SpacecraftStateInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(SpacecraftStateInterpolator, t_SpacecraftStateInterpolator, SpacecraftStateInterpolator);
      PyObject *t_SpacecraftStateInterpolator::wrap_Object(const SpacecraftStateInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SpacecraftStateInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SpacecraftStateInterpolator *self = (t_SpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SpacecraftStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SpacecraftStateInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SpacecraftStateInterpolator *self = (t_SpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SpacecraftStateInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(SpacecraftStateInterpolator), &PY_TYPE_DEF(SpacecraftStateInterpolator), module, "SpacecraftStateInterpolator", 0);
      }

      void t_SpacecraftStateInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "class_", make_descriptor(SpacecraftStateInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "wrapfn_", make_descriptor(t_SpacecraftStateInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SpacecraftStateInterpolator::initializeClass, 1)))
          return NULL;
        return t_SpacecraftStateInterpolator::wrap_Object(SpacecraftStateInterpolator(((t_SpacecraftStateInterpolator *) arg)->object.this$));
      }
      static PyObject *t_SpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SpacecraftStateInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SpacecraftStateInterpolator_of_(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SpacecraftStateInterpolator_init_(t_SpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ikk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::AngularDerivativesFilter a5((jobject) NULL);
            PyTypeObject **p5;
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkkKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a5, &p5, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::time::TimeInterpolator a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::TimeInterpolator a5((jobject) NULL);
            PyTypeObject **p5;
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "kKKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4, &p4, ::org::orekit::time::t_TimeInterpolator::parameters_, &a5, &p5, ::org::orekit::time::t_TimeInterpolator::parameters_))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
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

      static PyObject *t_SpacecraftStateInterpolator_checkSampleAndInterpolatorConsistency(PyTypeObject *type, PyObject *args)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        jboolean a2;

        if (!parseArgs(args, "KZZ", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
        {
          OBJ_CALL(::org::orekit::propagation::SpacecraftStateInterpolator::checkSampleAndInterpolatorConsistency(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSampleAndInterpolatorConsistency", args);
        return NULL;
      }

      static PyObject *t_SpacecraftStateInterpolator_checkStatesDefinitionsConsistency(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(::org::orekit::propagation::SpacecraftStateInterpolator::checkStatesDefinitionsConsistency(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkStatesDefinitionsConsistency", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftStateInterpolator_getAbsPVAInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getAdditionalStateInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getAttitudeInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getMassInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getNbInterpolationPoints(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNbInterpolationPoints());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "getNbInterpolationPoints", args, 2);
      }

      static PyObject *t_SpacecraftStateInterpolator_getOrbitInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getOutputFrame(t_SpacecraftStateInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getSubInterpolators(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSubInterpolators());
          return ::java::util::t_List::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "getSubInterpolators", args, 2);
      }

      static PyObject *t_SpacecraftStateInterpolator_interpolate(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_SpacecraftStateInterpolator_get__parameters_(t_SpacecraftStateInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SpacecraftStateInterpolator_get__absPVAInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__additionalStateInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__attitudeInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__massInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__nbInterpolationPoints(t_SpacecraftStateInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__orbitInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__outputFrame(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__subInterpolators(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PythonFieldOfView.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonFieldOfView::class$ = NULL;
        jmethodID *PythonFieldOfView::mids$ = NULL;
        bool PythonFieldOfView::live$ = false;

        jclass PythonFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFootprint_f20a8500298f8a78] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getMargin_b74f83833fdad017] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_offsetFromBoundary_927580832e9083f9] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_f21507e4850a184e] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldOfView::PythonFieldOfView() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonFieldOfView::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PythonFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonFieldOfView_init_(t_PythonFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOfView_finalize(t_PythonFieldOfView *self);
        static PyObject *t_PythonFieldOfView_pythonExtension(t_PythonFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static jdouble JNICALL t_PythonFieldOfView_getMargin1(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonFieldOfView_offsetFromBoundary2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonFieldOfView_projectToBoundary3(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOfView_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOfView_get__self(t_PythonFieldOfView *self, void *data);
        static PyGetSetDef t_PythonFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOfView)[] = {
          { Py_tp_methods, t_PythonFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOfView_init_ },
          { Py_tp_getset, t_PythonFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOfView, t_PythonFieldOfView, PythonFieldOfView);

        void t_PythonFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOfView), &PY_TYPE_DEF(PythonFieldOfView), module, "PythonFieldOfView", 1);
        }

        void t_PythonFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "class_", make_descriptor(PythonFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "wrapfn_", make_descriptor(t_PythonFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;", (void *) t_PythonFieldOfView_getFootprint0 },
            { "getMargin", "()D", (void *) t_PythonFieldOfView_getMargin1 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonFieldOfView_offsetFromBoundary2 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonFieldOfView_projectToBoundary3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOfView_pythonDecRef4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOfView::wrap_Object(PythonFieldOfView(((t_PythonFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonFieldOfView_init_(t_PythonFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOfView object((jobject) NULL);

          INT_CALL(object = PythonFieldOfView());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOfView_finalize(t_PythonFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOfView_pythonExtension(t_PythonFieldOfView *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *o0 = ::org::orekit::frames::t_Transform::wrap_Object(::org::orekit::frames::Transform(a0));
          PyObject *o1 = ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(::org::orekit::bodies::OneAxisEllipsoid(a1));
          PyObject *result = PyObject_CallMethod(obj, "getFootprint", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getFootprint", result);
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

        static jdouble JNICALL t_PythonFieldOfView_getMargin1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMargin", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMargin", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jdouble JNICALL t_PythonFieldOfView_offsetFromBoundary2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o2 = ::org::orekit::propagation::events::t_VisibilityTrigger::wrap_Object(::org::orekit::propagation::events::VisibilityTrigger(a2));
          PyObject *result = PyObject_CallMethod(obj, "offsetFromBoundary", "OdO", o0, (double) a1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("offsetFromBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonFieldOfView_projectToBoundary3(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "projectToBoundary", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToBoundary", result);
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

        static void JNICALL t_PythonFieldOfView_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOfView_get__self(t_PythonFieldOfView *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/DecimalFormat.h"
#include "java/text/FieldPosition.h"
#include "java/text/ParsePosition.h"
#include "java/lang/Number.h"
#include "java/lang/StringBuffer.h"
#include "java/text/AttributedCharacterIterator.h"
#include "java/util/Currency.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *DecimalFormat::class$ = NULL;
    jmethodID *DecimalFormat::mids$ = NULL;
    bool DecimalFormat::live$ = false;

    jclass DecimalFormat::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/DecimalFormat");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_5abfc95260fd6c6b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V");
        mids$[mid_applyLocalizedPattern_734b91ac30d5f9b4] = env->getMethodID(cls, "applyLocalizedPattern", "(Ljava/lang/String;)V");
        mids$[mid_applyPattern_734b91ac30d5f9b4] = env->getMethodID(cls, "applyPattern", "(Ljava/lang/String;)V");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_format_cdee9bc08b68d2f3] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_b972afa1d89f0ad4] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_1d561f51d282798c] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_formatToCharacterIterator_1e9e330ed3e6edfe] = env->getMethodID(cls, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
        mids$[mid_getCurrency_5c4bce1ad9114b42] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getDecimalFormatSymbols_36ca27640d647410] = env->getMethodID(cls, "getDecimalFormatSymbols", "()Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getGroupingSize_55546ef6a647f39b] = env->getMethodID(cls, "getGroupingSize", "()I");
        mids$[mid_getMaximumFractionDigits_55546ef6a647f39b] = env->getMethodID(cls, "getMaximumFractionDigits", "()I");
        mids$[mid_getMaximumIntegerDigits_55546ef6a647f39b] = env->getMethodID(cls, "getMaximumIntegerDigits", "()I");
        mids$[mid_getMinimumFractionDigits_55546ef6a647f39b] = env->getMethodID(cls, "getMinimumFractionDigits", "()I");
        mids$[mid_getMinimumIntegerDigits_55546ef6a647f39b] = env->getMethodID(cls, "getMinimumIntegerDigits", "()I");
        mids$[mid_getMultiplier_55546ef6a647f39b] = env->getMethodID(cls, "getMultiplier", "()I");
        mids$[mid_getNegativePrefix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getNegativePrefix", "()Ljava/lang/String;");
        mids$[mid_getNegativeSuffix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getNegativeSuffix", "()Ljava/lang/String;");
        mids$[mid_getPositivePrefix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPositivePrefix", "()Ljava/lang/String;");
        mids$[mid_getPositiveSuffix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPositiveSuffix", "()Ljava/lang/String;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isDecimalSeparatorAlwaysShown_9ab94ac1dc23b105] = env->getMethodID(cls, "isDecimalSeparatorAlwaysShown", "()Z");
        mids$[mid_isParseBigDecimal_9ab94ac1dc23b105] = env->getMethodID(cls, "isParseBigDecimal", "()Z");
        mids$[mid_parse_a972e28e38f8fd3f] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;");
        mids$[mid_setCurrency_4943c1e384d46623] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setDecimalFormatSymbols_e702ad65752cd8ec] = env->getMethodID(cls, "setDecimalFormatSymbols", "(Ljava/text/DecimalFormatSymbols;)V");
        mids$[mid_setDecimalSeparatorAlwaysShown_fcb96c98de6fad04] = env->getMethodID(cls, "setDecimalSeparatorAlwaysShown", "(Z)V");
        mids$[mid_setGroupingSize_44ed599e93e8a30c] = env->getMethodID(cls, "setGroupingSize", "(I)V");
        mids$[mid_setGroupingUsed_fcb96c98de6fad04] = env->getMethodID(cls, "setGroupingUsed", "(Z)V");
        mids$[mid_setMaximumFractionDigits_44ed599e93e8a30c] = env->getMethodID(cls, "setMaximumFractionDigits", "(I)V");
        mids$[mid_setMaximumIntegerDigits_44ed599e93e8a30c] = env->getMethodID(cls, "setMaximumIntegerDigits", "(I)V");
        mids$[mid_setMinimumFractionDigits_44ed599e93e8a30c] = env->getMethodID(cls, "setMinimumFractionDigits", "(I)V");
        mids$[mid_setMinimumIntegerDigits_44ed599e93e8a30c] = env->getMethodID(cls, "setMinimumIntegerDigits", "(I)V");
        mids$[mid_setMultiplier_44ed599e93e8a30c] = env->getMethodID(cls, "setMultiplier", "(I)V");
        mids$[mid_setNegativePrefix_734b91ac30d5f9b4] = env->getMethodID(cls, "setNegativePrefix", "(Ljava/lang/String;)V");
        mids$[mid_setNegativeSuffix_734b91ac30d5f9b4] = env->getMethodID(cls, "setNegativeSuffix", "(Ljava/lang/String;)V");
        mids$[mid_setParseBigDecimal_fcb96c98de6fad04] = env->getMethodID(cls, "setParseBigDecimal", "(Z)V");
        mids$[mid_setPositivePrefix_734b91ac30d5f9b4] = env->getMethodID(cls, "setPositivePrefix", "(Ljava/lang/String;)V");
        mids$[mid_setPositiveSuffix_734b91ac30d5f9b4] = env->getMethodID(cls, "setPositiveSuffix", "(Ljava/lang/String;)V");
        mids$[mid_toLocalizedPattern_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toLocalizedPattern", "()Ljava/lang/String;");
        mids$[mid_toPattern_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toPattern", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DecimalFormat::DecimalFormat() : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    DecimalFormat::DecimalFormat(const ::java::lang::String & a0) : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    DecimalFormat::DecimalFormat(const ::java::lang::String & a0, const ::java::text::DecimalFormatSymbols & a1) : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_5abfc95260fd6c6b, a0.this$, a1.this$)) {}

    void DecimalFormat::applyLocalizedPattern(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_applyLocalizedPattern_734b91ac30d5f9b4], a0.this$);
    }

    void DecimalFormat::applyPattern(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_applyPattern_734b91ac30d5f9b4], a0.this$);
    }

    ::java::lang::Object DecimalFormat::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_541690f9ee81d3ad]));
    }

    jboolean DecimalFormat::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::StringBuffer DecimalFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_cdee9bc08b68d2f3], a0, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer DecimalFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_b972afa1d89f0ad4], a0.this$, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer DecimalFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_1d561f51d282798c], a0, a1.this$, a2.this$));
    }

    ::java::text::AttributedCharacterIterator DecimalFormat::formatToCharacterIterator(const ::java::lang::Object & a0) const
    {
      return ::java::text::AttributedCharacterIterator(env->callObjectMethod(this$, mids$[mid_formatToCharacterIterator_1e9e330ed3e6edfe], a0.this$));
    }

    ::java::util::Currency DecimalFormat::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_5c4bce1ad9114b42]));
    }

    ::java::text::DecimalFormatSymbols DecimalFormat::getDecimalFormatSymbols() const
    {
      return ::java::text::DecimalFormatSymbols(env->callObjectMethod(this$, mids$[mid_getDecimalFormatSymbols_36ca27640d647410]));
    }

    jint DecimalFormat::getGroupingSize() const
    {
      return env->callIntMethod(this$, mids$[mid_getGroupingSize_55546ef6a647f39b]);
    }

    jint DecimalFormat::getMaximumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumFractionDigits_55546ef6a647f39b]);
    }

    jint DecimalFormat::getMaximumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumIntegerDigits_55546ef6a647f39b]);
    }

    jint DecimalFormat::getMinimumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumFractionDigits_55546ef6a647f39b]);
    }

    jint DecimalFormat::getMinimumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumIntegerDigits_55546ef6a647f39b]);
    }

    jint DecimalFormat::getMultiplier() const
    {
      return env->callIntMethod(this$, mids$[mid_getMultiplier_55546ef6a647f39b]);
    }

    ::java::lang::String DecimalFormat::getNegativePrefix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNegativePrefix_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String DecimalFormat::getNegativeSuffix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNegativeSuffix_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String DecimalFormat::getPositivePrefix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPositivePrefix_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String DecimalFormat::getPositiveSuffix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPositiveSuffix_1c1fa1e935d6cdcf]));
    }

    jint DecimalFormat::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jboolean DecimalFormat::isDecimalSeparatorAlwaysShown() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDecimalSeparatorAlwaysShown_9ab94ac1dc23b105]);
    }

    jboolean DecimalFormat::isParseBigDecimal() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isParseBigDecimal_9ab94ac1dc23b105]);
    }

    ::java::lang::Number DecimalFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_a972e28e38f8fd3f], a0.this$, a1.this$));
    }

    void DecimalFormat::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_4943c1e384d46623], a0.this$);
    }

    void DecimalFormat::setDecimalFormatSymbols(const ::java::text::DecimalFormatSymbols & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalFormatSymbols_e702ad65752cd8ec], a0.this$);
    }

    void DecimalFormat::setDecimalSeparatorAlwaysShown(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalSeparatorAlwaysShown_fcb96c98de6fad04], a0);
    }

    void DecimalFormat::setGroupingSize(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingSize_44ed599e93e8a30c], a0);
    }

    void DecimalFormat::setGroupingUsed(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingUsed_fcb96c98de6fad04], a0);
    }

    void DecimalFormat::setMaximumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumFractionDigits_44ed599e93e8a30c], a0);
    }

    void DecimalFormat::setMaximumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumIntegerDigits_44ed599e93e8a30c], a0);
    }

    void DecimalFormat::setMinimumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumFractionDigits_44ed599e93e8a30c], a0);
    }

    void DecimalFormat::setMinimumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumIntegerDigits_44ed599e93e8a30c], a0);
    }

    void DecimalFormat::setMultiplier(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMultiplier_44ed599e93e8a30c], a0);
    }

    void DecimalFormat::setNegativePrefix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNegativePrefix_734b91ac30d5f9b4], a0.this$);
    }

    void DecimalFormat::setNegativeSuffix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNegativeSuffix_734b91ac30d5f9b4], a0.this$);
    }

    void DecimalFormat::setParseBigDecimal(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setParseBigDecimal_fcb96c98de6fad04], a0);
    }

    void DecimalFormat::setPositivePrefix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPositivePrefix_734b91ac30d5f9b4], a0.this$);
    }

    void DecimalFormat::setPositiveSuffix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPositiveSuffix_734b91ac30d5f9b4], a0.this$);
    }

    ::java::lang::String DecimalFormat::toLocalizedPattern() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLocalizedPattern_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String DecimalFormat::toPattern() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toPattern_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_DecimalFormat_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DecimalFormat_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DecimalFormat_init_(t_DecimalFormat *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DecimalFormat_applyLocalizedPattern(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_applyPattern(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_clone(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_equals(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_format(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_formatToCharacterIterator(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getCurrency(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getDecimalFormatSymbols(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getGroupingSize(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getMaximumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMinimumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMultiplier(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getNegativePrefix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getNegativeSuffix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getPositivePrefix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getPositiveSuffix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_hashCode(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_isDecimalSeparatorAlwaysShown(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_isParseBigDecimal(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_parse(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setCurrency(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setDecimalFormatSymbols(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setDecimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setGroupingSize(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setGroupingUsed(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMaximumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMinimumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMultiplier(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setNegativePrefix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setNegativeSuffix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setParseBigDecimal(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setPositivePrefix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setPositiveSuffix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_toLocalizedPattern(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_toPattern(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_get__currency(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__currency(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__decimalFormatSymbols(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__decimalFormatSymbols(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__decimalSeparatorAlwaysShown(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__decimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__groupingSize(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__groupingSize(t_DecimalFormat *self, PyObject *arg, void *data);
    static int t_DecimalFormat_set__groupingUsed(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__maximumFractionDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__maximumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__maximumIntegerDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__maximumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__minimumFractionDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__minimumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__minimumIntegerDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__minimumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__multiplier(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__multiplier(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__negativePrefix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__negativePrefix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__negativeSuffix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__negativeSuffix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__parseBigDecimal(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__parseBigDecimal(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__positivePrefix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__positivePrefix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__positiveSuffix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__positiveSuffix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyGetSetDef t_DecimalFormat__fields_[] = {
      DECLARE_GETSET_FIELD(t_DecimalFormat, currency),
      DECLARE_GETSET_FIELD(t_DecimalFormat, decimalFormatSymbols),
      DECLARE_GETSET_FIELD(t_DecimalFormat, decimalSeparatorAlwaysShown),
      DECLARE_GETSET_FIELD(t_DecimalFormat, groupingSize),
      DECLARE_SET_FIELD(t_DecimalFormat, groupingUsed),
      DECLARE_GETSET_FIELD(t_DecimalFormat, maximumFractionDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, maximumIntegerDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, minimumFractionDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, minimumIntegerDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, multiplier),
      DECLARE_GETSET_FIELD(t_DecimalFormat, negativePrefix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, negativeSuffix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, parseBigDecimal),
      DECLARE_GETSET_FIELD(t_DecimalFormat, positivePrefix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, positiveSuffix),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DecimalFormat__methods_[] = {
      DECLARE_METHOD(t_DecimalFormat, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormat, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormat, applyLocalizedPattern, METH_O),
      DECLARE_METHOD(t_DecimalFormat, applyPattern, METH_O),
      DECLARE_METHOD(t_DecimalFormat, clone, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, equals, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, format, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, formatToCharacterIterator, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getCurrency, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getDecimalFormatSymbols, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getGroupingSize, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getMaximumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMaximumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMinimumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMinimumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMultiplier, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getNegativePrefix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getNegativeSuffix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getPositivePrefix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getPositiveSuffix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, isDecimalSeparatorAlwaysShown, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, isParseBigDecimal, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, parse, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setCurrency, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setDecimalFormatSymbols, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setDecimalSeparatorAlwaysShown, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setGroupingSize, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setGroupingUsed, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMaximumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMaximumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMinimumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMinimumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMultiplier, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setNegativePrefix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setNegativeSuffix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setParseBigDecimal, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setPositivePrefix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setPositiveSuffix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, toLocalizedPattern, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, toPattern, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DecimalFormat)[] = {
      { Py_tp_methods, t_DecimalFormat__methods_ },
      { Py_tp_init, (void *) t_DecimalFormat_init_ },
      { Py_tp_getset, t_DecimalFormat__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DecimalFormat)[] = {
      &PY_TYPE_DEF(::java::text::NumberFormat),
      NULL
    };

    DEFINE_TYPE(DecimalFormat, t_DecimalFormat, DecimalFormat);

    void t_DecimalFormat::install(PyObject *module)
    {
      installType(&PY_TYPE(DecimalFormat), &PY_TYPE_DEF(DecimalFormat), module, "DecimalFormat", 0);
    }

    void t_DecimalFormat::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "class_", make_descriptor(DecimalFormat::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "wrapfn_", make_descriptor(t_DecimalFormat::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DecimalFormat_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DecimalFormat::initializeClass, 1)))
        return NULL;
      return t_DecimalFormat::wrap_Object(DecimalFormat(((t_DecimalFormat *) arg)->object.this$));
    }
    static PyObject *t_DecimalFormat_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DecimalFormat::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DecimalFormat_init_(t_DecimalFormat *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormat object((jobject) NULL);

          INT_CALL(object = DecimalFormat());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          DecimalFormat object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DecimalFormat(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::text::DecimalFormatSymbols a1((jobject) NULL);
          DecimalFormat object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::text::DecimalFormatSymbols::initializeClass, &a0, &a1))
          {
            INT_CALL(object = DecimalFormat(a0, a1));
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

    static PyObject *t_DecimalFormat_applyLocalizedPattern(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.applyLocalizedPattern(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "applyLocalizedPattern", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_applyPattern(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.applyPattern(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "applyPattern", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_clone(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.clone());
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "clone", args, 2);
    }

    static PyObject *t_DecimalFormat_equals(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_DecimalFormat_format(t_DecimalFormat *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          jdouble a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jlong a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Jkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "format", args, 2);
    }

    static PyObject *t_DecimalFormat_formatToCharacterIterator(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::text::AttributedCharacterIterator result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.formatToCharacterIterator(a0));
        return ::java::text::t_AttributedCharacterIterator::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "formatToCharacterIterator", args, 2);
    }

    static PyObject *t_DecimalFormat_getCurrency(t_DecimalFormat *self, PyObject *args)
    {
      ::java::util::Currency result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getCurrency());
        return ::java::util::t_Currency::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getCurrency", args, 2);
    }

    static PyObject *t_DecimalFormat_getDecimalFormatSymbols(t_DecimalFormat *self)
    {
      ::java::text::DecimalFormatSymbols result((jobject) NULL);
      OBJ_CALL(result = self->object.getDecimalFormatSymbols());
      return ::java::text::t_DecimalFormatSymbols::wrap_Object(result);
    }

    static PyObject *t_DecimalFormat_getGroupingSize(t_DecimalFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getGroupingSize());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DecimalFormat_getMaximumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMaximumFractionDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMaximumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMaximumIntegerDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMaximumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMinimumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMinimumFractionDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMinimumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMinimumIntegerDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMinimumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMultiplier(t_DecimalFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMultiplier());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DecimalFormat_getNegativePrefix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNegativePrefix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getNegativeSuffix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNegativeSuffix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getPositivePrefix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPositivePrefix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getPositiveSuffix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPositiveSuffix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_hashCode(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_DecimalFormat_isDecimalSeparatorAlwaysShown(t_DecimalFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDecimalSeparatorAlwaysShown());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_DecimalFormat_isParseBigDecimal(t_DecimalFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isParseBigDecimal());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_DecimalFormat_parse(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::text::ParsePosition a1((jobject) NULL);
      ::java::lang::Number result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.parse(a0, a1));
        return ::java::lang::t_Number::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "parse", args, 2);
    }

    static PyObject *t_DecimalFormat_setCurrency(t_DecimalFormat *self, PyObject *args)
    {
      ::java::util::Currency a0((jobject) NULL);

      if (!parseArgs(args, "k", ::java::util::Currency::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setCurrency(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setCurrency", args, 2);
    }

    static PyObject *t_DecimalFormat_setDecimalFormatSymbols(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::text::DecimalFormatSymbols a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::text::DecimalFormatSymbols::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setDecimalFormatSymbols(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalFormatSymbols", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setDecimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setDecimalSeparatorAlwaysShown(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalSeparatorAlwaysShown", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setGroupingSize(t_DecimalFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setGroupingSize(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingSize", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setGroupingUsed(t_DecimalFormat *self, PyObject *args)
    {
      jboolean a0;

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(self->object.setGroupingUsed(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setGroupingUsed", args, 2);
    }

    static PyObject *t_DecimalFormat_setMaximumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMaximumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMaximumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMinimumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMinimumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMinimumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMultiplier(t_DecimalFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMultiplier(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMultiplier", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setNegativePrefix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNegativePrefix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNegativePrefix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setNegativeSuffix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNegativeSuffix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNegativeSuffix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setParseBigDecimal(t_DecimalFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setParseBigDecimal(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setParseBigDecimal", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setPositivePrefix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setPositivePrefix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPositivePrefix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setPositiveSuffix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setPositiveSuffix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPositiveSuffix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_toLocalizedPattern(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLocalizedPattern());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_toPattern(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toPattern());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_get__currency(t_DecimalFormat *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_DecimalFormat_set__currency(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Currency value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &value))
        {
          INT_CALL(self->object.setCurrency(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currency", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__decimalFormatSymbols(t_DecimalFormat *self, void *data)
    {
      ::java::text::DecimalFormatSymbols value((jobject) NULL);
      OBJ_CALL(value = self->object.getDecimalFormatSymbols());
      return ::java::text::t_DecimalFormatSymbols::wrap_Object(value);
    }
    static int t_DecimalFormat_set__decimalFormatSymbols(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::text::DecimalFormatSymbols value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::text::DecimalFormatSymbols::initializeClass, &value))
        {
          INT_CALL(self->object.setDecimalFormatSymbols(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalFormatSymbols", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__decimalSeparatorAlwaysShown(t_DecimalFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDecimalSeparatorAlwaysShown());
      Py_RETURN_BOOL(value);
    }
    static int t_DecimalFormat_set__decimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setDecimalSeparatorAlwaysShown(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalSeparatorAlwaysShown", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__groupingSize(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getGroupingSize());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__groupingSize(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setGroupingSize(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingSize", arg);
      return -1;
    }

    static int t_DecimalFormat_set__groupingUsed(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setGroupingUsed(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingUsed", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__maximumFractionDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__maximumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__maximumIntegerDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__maximumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__minimumFractionDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__minimumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__minimumIntegerDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__minimumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__multiplier(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMultiplier());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__multiplier(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMultiplier(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "multiplier", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__negativePrefix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNegativePrefix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__negativePrefix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNegativePrefix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "negativePrefix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__negativeSuffix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNegativeSuffix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__negativeSuffix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNegativeSuffix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "negativeSuffix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__parseBigDecimal(t_DecimalFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isParseBigDecimal());
      Py_RETURN_BOOL(value);
    }
    static int t_DecimalFormat_set__parseBigDecimal(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setParseBigDecimal(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "parseBigDecimal", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__positivePrefix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPositivePrefix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__positivePrefix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setPositivePrefix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "positivePrefix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__positiveSuffix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPositiveSuffix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__positiveSuffix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setPositiveSuffix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "positiveSuffix", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *Propagator::class$ = NULL;
      jmethodID *Propagator::mids$ = NULL;
      bool Propagator::live$ = false;
      jdouble Propagator::DEFAULT_MASS = (jdouble) 0;

      jclass Propagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/Propagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_40bf76e2f8bcdb6f] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_e13564f833403504] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_clearStepHandlers_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getAdditionalStateProviders_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getDefaultLaw_1dc787509a959a6a] = env->getStaticMethodID(cls, "getDefaultLaw", "(Lorg/orekit/frames/Frames;)Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_5df44e253e7e7782] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_cb666ea1a15f5210] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_9d155cc8314c99cf] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f94e41879ab7062] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_ec3241005499cbfa] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_4f0008999861ca31] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_6845ec704c846b03] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setStepHandler_3c714d0cca30d176] = env->getMethodID(cls, "setStepHandler", "(Lorg/orekit/propagation/sampling/OrekitStepHandler;)V");
          mids$[mid_setStepHandler_6e0fc70b103d8967] = env->getMethodID(cls, "setStepHandler", "(DLorg/orekit/propagation/sampling/OrekitFixedStepHandler;)V");
          mids$[mid_setupMatricesComputation_353079da5ac9e8a7] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Propagator::addAdditionalStateProvider(const ::org::orekit::propagation::AdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_40bf76e2f8bcdb6f], a0.this$);
      }

      void Propagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_e13564f833403504], a0.this$);
      }

      void Propagator::clearEventsDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2]);
      }

      void Propagator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_a1fa5dae97ea5ed2]);
      }

      ::java::util::List Propagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_e62d3bb06d56d7e3]));
      }

      ::org::orekit::attitudes::AttitudeProvider Propagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_331f12bb6017243b]));
      }

      ::org::orekit::attitudes::AttitudeProvider Propagator::getDefaultLaw(const ::org::orekit::frames::Frames & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::attitudes::AttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_getDefaultLaw_1dc787509a959a6a], a0.this$));
      }

      ::org::orekit::propagation::EphemerisGenerator Propagator::getEphemerisGenerator() const
      {
        return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_5df44e253e7e7782]));
      }

      ::java::util::Collection Propagator::getEventsDetectors() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_cb666ea1a15f5210]));
      }

      ::org::orekit::frames::Frame Propagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::propagation::SpacecraftState Propagator::getInitialState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_9d155cc8314c99cf]));
      }

      JArray< ::java::lang::String > Propagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f94e41879ab7062]));
      }

      ::org::orekit::propagation::sampling::StepHandlerMultiplexer Propagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::StepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_ec3241005499cbfa]));
      }

      jboolean Propagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75], a0.this$);
      }

      ::org::orekit::propagation::SpacecraftState Propagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_4f0008999861ca31], a0.this$));
      }

      ::org::orekit::propagation::SpacecraftState Propagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_6845ec704c846b03], a0.this$, a1.this$));
      }

      void Propagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
      }

      void Propagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8e4d3ea100bc0095], a0.this$);
      }

      void Propagator::setStepHandler(const ::org::orekit::propagation::sampling::OrekitStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_3c714d0cca30d176], a0.this$);
      }

      void Propagator::setStepHandler(jdouble a0, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_6e0fc70b103d8967], a0, a1.this$);
      }

      ::org::orekit::propagation::MatricesHarvester Propagator::setupMatricesComputation(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) const
      {
        return ::org::orekit::propagation::MatricesHarvester(env->callObjectMethod(this$, mids$[mid_setupMatricesComputation_353079da5ac9e8a7], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_Propagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_addAdditionalStateProvider(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_addEventDetector(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_clearEventsDetectors(t_Propagator *self);
      static PyObject *t_Propagator_clearStepHandlers(t_Propagator *self);
      static PyObject *t_Propagator_getAdditionalStateProviders(t_Propagator *self);
      static PyObject *t_Propagator_getAttitudeProvider(t_Propagator *self);
      static PyObject *t_Propagator_getDefaultLaw(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Propagator_getEphemerisGenerator(t_Propagator *self);
      static PyObject *t_Propagator_getEventsDetectors(t_Propagator *self);
      static PyObject *t_Propagator_getFrame(t_Propagator *self);
      static PyObject *t_Propagator_getInitialState(t_Propagator *self);
      static PyObject *t_Propagator_getManagedAdditionalStates(t_Propagator *self);
      static PyObject *t_Propagator_getMultiplexer(t_Propagator *self);
      static PyObject *t_Propagator_isAdditionalStateManaged(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_propagate(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_resetInitialState(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_setAttitudeProvider(t_Propagator *self, PyObject *arg);
      static PyObject *t_Propagator_setStepHandler(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_setupMatricesComputation(t_Propagator *self, PyObject *args);
      static PyObject *t_Propagator_get__additionalStateProviders(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__attitudeProvider(t_Propagator *self, void *data);
      static int t_Propagator_set__attitudeProvider(t_Propagator *self, PyObject *arg, void *data);
      static PyObject *t_Propagator_get__ephemerisGenerator(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__eventsDetectors(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__frame(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__initialState(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__managedAdditionalStates(t_Propagator *self, void *data);
      static PyObject *t_Propagator_get__multiplexer(t_Propagator *self, void *data);
      static int t_Propagator_set__stepHandler(t_Propagator *self, PyObject *arg, void *data);
      static PyGetSetDef t_Propagator__fields_[] = {
        DECLARE_GET_FIELD(t_Propagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_Propagator, attitudeProvider),
        DECLARE_GET_FIELD(t_Propagator, ephemerisGenerator),
        DECLARE_GET_FIELD(t_Propagator, eventsDetectors),
        DECLARE_GET_FIELD(t_Propagator, frame),
        DECLARE_GET_FIELD(t_Propagator, initialState),
        DECLARE_GET_FIELD(t_Propagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_Propagator, multiplexer),
        DECLARE_SET_FIELD(t_Propagator, stepHandler),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Propagator__methods_[] = {
        DECLARE_METHOD(t_Propagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_Propagator, addEventDetector, METH_O),
        DECLARE_METHOD(t_Propagator, clearEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getDefaultLaw, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Propagator, getEphemerisGenerator, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_Propagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_Propagator, propagate, METH_VARARGS),
        DECLARE_METHOD(t_Propagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_Propagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_Propagator, setStepHandler, METH_VARARGS),
        DECLARE_METHOD(t_Propagator, setupMatricesComputation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Propagator)[] = {
        { Py_tp_methods, t_Propagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Propagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Propagator)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
        NULL
      };

      DEFINE_TYPE(Propagator, t_Propagator, Propagator);

      void t_Propagator::install(PyObject *module)
      {
        installType(&PY_TYPE(Propagator), &PY_TYPE_DEF(Propagator), module, "Propagator", 0);
      }

      void t_Propagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "class_", make_descriptor(Propagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "wrapfn_", make_descriptor(t_Propagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "boxfn_", make_descriptor(boxObject));
        env->getClass(Propagator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Propagator), "DEFAULT_MASS", make_descriptor(Propagator::DEFAULT_MASS));
      }

      static PyObject *t_Propagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Propagator::initializeClass, 1)))
          return NULL;
        return t_Propagator::wrap_Object(Propagator(((t_Propagator *) arg)->object.this$));
      }
      static PyObject *t_Propagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Propagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Propagator_addAdditionalStateProvider(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::AdditionalStateProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::AdditionalStateProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_Propagator_addEventDetector(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_Propagator_clearEventsDetectors(t_Propagator *self)
      {
        OBJ_CALL(self->object.clearEventsDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_Propagator_clearStepHandlers(t_Propagator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_Propagator_getAdditionalStateProviders(t_Propagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(AdditionalStateProvider));
      }

      static PyObject *t_Propagator_getAttitudeProvider(t_Propagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_Propagator_getDefaultLaw(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frames a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::propagation::Propagator::getDefaultLaw(a0));
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getDefaultLaw", arg);
        return NULL;
      }

      static PyObject *t_Propagator_getEphemerisGenerator(t_Propagator *self)
      {
        ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
      }

      static PyObject *t_Propagator_getEventsDetectors(t_Propagator *self)
      {
        ::java::util::Collection result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
      }

      static PyObject *t_Propagator_getFrame(t_Propagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Propagator_getInitialState(t_Propagator *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_Propagator_getManagedAdditionalStates(t_Propagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_Propagator_getMultiplexer(t_Propagator *self)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(result);
      }

      static PyObject *t_Propagator_isAdditionalStateManaged(t_Propagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_Propagator_propagate(t_Propagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagate(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.propagate(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_Propagator_resetInitialState(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_Propagator_setAttitudeProvider(t_Propagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }

      static PyObject *t_Propagator_setStepHandler(t_Propagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::sampling::OrekitStepHandler a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setStepHandler(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::propagation::sampling::OrekitFixedStepHandler a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::propagation::sampling::OrekitFixedStepHandler::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setStepHandler(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setStepHandler", args);
        return NULL;
      }

      static PyObject *t_Propagator_setupMatricesComputation(t_Propagator *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester result((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.setupMatricesComputation(a0, a1, a2));
          return ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setupMatricesComputation", args);
        return NULL;
      }

      static PyObject *t_Propagator_get__additionalStateProviders(t_Propagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__attitudeProvider(t_Propagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_Propagator_set__attitudeProvider(t_Propagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
          {
            INT_CALL(self->object.setAttitudeProvider(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
        return -1;
      }

      static PyObject *t_Propagator_get__ephemerisGenerator(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__eventsDetectors(t_Propagator *self, void *data)
      {
        ::java::util::Collection value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__frame(t_Propagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__initialState(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
      }

      static PyObject *t_Propagator_get__managedAdditionalStates(t_Propagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_Propagator_get__multiplexer(t_Propagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(value);
      }

      static int t_Propagator_set__stepHandler(t_Propagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::sampling::OrekitStepHandler value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepHandler::initializeClass, &value))
          {
            INT_CALL(self->object.setStepHandler(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "stepHandler", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1DFormat.h"
#include "java/text/FieldPosition.h"
#include "java/util/Locale.h"
#include "java/text/ParsePosition.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1DFormat.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Vector1DFormat::class$ = NULL;
          jmethodID *Vector1DFormat::mids$ = NULL;
          bool Vector1DFormat::live$ = false;

          jclass Vector1DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Vector1DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_b7f3d50b51ef7518] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_a627ad9c5959309d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_f042513511266bed] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_4b712c2465e37e54] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector1DFormat_e1f13f76b61559d2] = env->getStaticMethodID(cls, "getVector1DFormat", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1DFormat;");
              mids$[mid_getVector1DFormat_887f222cad8d6968] = env->getStaticMethodID(cls, "getVector1DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/oned/Vector1DFormat;");
              mids$[mid_parse_72dfc0833c7e849e] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_parse_3574fe41be7ab2ce] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector1DFormat::Vector1DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          Vector1DFormat::Vector1DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_b7f3d50b51ef7518, a0.this$)) {}

          Vector1DFormat::Vector1DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_a627ad9c5959309d, a0.this$, a1.this$)) {}

          Vector1DFormat::Vector1DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_f042513511266bed, a0.this$, a1.this$, a2.this$)) {}

          ::java::lang::StringBuffer Vector1DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_4b712c2465e37e54], a0.this$, a1.this$, a2.this$));
          }

          Vector1DFormat Vector1DFormat::getVector1DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector1DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector1DFormat_e1f13f76b61559d2]));
          }

          Vector1DFormat Vector1DFormat::getVector1DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector1DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector1DFormat_887f222cad8d6968], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Vector1DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_parse_72dfc0833c7e849e], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Vector1DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_parse_3574fe41be7ab2ce], a0.this$, a1.this$));
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
    namespace geometry {
      namespace euclidean {
        namespace oned {
          static PyObject *t_Vector1DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector1DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector1DFormat_of_(t_Vector1DFormat *self, PyObject *args);
          static int t_Vector1DFormat_init_(t_Vector1DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector1DFormat_format(t_Vector1DFormat *self, PyObject *args);
          static PyObject *t_Vector1DFormat_getVector1DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector1DFormat_parse(t_Vector1DFormat *self, PyObject *args);
          static PyObject *t_Vector1DFormat_get__vector1DFormat(t_Vector1DFormat *self, void *data);
          static PyObject *t_Vector1DFormat_get__parameters_(t_Vector1DFormat *self, void *data);
          static PyGetSetDef t_Vector1DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector1DFormat, vector1DFormat),
            DECLARE_GET_FIELD(t_Vector1DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector1DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector1DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector1DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector1DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector1DFormat, getVector1DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector1DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector1DFormat)[] = {
            { Py_tp_methods, t_Vector1DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector1DFormat_init_ },
            { Py_tp_getset, t_Vector1DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector1DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector1DFormat, t_Vector1DFormat, Vector1DFormat);
          PyObject *t_Vector1DFormat::wrap_Object(const Vector1DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector1DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector1DFormat *self = (t_Vector1DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector1DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector1DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector1DFormat *self = (t_Vector1DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector1DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector1DFormat), &PY_TYPE_DEF(Vector1DFormat), module, "Vector1DFormat", 0);
          }

          void t_Vector1DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1DFormat), "class_", make_descriptor(Vector1DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1DFormat), "wrapfn_", make_descriptor(t_Vector1DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector1DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector1DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector1DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector1DFormat::wrap_Object(Vector1DFormat(((t_Vector1DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector1DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector1DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector1DFormat_of_(t_Vector1DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector1DFormat_init_(t_Vector1DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector1DFormat object((jobject) NULL);

                INT_CALL(object = Vector1DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector1DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector1DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                Vector1DFormat object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = Vector1DFormat(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::text::NumberFormat a2((jobject) NULL);
                Vector1DFormat object((jobject) NULL);

                if (!parseArgs(args, "ssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector1DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Vector1D);
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

          static PyObject *t_Vector1DFormat_format(t_Vector1DFormat *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Vector1DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector1DFormat_getVector1DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector1DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1DFormat::getVector1DFormat());
                return t_Vector1DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector1DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::oned::Vector1DFormat::getVector1DFormat(a0));
                  return t_Vector1DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector1DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector1DFormat_parse(t_Vector1DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector1DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector1DFormat_get__parameters_(t_Vector1DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector1DFormat_get__vector1DFormat(t_Vector1DFormat *self, void *data)
          {
            Vector1DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector1DFormat());
            return t_Vector1DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator.h"
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *FieldAbstractIntegratedPropagator::mids$ = NULL;
        bool FieldAbstractIntegratedPropagator::live$ = false;

        jclass FieldAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_168fd7c6ce232baa] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/FieldAdditionalDerivativesProvider;)V");
            mids$[mid_addEventDetector_ca1d91eb6a3ce219] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getAdditionalDerivativesProviders_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_getBasicDimension_55546ef6a647f39b] = env->getMethodID(cls, "getBasicDimension", "()I");
            mids$[mid_getCalls_55546ef6a647f39b] = env->getMethodID(cls, "getCalls", "()I");
            mids$[mid_getEphemerisGenerator_afe29c55086c638f] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
            mids$[mid_getEventsDetectors_cb666ea1a15f5210] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getIntegratorName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getIntegratorName", "()Ljava/lang/String;");
            mids$[mid_getManagedAdditionalStates_0f94e41879ab7062] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMu_81520b552cb3fa26] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPropagationType_c479da51fc09a224] = env->getMethodID(cls, "getPropagationType", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_getResetAtEnd_9ab94ac1dc23b105] = env->getMethodID(cls, "getResetAtEnd", "()Z");
            mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_propagate_70fecd201ca47d3b] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_propagate_44f88f604c4d00f1] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_setMu_f2b4bfa0af1007e8] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setResetAtEnd_fcb96c98de6fad04] = env->getMethodID(cls, "setResetAtEnd", "(Z)V");
            mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_isMeanOrbit_c479da51fc09a224] = env->getMethodID(cls, "isMeanOrbit", "()Lorg/orekit/propagation/PropagationType;");
            mids$[mid_createMapper_23e677752bbdcbdf] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_getMainStateEquations_f48ddce9ae4b38bb] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_setUpEventDetector_843524bf4fe696ca] = env->getMethodID(cls, "setUpEventDetector", "(Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_setUpUserEventDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "setUpUserEventDetectors", "()V");
            mids$[mid_getInitialIntegrationState_fba6d56f8dbc98d0] = env->getMethodID(cls, "getInitialIntegrationState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_beforeIntegration_96d019f392abf918] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_afterIntegration_a1fa5dae97ea5ed2] = env->getMethodID(cls, "afterIntegration", "()V");
            mids$[mid_initMapper_02ab84aa7626616d] = env->getMethodID(cls, "initMapper", "(Lorg/hipparchus/Field;)V");
            mids$[mid_setOrbitType_2fa1f3b8966f0286] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_778d09854443b806] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_getIntegrator_a6eac7a4d7009da9] = env->getMethodID(cls, "getIntegrator", "()Lorg/hipparchus/ode/FieldODEIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldAbstractIntegratedPropagator::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_168fd7c6ce232baa], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_ca1d91eb6a3ce219], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2]);
        }

        ::java::util::List FieldAbstractIntegratedPropagator::getAdditionalDerivativesProviders() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivativesProviders_e62d3bb06d56d7e3]));
        }

        jint FieldAbstractIntegratedPropagator::getBasicDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getBasicDimension_55546ef6a647f39b]);
        }

        jint FieldAbstractIntegratedPropagator::getCalls() const
        {
          return env->callIntMethod(this$, mids$[mid_getCalls_55546ef6a647f39b]);
        }

        ::org::orekit::propagation::FieldEphemerisGenerator FieldAbstractIntegratedPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_afe29c55086c638f]));
        }

        ::java::util::Collection FieldAbstractIntegratedPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_cb666ea1a15f5210]));
        }

        ::java::lang::String FieldAbstractIntegratedPropagator::getIntegratorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIntegratorName_1c1fa1e935d6cdcf]));
        }

        JArray< ::java::lang::String > FieldAbstractIntegratedPropagator::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f94e41879ab7062]));
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractIntegratedPropagator::getMu() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_81520b552cb3fa26]));
        }

        ::org::orekit::propagation::PropagationType FieldAbstractIntegratedPropagator::getPropagationType() const
        {
          return ::org::orekit::propagation::PropagationType(env->callObjectMethod(this$, mids$[mid_getPropagationType_c479da51fc09a224]));
        }

        jboolean FieldAbstractIntegratedPropagator::getResetAtEnd() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getResetAtEnd_9ab94ac1dc23b105]);
        }

        jboolean FieldAbstractIntegratedPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75], a0.this$);
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractIntegratedPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_70fecd201ca47d3b], a0.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractIntegratedPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_44f88f604c4d00f1], a0.this$, a1.this$));
        }

        void FieldAbstractIntegratedPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8e4d3ea100bc0095], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_f2b4bfa0af1007e8], a0.this$);
        }

        void FieldAbstractIntegratedPropagator::setResetAtEnd(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setResetAtEnd_fcb96c98de6fad04], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {
        static PyObject *t_FieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_of_(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_addEventDetector(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_clearEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getBasicDimension(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getCalls(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getEphemerisGenerator(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getIntegratorName(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getManagedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_getMu(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getPropagationType(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_getResetAtEnd(t_FieldAbstractIntegratedPropagator *self);
        static PyObject *t_FieldAbstractIntegratedPropagator_isAdditionalStateManaged(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_propagate(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_setAttitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractIntegratedPropagator_setMu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_setResetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__additionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__attitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__basicDimension(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__calls(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__ephemerisGenerator(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__eventsDetectors(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__integratorName(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__managedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__mu(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__mu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__propagationType(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, void *data);
        static int t_FieldAbstractIntegratedPropagator_set__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldAbstractIntegratedPropagator_get__parameters_(t_FieldAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_FieldAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, additionalDerivativesProviders),
          DECLARE_SET_FIELD(t_FieldAbstractIntegratedPropagator, attitudeProvider),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, basicDimension),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, calls),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, integratorName),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, managedAdditionalStates),
          DECLARE_GETSET_FIELD(t_FieldAbstractIntegratedPropagator, mu),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, propagationType),
          DECLARE_GETSET_FIELD(t_FieldAbstractIntegratedPropagator, resetAtEnd),
          DECLARE_GET_FIELD(t_FieldAbstractIntegratedPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getAdditionalDerivativesProviders, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getBasicDimension, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getCalls, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getIntegratorName, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getPropagationType, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, getResetAtEnd, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, propagate, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setMu, METH_O),
          DECLARE_METHOD(t_FieldAbstractIntegratedPropagator, setResetAtEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_FieldAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
          NULL
        };

        DEFINE_TYPE(FieldAbstractIntegratedPropagator, t_FieldAbstractIntegratedPropagator, FieldAbstractIntegratedPropagator);
        PyObject *t_FieldAbstractIntegratedPropagator::wrap_Object(const FieldAbstractIntegratedPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator *self = (t_FieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractIntegratedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractIntegratedPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractIntegratedPropagator *self = (t_FieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractIntegratedPropagator), &PY_TYPE_DEF(FieldAbstractIntegratedPropagator), module, "FieldAbstractIntegratedPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "MainStateEquations", make_descriptor(&PY_TYPE_DEF(FieldAbstractIntegratedPropagator$MainStateEquations)));
        }

        void t_FieldAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "class_", make_descriptor(FieldAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_FieldAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractIntegratedPropagator::wrap_Object(FieldAbstractIntegratedPropagator(((t_FieldAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_of_(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_addAdditionalDerivativesProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::integration::FieldAdditionalDerivativesProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::integration::t_FieldAdditionalDerivativesProvider::parameters_))
          {
            OBJ_CALL(self->object.addAdditionalDerivativesProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAdditionalDerivativesProvider", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_addEventDetector(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_clearEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getAdditionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getBasicDimension(t_FieldAbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getBasicDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getCalls(t_FieldAbstractIntegratedPropagator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCalls());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getEphemerisGenerator(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getEventsDetectors(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getIntegratorName(t_FieldAbstractIntegratedPropagator *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorName());
          return j2p(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getManagedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getMu(t_FieldAbstractIntegratedPropagator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMu());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getPropagationType(t_FieldAbstractIntegratedPropagator *self)
        {
          ::org::orekit::propagation::PropagationType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_getResetAtEnd(t_FieldAbstractIntegratedPropagator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getResetAtEnd());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_isAdditionalStateManaged(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_propagate(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.propagate(a0));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.propagate(a0, a1));
                return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setAttitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractIntegratedPropagator), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setMu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_setResetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setResetAtEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setResetAtEnd", arg);
          return NULL;
        }
        static PyObject *t_FieldAbstractIntegratedPropagator_get__parameters_(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__additionalDerivativesProviders(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivativesProviders());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_FieldAbstractIntegratedPropagator_set__attitudeProvider(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__basicDimension(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getBasicDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__calls(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCalls());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__ephemerisGenerator(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__eventsDetectors(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__integratorName(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorName());
          return j2p(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__managedAdditionalStates(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__mu(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMu());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_FieldAbstractIntegratedPropagator_set__mu(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__propagationType(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          ::org::orekit::propagation::PropagationType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationType());
          return ::org::orekit::propagation::t_PropagationType::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractIntegratedPropagator_get__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getResetAtEnd());
          Py_RETURN_BOOL(value);
        }
        static int t_FieldAbstractIntegratedPropagator_set__resetAtEnd(t_FieldAbstractIntegratedPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setResetAtEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "resetAtEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmConstituent::class$ = NULL;
          jmethodID *NdmConstituent::mids$ = NULL;
          bool NdmConstituent::live$ = false;

          jclass NdmConstituent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmConstituent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConventions_53aaf70620a914af] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_687c2d3d1010744e] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getHeader_e6dd83960ea2d5d6] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
              mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_setHeader_c992d9bc15da9ba3] = env->getMethodID(cls, "setHeader", "(Lorg/orekit/files/ccsds/section/Header;)V");
              mids$[mid_setSegments_0e7c3032c7c93ed3] = env->getMethodID(cls, "setSegments", "(Ljava/util/List;)V");
              mids$[mid_validate_a1fa5dae97ea5ed2] = env->getMethodID(cls, "validate", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::IERSConventions NdmConstituent::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_53aaf70620a914af]));
          }

          ::org::orekit::data::DataContext NdmConstituent::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_687c2d3d1010744e]));
          }

          ::org::orekit::files::ccsds::section::Header NdmConstituent::getHeader() const
          {
            return ::org::orekit::files::ccsds::section::Header(env->callObjectMethod(this$, mids$[mid_getHeader_e6dd83960ea2d5d6]));
          }

          ::java::util::List NdmConstituent::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
          }

          void NdmConstituent::setHeader(const ::org::orekit::files::ccsds::section::Header & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setHeader_c992d9bc15da9ba3], a0.this$);
          }

          void NdmConstituent::setSegments(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSegments_0e7c3032c7c93ed3], a0.this$);
          }

          void NdmConstituent::validate() const
          {
            env->callVoidMethod(this$, mids$[mid_validate_a1fa5dae97ea5ed2]);
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
          static PyObject *t_NdmConstituent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmConstituent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmConstituent_of_(t_NdmConstituent *self, PyObject *args);
          static PyObject *t_NdmConstituent_getConventions(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getDataContext(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getHeader(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getSegments(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_setHeader(t_NdmConstituent *self, PyObject *arg);
          static PyObject *t_NdmConstituent_setSegments(t_NdmConstituent *self, PyObject *arg);
          static PyObject *t_NdmConstituent_validate(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_get__conventions(t_NdmConstituent *self, void *data);
          static PyObject *t_NdmConstituent_get__dataContext(t_NdmConstituent *self, void *data);
          static PyObject *t_NdmConstituent_get__header(t_NdmConstituent *self, void *data);
          static int t_NdmConstituent_set__header(t_NdmConstituent *self, PyObject *arg, void *data);
          static PyObject *t_NdmConstituent_get__segments(t_NdmConstituent *self, void *data);
          static int t_NdmConstituent_set__segments(t_NdmConstituent *self, PyObject *arg, void *data);
          static PyObject *t_NdmConstituent_get__parameters_(t_NdmConstituent *self, void *data);
          static PyGetSetDef t_NdmConstituent__fields_[] = {
            DECLARE_GET_FIELD(t_NdmConstituent, conventions),
            DECLARE_GET_FIELD(t_NdmConstituent, dataContext),
            DECLARE_GETSET_FIELD(t_NdmConstituent, header),
            DECLARE_GETSET_FIELD(t_NdmConstituent, segments),
            DECLARE_GET_FIELD(t_NdmConstituent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NdmConstituent__methods_[] = {
            DECLARE_METHOD(t_NdmConstituent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmConstituent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmConstituent, of_, METH_VARARGS),
            DECLARE_METHOD(t_NdmConstituent, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getHeader, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getSegments, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, setHeader, METH_O),
            DECLARE_METHOD(t_NdmConstituent, setSegments, METH_O),
            DECLARE_METHOD(t_NdmConstituent, validate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmConstituent)[] = {
            { Py_tp_methods, t_NdmConstituent__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NdmConstituent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmConstituent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NdmConstituent, t_NdmConstituent, NdmConstituent);
          PyObject *t_NdmConstituent::wrap_Object(const NdmConstituent& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_NdmConstituent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmConstituent *self = (t_NdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_NdmConstituent::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_NdmConstituent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmConstituent *self = (t_NdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_NdmConstituent::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmConstituent), &PY_TYPE_DEF(NdmConstituent), module, "NdmConstituent", 0);
          }

          void t_NdmConstituent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "class_", make_descriptor(NdmConstituent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "wrapfn_", make_descriptor(t_NdmConstituent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmConstituent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmConstituent::initializeClass, 1)))
              return NULL;
            return t_NdmConstituent::wrap_Object(NdmConstituent(((t_NdmConstituent *) arg)->object.this$));
          }
          static PyObject *t_NdmConstituent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmConstituent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NdmConstituent_of_(t_NdmConstituent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NdmConstituent_getConventions(t_NdmConstituent *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getDataContext(t_NdmConstituent *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getHeader(t_NdmConstituent *self)
          {
            ::org::orekit::files::ccsds::section::Header result((jobject) NULL);
            OBJ_CALL(result = self->object.getHeader());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Header::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getSegments(t_NdmConstituent *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
          }

          static PyObject *t_NdmConstituent_setHeader(t_NdmConstituent *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::section::Header a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setHeader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setHeader", arg);
            return NULL;
          }

          static PyObject *t_NdmConstituent_setSegments(t_NdmConstituent *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setSegments(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSegments", arg);
            return NULL;
          }

          static PyObject *t_NdmConstituent_validate(t_NdmConstituent *self)
          {
            OBJ_CALL(self->object.validate());
            Py_RETURN_NONE;
          }
          static PyObject *t_NdmConstituent_get__parameters_(t_NdmConstituent *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_NdmConstituent_get__conventions(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_NdmConstituent_get__dataContext(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_NdmConstituent_get__header(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
            OBJ_CALL(value = self->object.getHeader());
            return ::org::orekit::files::ccsds::section::t_Header::wrap_Object(value);
          }
          static int t_NdmConstituent_set__header(t_NdmConstituent *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
              {
                INT_CALL(self->object.setHeader(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "header", arg);
            return -1;
          }

          static PyObject *t_NdmConstituent_get__segments(t_NdmConstituent *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_NdmConstituent_set__segments(t_NdmConstituent *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setSegments(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "segments", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *SpacecraftState::class$ = NULL;
      jmethodID *SpacecraftState::mids$ = NULL;
      bool SpacecraftState::live$ = false;
      jdouble SpacecraftState::DEFAULT_MASS = (jdouble) 0;

      jclass SpacecraftState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/SpacecraftState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_08587d4b3fc64a24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_69b47a274eed440d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_e0984b26cd5cf74d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_0e2c983b8c1d8f50] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_d9c24bf94bc211c6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;D)V");
          mids$[mid_init$_b22426d582c18f23] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_2fcfed733b7a8eb9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_8fed341cbd0be79a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;D)V");
          mids$[mid_init$_6774606baa4c6a58] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_95d773a980506000] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_b3b36a32c2adc270] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;D)V");
          mids$[mid_init$_2ab7b060567cc3aa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_650558d6171c3219] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;D)V");
          mids$[mid_init$_f5ef24ce12f1740b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_c3a61c117b92d41e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_f122253a8598b1e2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_2e969436e51998a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_76bd565021d5c729] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_addAdditionalState_fc076482ca98edf7] = env->getMethodID(cls, "addAdditionalState", "(Ljava/lang/String;[D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_addAdditionalStateDerivative_fc076482ca98edf7] = env->getMethodID(cls, "addAdditionalStateDerivative", "(Ljava/lang/String;[D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_ensureCompatibleAdditionalStates_280c3390961e0a50] = env->getMethodID(cls, "ensureCompatibleAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_getA_b74f83833fdad017] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getAbsPVA_900ea521fabf17ca] = env->getMethodID(cls, "getAbsPVA", "()Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_getAdditionalState_1d7f5d54f6c58f85] = env->getMethodID(cls, "getAdditionalState", "(Ljava/lang/String;)[D");
          mids$[mid_getAdditionalStateDerivative_1d7f5d54f6c58f85] = env->getMethodID(cls, "getAdditionalStateDerivative", "(Ljava/lang/String;)[D");
          mids$[mid_getAdditionalStatesDerivatives_7e78a9fc753e1e5a] = env->getMethodID(cls, "getAdditionalStatesDerivatives", "()Lorg/orekit/utils/DoubleArrayDictionary;");
          mids$[mid_getAdditionalStatesValues_7e78a9fc753e1e5a] = env->getMethodID(cls, "getAdditionalStatesValues", "()Lorg/orekit/utils/DoubleArrayDictionary;");
          mids$[mid_getAttitude_9d85ee1243dd5d25] = env->getMethodID(cls, "getAttitude", "()Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getE_b74f83833fdad017] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEquinoctialEx_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialEy_b74f83833fdad017] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_b74f83833fdad017] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHy_b74f83833fdad017] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getI_b74f83833fdad017] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getKeplerianMeanMotion_b74f83833fdad017] = env->getMethodID(cls, "getKeplerianMeanMotion", "()D");
          mids$[mid_getKeplerianPeriod_b74f83833fdad017] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
          mids$[mid_getLE_b74f83833fdad017] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLM_b74f83833fdad017] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLv_b74f83833fdad017] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getMass_b74f83833fdad017] = env->getMethodID(cls, "getMass", "()D");
          mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
          mids$[mid_getOrbit_b6e68c5f730fb347] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/Orbit;");
          mids$[mid_getPVCoordinates_136cc8ba23b21c29] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_03c7a0bca588a4f5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_8b724f8b4fdad1a2] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_982d534f80d70918] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_hasAdditionalState_cde6b28e15c96b75] = env->getMethodID(cls, "hasAdditionalState", "(Ljava/lang/String;)Z");
          mids$[mid_hasAdditionalStateDerivative_cde6b28e15c96b75] = env->getMethodID(cls, "hasAdditionalStateDerivative", "(Ljava/lang/String;)Z");
          mids$[mid_isOrbitDefined_9ab94ac1dc23b105] = env->getMethodID(cls, "isOrbitDefined", "()Z");
          mids$[mid_shiftedBy_baed2cc097607a95] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_toStaticTransform_00930874428900c5] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toTransform_417755e67b7f769d] = env->getMethodID(cls, "toTransform", "()Lorg/orekit/frames/Transform;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08587d4b3fc64a24, a0.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_69b47a274eed440d, a0.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e0984b26cd5cf74d, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::utils::DoubleArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e2c983b8c1d8f50, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d9c24bf94bc211c6, a0.this$, a1)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b22426d582c18f23, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::utils::DoubleArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2fcfed733b7a8eb9, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fed341cbd0be79a, a0.this$, a1)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6774606baa4c6a58, a0.this$, a1.this$, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, jdouble a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_95d773a980506000, a0.this$, a1, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b3b36a32c2adc270, a0.this$, a1.this$, a2)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ab7b060567cc3aa, a0.this$, a1.this$, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_650558d6171c3219, a0.this$, a1.this$, a2)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ef24ce12f1740b, a0.this$, a1, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3a61c117b92d41e, a0.this$, a1.this$, a2, a3.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f122253a8598b1e2, a0.this$, a1.this$, a2, a3.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3, const ::org::orekit::utils::DoubleArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2e969436e51998a5, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3, const ::org::orekit::utils::DoubleArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_76bd565021d5c729, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

      SpacecraftState SpacecraftState::addAdditionalState(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalState_fc076482ca98edf7], a0.this$, a1.this$));
      }

      SpacecraftState SpacecraftState::addAdditionalStateDerivative(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalStateDerivative_fc076482ca98edf7], a0.this$, a1.this$));
      }

      void SpacecraftState::ensureCompatibleAdditionalStates(const SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_ensureCompatibleAdditionalStates_280c3390961e0a50], a0.this$);
      }

      jdouble SpacecraftState::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_b74f83833fdad017]);
      }

      ::org::orekit::utils::AbsolutePVCoordinates SpacecraftState::getAbsPVA() const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getAbsPVA_900ea521fabf17ca]));
      }

      JArray< jdouble > SpacecraftState::getAdditionalState(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_1d7f5d54f6c58f85], a0.this$));
      }

      JArray< jdouble > SpacecraftState::getAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalStateDerivative_1d7f5d54f6c58f85], a0.this$));
      }

      ::org::orekit::utils::DoubleArrayDictionary SpacecraftState::getAdditionalStatesDerivatives() const
      {
        return ::org::orekit::utils::DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesDerivatives_7e78a9fc753e1e5a]));
      }

      ::org::orekit::utils::DoubleArrayDictionary SpacecraftState::getAdditionalStatesValues() const
      {
        return ::org::orekit::utils::DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesValues_7e78a9fc753e1e5a]));
      }

      ::org::orekit::attitudes::Attitude SpacecraftState::getAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_9d85ee1243dd5d25]));
      }

      ::org::orekit::time::AbsoluteDate SpacecraftState::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      jdouble SpacecraftState::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_b74f83833fdad017]);
      }

      jdouble SpacecraftState::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_b74f83833fdad017]);
      }

      jdouble SpacecraftState::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_b74f83833fdad017]);
      }

      ::org::orekit::frames::Frame SpacecraftState::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      jdouble SpacecraftState::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_b74f83833fdad017]);
      }

      jdouble SpacecraftState::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_b74f83833fdad017]);
      }

      jdouble SpacecraftState::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_b74f83833fdad017]);
      }

      jdouble SpacecraftState::getKeplerianMeanMotion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianMeanMotion_b74f83833fdad017]);
      }

      jdouble SpacecraftState::getKeplerianPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_b74f83833fdad017]);
      }

      jdouble SpacecraftState::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_b74f83833fdad017]);
      }

      jdouble SpacecraftState::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_b74f83833fdad017]);
      }

      jdouble SpacecraftState::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_b74f83833fdad017]);
      }

      jdouble SpacecraftState::getMass() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMass_b74f83833fdad017]);
      }

      jdouble SpacecraftState::getMu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
      }

      ::org::orekit::orbits::Orbit SpacecraftState::getOrbit() const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOrbit_b6e68c5f730fb347]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates SpacecraftState::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_136cc8ba23b21c29]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates SpacecraftState::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_03c7a0bca588a4f5], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SpacecraftState::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_8b724f8b4fdad1a2]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SpacecraftState::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_982d534f80d70918], a0.this$));
      }

      jboolean SpacecraftState::hasAdditionalState(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalState_cde6b28e15c96b75], a0.this$);
      }

      jboolean SpacecraftState::hasAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalStateDerivative_cde6b28e15c96b75], a0.this$);
      }

      jboolean SpacecraftState::isOrbitDefined() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isOrbitDefined_9ab94ac1dc23b105]);
      }

      SpacecraftState SpacecraftState::shiftedBy(jdouble a0) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_baed2cc097607a95], a0));
      }

      ::org::orekit::frames::StaticTransform SpacecraftState::toStaticTransform() const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_00930874428900c5]));
      }

      ::java::lang::String SpacecraftState::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::org::orekit::frames::Transform SpacecraftState::toTransform() const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_toTransform_417755e67b7f769d]));
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
      static PyObject *t_SpacecraftState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SpacecraftState_init_(t_SpacecraftState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SpacecraftState_addAdditionalState(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_addAdditionalStateDerivative(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_ensureCompatibleAdditionalStates(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_getA(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAbsPVA(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAdditionalState(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_getAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_getAdditionalStatesDerivatives(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAdditionalStatesValues(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAttitude(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getDate(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getE(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getEquinoctialEx(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getEquinoctialEy(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getFrame(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getHx(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getHy(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getI(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getKeplerianMeanMotion(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getKeplerianPeriod(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getLE(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getLM(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getLv(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getMass(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getMu(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getOrbit(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getPVCoordinates(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_getPosition(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_hasAdditionalState(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_hasAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_isOrbitDefined(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_shiftedBy(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_toStaticTransform(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_toString(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_toTransform(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_get__a(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__absPVA(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__additionalStatesDerivatives(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__additionalStatesValues(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__attitude(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__date(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__e(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__equinoctialEx(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__equinoctialEy(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__frame(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__hx(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__hy(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__i(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__keplerianMeanMotion(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__keplerianPeriod(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__lE(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__lM(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__lv(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__mass(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__mu(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__orbit(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__orbitDefined(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__pVCoordinates(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__position(t_SpacecraftState *self, void *data);
      static PyGetSetDef t_SpacecraftState__fields_[] = {
        DECLARE_GET_FIELD(t_SpacecraftState, a),
        DECLARE_GET_FIELD(t_SpacecraftState, absPVA),
        DECLARE_GET_FIELD(t_SpacecraftState, additionalStatesDerivatives),
        DECLARE_GET_FIELD(t_SpacecraftState, additionalStatesValues),
        DECLARE_GET_FIELD(t_SpacecraftState, attitude),
        DECLARE_GET_FIELD(t_SpacecraftState, date),
        DECLARE_GET_FIELD(t_SpacecraftState, e),
        DECLARE_GET_FIELD(t_SpacecraftState, equinoctialEx),
        DECLARE_GET_FIELD(t_SpacecraftState, equinoctialEy),
        DECLARE_GET_FIELD(t_SpacecraftState, frame),
        DECLARE_GET_FIELD(t_SpacecraftState, hx),
        DECLARE_GET_FIELD(t_SpacecraftState, hy),
        DECLARE_GET_FIELD(t_SpacecraftState, i),
        DECLARE_GET_FIELD(t_SpacecraftState, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_SpacecraftState, keplerianPeriod),
        DECLARE_GET_FIELD(t_SpacecraftState, lE),
        DECLARE_GET_FIELD(t_SpacecraftState, lM),
        DECLARE_GET_FIELD(t_SpacecraftState, lv),
        DECLARE_GET_FIELD(t_SpacecraftState, mass),
        DECLARE_GET_FIELD(t_SpacecraftState, mu),
        DECLARE_GET_FIELD(t_SpacecraftState, orbit),
        DECLARE_GET_FIELD(t_SpacecraftState, orbitDefined),
        DECLARE_GET_FIELD(t_SpacecraftState, pVCoordinates),
        DECLARE_GET_FIELD(t_SpacecraftState, position),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SpacecraftState__methods_[] = {
        DECLARE_METHOD(t_SpacecraftState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftState, addAdditionalState, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, addAdditionalStateDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, ensureCompatibleAdditionalStates, METH_O),
        DECLARE_METHOD(t_SpacecraftState, getA, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAbsPVA, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalState, METH_O),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalStatesDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalStatesValues, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAttitude, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getDate, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getE, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getHx, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getHy, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getI, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getLE, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getLM, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getLv, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getMass, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getMu, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getOrbit, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, hasAdditionalState, METH_O),
        DECLARE_METHOD(t_SpacecraftState, hasAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_SpacecraftState, isOrbitDefined, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, shiftedBy, METH_O),
        DECLARE_METHOD(t_SpacecraftState, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, toString, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, toTransform, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SpacecraftState)[] = {
        { Py_tp_methods, t_SpacecraftState__methods_ },
        { Py_tp_init, (void *) t_SpacecraftState_init_ },
        { Py_tp_getset, t_SpacecraftState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SpacecraftState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SpacecraftState, t_SpacecraftState, SpacecraftState);

      void t_SpacecraftState::install(PyObject *module)
      {
        installType(&PY_TYPE(SpacecraftState), &PY_TYPE_DEF(SpacecraftState), module, "SpacecraftState", 0);
      }

      void t_SpacecraftState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "class_", make_descriptor(SpacecraftState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "wrapfn_", make_descriptor(t_SpacecraftState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "boxfn_", make_descriptor(boxObject));
        env->getClass(SpacecraftState::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "DEFAULT_MASS", make_descriptor(SpacecraftState::DEFAULT_MASS));
      }

      static PyObject *t_SpacecraftState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SpacecraftState::initializeClass, 1)))
          return NULL;
        return t_SpacecraftState::wrap_Object(SpacecraftState(((t_SpacecraftState *) arg)->object.this$));
      }
      static PyObject *t_SpacecraftState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SpacecraftState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SpacecraftState_init_(t_SpacecraftState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, &a0))
            {
              INT_CALL(object = SpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = SpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            jdouble a1;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            jdouble a1;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a4((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDkk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a4((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3, a4));
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

      static PyObject *t_SpacecraftState_addAdditionalState(t_SpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.addAdditionalState(a0, a1));
          return t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalState", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_addAdditionalStateDerivative(t_SpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.addAdditionalStateDerivative(a0, a1));
          return t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateDerivative", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_ensureCompatibleAdditionalStates(t_SpacecraftState *self, PyObject *arg)
      {
        SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.ensureCompatibleAdditionalStates(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "ensureCompatibleAdditionalStates", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getA(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getAbsPVA(t_SpacecraftState *self)
      {
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVA());
        return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getAdditionalState(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalStateDerivative(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getAdditionalStatesDerivatives(t_SpacecraftState *self)
      {
        ::org::orekit::utils::DoubleArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getAdditionalStatesValues(t_SpacecraftState *self)
      {
        ::org::orekit::utils::DoubleArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getAttitude(t_SpacecraftState *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getDate(t_SpacecraftState *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getE(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getEquinoctialEx(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getEquinoctialEy(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getFrame(t_SpacecraftState *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getHx(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getHy(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getI(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getKeplerianMeanMotion(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getKeplerianPeriod(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getLE(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getLM(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getLv(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLv());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getMass(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMass());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getMu(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMu());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getOrbit(t_SpacecraftState *self)
      {
        ::org::orekit::orbits::Orbit result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbit());
        return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getPVCoordinates(t_SpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getPosition(t_SpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_hasAdditionalState(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalState(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_hasAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalStateDerivative(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_isOrbitDefined(t_SpacecraftState *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isOrbitDefined());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SpacecraftState_shiftedBy(t_SpacecraftState *self, PyObject *arg)
      {
        jdouble a0;
        SpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_toStaticTransform(t_SpacecraftState *self)
      {
        ::org::orekit::frames::StaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_toString(t_SpacecraftState *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(SpacecraftState), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_SpacecraftState_toTransform(t_SpacecraftState *self)
      {
        ::org::orekit::frames::Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.toTransform());
        return ::org::orekit::frames::t_Transform::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_get__a(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__absPVA(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::AbsolutePVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVA());
        return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__additionalStatesDerivatives(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::DoubleArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__additionalStatesValues(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::DoubleArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__attitude(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__date(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__e(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__equinoctialEx(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__equinoctialEy(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__frame(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__hx(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__hy(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__i(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__keplerianMeanMotion(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__keplerianPeriod(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__lE(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__lM(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__lv(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__mass(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMass());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__mu(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMu());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__orbit(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::orbits::Orbit value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbit());
        return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__orbitDefined(t_SpacecraftState *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isOrbitDefined());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_SpacecraftState_get__pVCoordinates(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__position(t_SpacecraftState *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
