#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StorelessUnivariateStatistic::class$ = NULL;
        jmethodID *StorelessUnivariateStatistic::mids$ = NULL;
        bool StorelessUnivariateStatistic::live$ = false;

        jclass StorelessUnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StorelessUnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_accept_17db3a65980d3441] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_ac0cb19696f2f20f] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;");
            mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
            mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
            mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");
            mids$[mid_incrementAll_fa9d415d19f69361] = env->getMethodID(cls, "incrementAll", "([D)V");
            mids$[mid_incrementAll_12aca76acb10f1af] = env->getMethodID(cls, "incrementAll", "([DII)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StorelessUnivariateStatistic::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_17db3a65980d3441], a0);
        }

        void StorelessUnivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
        }

        StorelessUnivariateStatistic StorelessUnivariateStatistic::copy() const
        {
          return StorelessUnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_ac0cb19696f2f20f]));
        }

        jdouble StorelessUnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
        }

        jlong StorelessUnivariateStatistic::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
        }

        jdouble StorelessUnivariateStatistic::getResult() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
        }

        void StorelessUnivariateStatistic::increment(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
        }

        void StorelessUnivariateStatistic::incrementAll(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_incrementAll_fa9d415d19f69361], a0.this$);
        }

        void StorelessUnivariateStatistic::incrementAll(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_incrementAll_12aca76acb10f1af], a0.this$, a1, a2);
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
        static PyObject *t_StorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_accept(t_StorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_clear(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_copy(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_evaluate(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_getN(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_getResult(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_increment(t_StorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_incrementAll(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_get__n(t_StorelessUnivariateStatistic *self, void *data);
        static PyObject *t_StorelessUnivariateStatistic_get__result(t_StorelessUnivariateStatistic *self, void *data);
        static PyGetSetDef t_StorelessUnivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessUnivariateStatistic, n),
          DECLARE_GET_FIELD(t_StorelessUnivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessUnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_StorelessUnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, accept, METH_O),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, copy, METH_VARARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, evaluate, METH_VARARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, getN, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, increment, METH_O),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, incrementAll, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessUnivariateStatistic)[] = {
          { Py_tp_methods, t_StorelessUnivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StorelessUnivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessUnivariateStatistic)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::UnivariateStatistic),
          NULL
        };

        DEFINE_TYPE(StorelessUnivariateStatistic, t_StorelessUnivariateStatistic, StorelessUnivariateStatistic);

        void t_StorelessUnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessUnivariateStatistic), &PY_TYPE_DEF(StorelessUnivariateStatistic), module, "StorelessUnivariateStatistic", 0);
        }

        void t_StorelessUnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "class_", make_descriptor(StorelessUnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "wrapfn_", make_descriptor(t_StorelessUnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessUnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_StorelessUnivariateStatistic::wrap_Object(StorelessUnivariateStatistic(((t_StorelessUnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_StorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessUnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StorelessUnivariateStatistic_accept(t_StorelessUnivariateStatistic *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.accept(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "accept", arg);
          return NULL;
        }

        static PyObject *t_StorelessUnivariateStatistic_clear(t_StorelessUnivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StorelessUnivariateStatistic_copy(t_StorelessUnivariateStatistic *self, PyObject *args)
        {
          StorelessUnivariateStatistic result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_StorelessUnivariateStatistic::wrap_Object(result);
          }

          return callSuper(PY_TYPE(StorelessUnivariateStatistic), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_StorelessUnivariateStatistic_evaluate(t_StorelessUnivariateStatistic *self, PyObject *args)
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

          return callSuper(PY_TYPE(StorelessUnivariateStatistic), (PyObject *) self, "evaluate", args, 2);
        }

        static PyObject *t_StorelessUnivariateStatistic_getN(t_StorelessUnivariateStatistic *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StorelessUnivariateStatistic_getResult(t_StorelessUnivariateStatistic *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getResult());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StorelessUnivariateStatistic_increment(t_StorelessUnivariateStatistic *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_StorelessUnivariateStatistic_incrementAll(t_StorelessUnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(self->object.incrementAll(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "[DII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.incrementAll(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "incrementAll", args);
          return NULL;
        }

        static PyObject *t_StorelessUnivariateStatistic_get__n(t_StorelessUnivariateStatistic *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StorelessUnivariateStatistic_get__result(t_StorelessUnivariateStatistic *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getResult());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmMetadataKey::class$ = NULL;
              jmethodID *OcmMetadataKey::mids$ = NULL;
              bool OcmMetadataKey::live$ = false;
              OcmMetadataKey *OcmMetadataKey::ADM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::ALTERNATE_NAMES = NULL;
              OcmMetadataKey *OcmMetadataKey::CATALOG_NAME = NULL;
              OcmMetadataKey *OcmMetadataKey::CDM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::CELESTIAL_SOURCE = NULL;
              OcmMetadataKey *OcmMetadataKey::CONSTELLATION = NULL;
              OcmMetadataKey *OcmMetadataKey::COUNTRY = NULL;
              OcmMetadataKey *OcmMetadataKey::EOP_SOURCE = NULL;
              OcmMetadataKey *OcmMetadataKey::EPOCH_TZERO = NULL;
              OcmMetadataKey *OcmMetadataKey::INTERNATIONAL_DESIGNATOR = NULL;
              OcmMetadataKey *OcmMetadataKey::INTERP_METHOD_EOP = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_LEAP_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_LEAP_TAIMUTC = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_MESSAGE_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_MESSAGE_ID = NULL;
              OcmMetadataKey *OcmMetadataKey::OBJECT_DESIGNATOR = NULL;
              OcmMetadataKey *OcmMetadataKey::OBJECT_TYPE = NULL;
              OcmMetadataKey *OcmMetadataKey::OCM_DATA_ELEMENTS = NULL;
              OcmMetadataKey *OcmMetadataKey::OPERATOR = NULL;
              OcmMetadataKey *OcmMetadataKey::OPS_STATUS = NULL;
              OcmMetadataKey *OcmMetadataKey::ORBIT_CATEGORY = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_ADDRESS = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_EMAIL = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_PHONE = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_POC = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_POSITION = NULL;
              OcmMetadataKey *OcmMetadataKey::OWNER = NULL;
              OcmMetadataKey *OcmMetadataKey::PREVIOUS_MESSAGE_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::PREVIOUS_MESSAGE_ID = NULL;
              OcmMetadataKey *OcmMetadataKey::PRM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::RDM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::SCLK_OFFSET_AT_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::SCLK_SEC_PER_SI_SEC = NULL;
              OcmMetadataKey *OcmMetadataKey::START_TIME = NULL;
              OcmMetadataKey *OcmMetadataKey::STOP_TIME = NULL;
              OcmMetadataKey *OcmMetadataKey::TAIMUTC_AT_TZERO = NULL;
              OcmMetadataKey *OcmMetadataKey::TDM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_ADDRESS = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_EMAIL = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_ORG = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_PHONE = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_POC = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_POSITION = NULL;
              OcmMetadataKey *OcmMetadataKey::TIME_SPAN = NULL;
              OcmMetadataKey *OcmMetadataKey::UT1MUTC_AT_TZERO = NULL;

              jclass OcmMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_6491a9a59507ad54] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;)Z");
                  mids$[mid_valueOf_479d53521c73ebc9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;");
                  mids$[mid_values_663506d196b1f7d9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ADM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "ADM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ALTERNATE_NAMES = new OcmMetadataKey(env->getStaticObjectField(cls, "ALTERNATE_NAMES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CATALOG_NAME = new OcmMetadataKey(env->getStaticObjectField(cls, "CATALOG_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CDM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "CDM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CELESTIAL_SOURCE = new OcmMetadataKey(env->getStaticObjectField(cls, "CELESTIAL_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CONSTELLATION = new OcmMetadataKey(env->getStaticObjectField(cls, "CONSTELLATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  COUNTRY = new OcmMetadataKey(env->getStaticObjectField(cls, "COUNTRY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  EOP_SOURCE = new OcmMetadataKey(env->getStaticObjectField(cls, "EOP_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  EPOCH_TZERO = new OcmMetadataKey(env->getStaticObjectField(cls, "EPOCH_TZERO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  INTERNATIONAL_DESIGNATOR = new OcmMetadataKey(env->getStaticObjectField(cls, "INTERNATIONAL_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  INTERP_METHOD_EOP = new OcmMetadataKey(env->getStaticObjectField(cls, "INTERP_METHOD_EOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_LEAP_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_LEAP_TAIMUTC = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_TAIMUTC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_MESSAGE_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_MESSAGE_ID = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_MESSAGE_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OBJECT_DESIGNATOR = new OcmMetadataKey(env->getStaticObjectField(cls, "OBJECT_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OBJECT_TYPE = new OcmMetadataKey(env->getStaticObjectField(cls, "OBJECT_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OCM_DATA_ELEMENTS = new OcmMetadataKey(env->getStaticObjectField(cls, "OCM_DATA_ELEMENTS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OPERATOR = new OcmMetadataKey(env->getStaticObjectField(cls, "OPERATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OPS_STATUS = new OcmMetadataKey(env->getStaticObjectField(cls, "OPS_STATUS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORBIT_CATEGORY = new OcmMetadataKey(env->getStaticObjectField(cls, "ORBIT_CATEGORY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_ADDRESS = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_ADDRESS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_EMAIL = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_EMAIL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_PHONE = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_PHONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_POC = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_POSITION = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POSITION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OWNER = new OcmMetadataKey(env->getStaticObjectField(cls, "OWNER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  PREVIOUS_MESSAGE_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  PREVIOUS_MESSAGE_ID = new OcmMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  PRM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "PRM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  RDM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "RDM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  SCLK_OFFSET_AT_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "SCLK_OFFSET_AT_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  SCLK_SEC_PER_SI_SEC = new OcmMetadataKey(env->getStaticObjectField(cls, "SCLK_SEC_PER_SI_SEC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  START_TIME = new OcmMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  STOP_TIME = new OcmMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TAIMUTC_AT_TZERO = new OcmMetadataKey(env->getStaticObjectField(cls, "TAIMUTC_AT_TZERO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TDM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "TDM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_ADDRESS = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_ADDRESS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_EMAIL = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_EMAIL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_ORG = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_ORG", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_PHONE = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_PHONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_POC = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_POC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_POSITION = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_POSITION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TIME_SPAN = new OcmMetadataKey(env->getStaticObjectField(cls, "TIME_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  UT1MUTC_AT_TZERO = new OcmMetadataKey(env->getStaticObjectField(cls, "UT1MUTC_AT_TZERO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OcmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_6491a9a59507ad54], a0.this$, a1.this$, a2.this$);
              }

              OcmMetadataKey OcmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_479d53521c73ebc9], a0.this$));
              }

              JArray< OcmMetadataKey > OcmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_663506d196b1f7d9]));
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
            namespace ocm {
              static PyObject *t_OcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmMetadataKey_of_(t_OcmMetadataKey *self, PyObject *args);
              static PyObject *t_OcmMetadataKey_process(t_OcmMetadataKey *self, PyObject *args);
              static PyObject *t_OcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OcmMetadataKey_get__parameters_(t_OcmMetadataKey *self, void *data);
              static PyGetSetDef t_OcmMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OcmMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OcmMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OcmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmMetadataKey)[] = {
                { Py_tp_methods, t_OcmMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmMetadataKey, t_OcmMetadataKey, OcmMetadataKey);
              PyObject *t_OcmMetadataKey::wrap_Object(const OcmMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmMetadataKey *self = (t_OcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmMetadataKey *self = (t_OcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmMetadataKey), &PY_TYPE_DEF(OcmMetadataKey), module, "OcmMetadataKey", 0);
              }

              void t_OcmMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "class_", make_descriptor(OcmMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "wrapfn_", make_descriptor(t_OcmMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ADM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ADM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ALTERNATE_NAMES", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ALTERNATE_NAMES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CATALOG_NAME", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CATALOG_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CDM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CDM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CELESTIAL_SOURCE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CELESTIAL_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CONSTELLATION", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CONSTELLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "COUNTRY", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::COUNTRY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "EOP_SOURCE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::EOP_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "EPOCH_TZERO", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::EPOCH_TZERO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "INTERNATIONAL_DESIGNATOR", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::INTERNATIONAL_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "INTERP_METHOD_EOP", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::INTERP_METHOD_EOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_LEAP_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_LEAP_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_LEAP_TAIMUTC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_LEAP_TAIMUTC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_MESSAGE_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_MESSAGE_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_MESSAGE_ID", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_MESSAGE_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OBJECT_DESIGNATOR", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OBJECT_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OBJECT_TYPE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OBJECT_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OCM_DATA_ELEMENTS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OCM_DATA_ELEMENTS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OPERATOR", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OPERATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OPS_STATUS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OPS_STATUS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORBIT_CATEGORY", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORBIT_CATEGORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_ADDRESS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_ADDRESS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_EMAIL", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_EMAIL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_PHONE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_PHONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_POC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_POC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_POSITION", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_POSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OWNER", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OWNER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "PREVIOUS_MESSAGE_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::PREVIOUS_MESSAGE_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "PREVIOUS_MESSAGE_ID", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::PREVIOUS_MESSAGE_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "PRM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::PRM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "RDM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::RDM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "SCLK_OFFSET_AT_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::SCLK_OFFSET_AT_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "SCLK_SEC_PER_SI_SEC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::SCLK_SEC_PER_SI_SEC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "START_TIME", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "STOP_TIME", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TAIMUTC_AT_TZERO", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TAIMUTC_AT_TZERO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TDM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TDM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_ADDRESS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_ADDRESS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_EMAIL", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_EMAIL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_ORG", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_ORG)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_PHONE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_PHONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_POC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_POC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_POSITION", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_POSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TIME_SPAN", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TIME_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "UT1MUTC_AT_TZERO", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::UT1MUTC_AT_TZERO)));
              }

              static PyObject *t_OcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OcmMetadataKey::wrap_Object(OcmMetadataKey(((t_OcmMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmMetadataKey_of_(t_OcmMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmMetadataKey_process(t_OcmMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadataKey::valueOf(a0));
                  return t_OcmMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmMetadataKey_values(PyTypeObject *type)
              {
                JArray< OcmMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OcmMetadataKey::wrap_jobject);
              }
              static PyObject *t_OcmMetadataKey_get__parameters_(t_OcmMetadataKey *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/PythonLexicalAnalyzer.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *PythonLexicalAnalyzer::class$ = NULL;
            jmethodID *PythonLexicalAnalyzer::mids$ = NULL;
            bool PythonLexicalAnalyzer::live$ = false;

            jclass PythonLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_accept_94f8bc3acabdf0ba] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonLexicalAnalyzer::PythonLexicalAnalyzer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonLexicalAnalyzer::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonLexicalAnalyzer::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonLexicalAnalyzer::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
            static PyObject *t_PythonLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonLexicalAnalyzer_init_(t_PythonLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonLexicalAnalyzer_finalize(t_PythonLexicalAnalyzer *self);
            static PyObject *t_PythonLexicalAnalyzer_pythonExtension(t_PythonLexicalAnalyzer *self, PyObject *args);
            static jobject JNICALL t_PythonLexicalAnalyzer_accept0(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonLexicalAnalyzer_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonLexicalAnalyzer_get__self(t_PythonLexicalAnalyzer *self, void *data);
            static PyGetSetDef t_PythonLexicalAnalyzer__fields_[] = {
              DECLARE_GET_FIELD(t_PythonLexicalAnalyzer, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_PythonLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonLexicalAnalyzer)[] = {
              { Py_tp_methods, t_PythonLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_PythonLexicalAnalyzer_init_ },
              { Py_tp_getset, t_PythonLexicalAnalyzer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonLexicalAnalyzer, t_PythonLexicalAnalyzer, PythonLexicalAnalyzer);

            void t_PythonLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonLexicalAnalyzer), &PY_TYPE_DEF(PythonLexicalAnalyzer), module, "PythonLexicalAnalyzer", 1);
            }

            void t_PythonLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "class_", make_descriptor(PythonLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "wrapfn_", make_descriptor(t_PythonLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonLexicalAnalyzer::initializeClass);
              JNINativeMethod methods[] = {
                { "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;", (void *) t_PythonLexicalAnalyzer_accept0 },
                { "pythonDecRef", "()V", (void *) t_PythonLexicalAnalyzer_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_PythonLexicalAnalyzer::wrap_Object(PythonLexicalAnalyzer(((t_PythonLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_PythonLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonLexicalAnalyzer_init_(t_PythonLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              PythonLexicalAnalyzer object((jobject) NULL);

              INT_CALL(object = PythonLexicalAnalyzer());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonLexicalAnalyzer_finalize(t_PythonLexicalAnalyzer *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonLexicalAnalyzer_pythonExtension(t_PythonLexicalAnalyzer *self, PyObject *args)
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

            static jobject JNICALL t_PythonLexicalAnalyzer_accept0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::wrap_Object(::org::orekit::files::ccsds::utils::lexical::MessageParser(a0));
              PyObject *result = PyObject_CallMethod(obj, "accept", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("accept", result);
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

            static void JNICALL t_PythonLexicalAnalyzer_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonLexicalAnalyzer_get__self(t_PythonLexicalAnalyzer *self, void *data)
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
#include "org/orekit/forces/maneuvers/trigger/PythonFieldManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonFieldManeuverTriggersResetter::class$ = NULL;
          jmethodID *PythonFieldManeuverTriggersResetter::mids$ = NULL;
          bool PythonFieldManeuverTriggersResetter::live$ = false;

          jclass PythonFieldManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonFieldManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_maneuverTriggered_33f1c56ea7775d4e] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_25e81e971666cba6] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonFieldManeuverTriggersResetter::PythonFieldManeuverTriggersResetter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonFieldManeuverTriggersResetter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonFieldManeuverTriggersResetter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonFieldManeuverTriggersResetter::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonFieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonFieldManeuverTriggersResetter_of_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args);
          static int t_PythonFieldManeuverTriggersResetter_init_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonFieldManeuverTriggersResetter_finalize(t_PythonFieldManeuverTriggersResetter *self);
          static PyObject *t_PythonFieldManeuverTriggersResetter_pythonExtension(t_PythonFieldManeuverTriggersResetter *self, PyObject *args);
          static void JNICALL t_PythonFieldManeuverTriggersResetter_maneuverTriggered0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
          static void JNICALL t_PythonFieldManeuverTriggersResetter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonFieldManeuverTriggersResetter_resetState2(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonFieldManeuverTriggersResetter_get__self(t_PythonFieldManeuverTriggersResetter *self, void *data);
          static PyObject *t_PythonFieldManeuverTriggersResetter_get__parameters_(t_PythonFieldManeuverTriggersResetter *self, void *data);
          static PyGetSetDef t_PythonFieldManeuverTriggersResetter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonFieldManeuverTriggersResetter, self),
            DECLARE_GET_FIELD(t_PythonFieldManeuverTriggersResetter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonFieldManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonFieldManeuverTriggersResetter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonFieldManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_PythonFieldManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) t_PythonFieldManeuverTriggersResetter_init_ },
            { Py_tp_getset, t_PythonFieldManeuverTriggersResetter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonFieldManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonFieldManeuverTriggersResetter, t_PythonFieldManeuverTriggersResetter, PythonFieldManeuverTriggersResetter);
          PyObject *t_PythonFieldManeuverTriggersResetter::wrap_Object(const PythonFieldManeuverTriggersResetter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldManeuverTriggersResetter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldManeuverTriggersResetter *self = (t_PythonFieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonFieldManeuverTriggersResetter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonFieldManeuverTriggersResetter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonFieldManeuverTriggersResetter *self = (t_PythonFieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonFieldManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonFieldManeuverTriggersResetter), &PY_TYPE_DEF(PythonFieldManeuverTriggersResetter), module, "PythonFieldManeuverTriggersResetter", 1);
          }

          void t_PythonFieldManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldManeuverTriggersResetter), "class_", make_descriptor(PythonFieldManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldManeuverTriggersResetter), "wrapfn_", make_descriptor(t_PythonFieldManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonFieldManeuverTriggersResetter::initializeClass);
            JNINativeMethod methods[] = {
              { "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V", (void *) t_PythonFieldManeuverTriggersResetter_maneuverTriggered0 },
              { "pythonDecRef", "()V", (void *) t_PythonFieldManeuverTriggersResetter_pythonDecRef1 },
              { "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldManeuverTriggersResetter_resetState2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonFieldManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_PythonFieldManeuverTriggersResetter::wrap_Object(PythonFieldManeuverTriggersResetter(((t_PythonFieldManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_PythonFieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonFieldManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_of_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonFieldManeuverTriggersResetter_init_(t_PythonFieldManeuverTriggersResetter *self, PyObject *args, PyObject *kwds)
          {
            PythonFieldManeuverTriggersResetter object((jobject) NULL);

            INT_CALL(object = PythonFieldManeuverTriggersResetter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_finalize(t_PythonFieldManeuverTriggersResetter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonFieldManeuverTriggersResetter_pythonExtension(t_PythonFieldManeuverTriggersResetter *self, PyObject *args)
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

          static void JNICALL t_PythonFieldManeuverTriggersResetter_maneuverTriggered0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = (a1 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "maneuverTriggered", "OO", o0, o1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonFieldManeuverTriggersResetter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonFieldManeuverTriggersResetter_resetState2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonFieldManeuverTriggersResetter::mids$[PythonFieldManeuverTriggersResetter::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
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

          static PyObject *t_PythonFieldManeuverTriggersResetter_get__self(t_PythonFieldManeuverTriggersResetter *self, void *data)
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
          static PyObject *t_PythonFieldManeuverTriggersResetter_get__parameters_(t_PythonFieldManeuverTriggersResetter *self, void *data)
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
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "org/orekit/models/earth/displacement/Tide.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoadingCoefficients::class$ = NULL;
          jmethodID *OceanLoadingCoefficients::mids$ = NULL;
          bool OceanLoadingCoefficients::live$ = false;

          jclass OceanLoadingCoefficients::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoadingCoefficients");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f6a8bbdebdde827c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;[[Lorg/orekit/models/earth/displacement/Tide;[[D[[D[[D[[D[[D[[D)V");
              mids$[mid_getNbSpecies_570ce0828f81a2c1] = env->getMethodID(cls, "getNbSpecies", "()I");
              mids$[mid_getNbTides_2235cd056f5a882b] = env->getMethodID(cls, "getNbTides", "(I)I");
              mids$[mid_getSiteLocation_82d0a9bcd06489bb] = env->getMethodID(cls, "getSiteLocation", "()Lorg/orekit/bodies/GeodeticPoint;");
              mids$[mid_getSiteName_11b109bd155ca898] = env->getMethodID(cls, "getSiteName", "()Ljava/lang/String;");
              mids$[mid_getSouthAmplitude_dbbe5f05149dbf73] = env->getMethodID(cls, "getSouthAmplitude", "(II)D");
              mids$[mid_getSouthPhase_dbbe5f05149dbf73] = env->getMethodID(cls, "getSouthPhase", "(II)D");
              mids$[mid_getTide_819ad1f415723af9] = env->getMethodID(cls, "getTide", "(II)Lorg/orekit/models/earth/displacement/Tide;");
              mids$[mid_getWestAmplitude_dbbe5f05149dbf73] = env->getMethodID(cls, "getWestAmplitude", "(II)D");
              mids$[mid_getWestPhase_dbbe5f05149dbf73] = env->getMethodID(cls, "getWestPhase", "(II)D");
              mids$[mid_getZenithAmplitude_dbbe5f05149dbf73] = env->getMethodID(cls, "getZenithAmplitude", "(II)D");
              mids$[mid_getZenithPhase_dbbe5f05149dbf73] = env->getMethodID(cls, "getZenithPhase", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoadingCoefficients::OceanLoadingCoefficients(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< JArray< ::org::orekit::models::earth::displacement::Tide > > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, const JArray< JArray< jdouble > > & a5, const JArray< JArray< jdouble > > & a6, const JArray< JArray< jdouble > > & a7, const JArray< JArray< jdouble > > & a8) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f6a8bbdebdde827c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

          jint OceanLoadingCoefficients::getNbSpecies() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbSpecies_570ce0828f81a2c1]);
          }

          jint OceanLoadingCoefficients::getNbTides(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getNbTides_2235cd056f5a882b], a0);
          }

          ::org::orekit::bodies::GeodeticPoint OceanLoadingCoefficients::getSiteLocation() const
          {
            return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getSiteLocation_82d0a9bcd06489bb]));
          }

          ::java::lang::String OceanLoadingCoefficients::getSiteName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteName_11b109bd155ca898]));
          }

          jdouble OceanLoadingCoefficients::getSouthAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSouthAmplitude_dbbe5f05149dbf73], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getSouthPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSouthPhase_dbbe5f05149dbf73], a0, a1);
          }

          ::org::orekit::models::earth::displacement::Tide OceanLoadingCoefficients::getTide(jint a0, jint a1) const
          {
            return ::org::orekit::models::earth::displacement::Tide(env->callObjectMethod(this$, mids$[mid_getTide_819ad1f415723af9], a0, a1));
          }

          jdouble OceanLoadingCoefficients::getWestAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWestAmplitude_dbbe5f05149dbf73], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getWestPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWestPhase_dbbe5f05149dbf73], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getZenithAmplitude(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZenithAmplitude_dbbe5f05149dbf73], a0, a1);
          }

          jdouble OceanLoadingCoefficients::getZenithPhase(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZenithPhase_dbbe5f05149dbf73], a0, a1);
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
    namespace models {
      namespace earth {
        namespace displacement {
          static PyObject *t_OceanLoadingCoefficients_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficients_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoadingCoefficients_init_(t_OceanLoadingCoefficients *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoadingCoefficients_getNbSpecies(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getNbTides(t_OceanLoadingCoefficients *self, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficients_getSiteLocation(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getSiteName(t_OceanLoadingCoefficients *self);
          static PyObject *t_OceanLoadingCoefficients_getSouthAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getSouthPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getTide(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getWestAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getWestPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getZenithAmplitude(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_getZenithPhase(t_OceanLoadingCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadingCoefficients_get__nbSpecies(t_OceanLoadingCoefficients *self, void *data);
          static PyObject *t_OceanLoadingCoefficients_get__siteLocation(t_OceanLoadingCoefficients *self, void *data);
          static PyObject *t_OceanLoadingCoefficients_get__siteName(t_OceanLoadingCoefficients *self, void *data);
          static PyGetSetDef t_OceanLoadingCoefficients__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, nbSpecies),
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, siteLocation),
            DECLARE_GET_FIELD(t_OceanLoadingCoefficients, siteName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadingCoefficients__methods_[] = {
            DECLARE_METHOD(t_OceanLoadingCoefficients, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getNbSpecies, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getNbTides, METH_O),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSiteLocation, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSiteName, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSouthAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getSouthPhase, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getTide, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getWestAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getWestPhase, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getZenithAmplitude, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadingCoefficients, getZenithPhase, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadingCoefficients)[] = {
            { Py_tp_methods, t_OceanLoadingCoefficients__methods_ },
            { Py_tp_init, (void *) t_OceanLoadingCoefficients_init_ },
            { Py_tp_getset, t_OceanLoadingCoefficients__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadingCoefficients)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanLoadingCoefficients, t_OceanLoadingCoefficients, OceanLoadingCoefficients);

          void t_OceanLoadingCoefficients::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadingCoefficients), &PY_TYPE_DEF(OceanLoadingCoefficients), module, "OceanLoadingCoefficients", 0);
          }

          void t_OceanLoadingCoefficients::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "class_", make_descriptor(OceanLoadingCoefficients::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "wrapfn_", make_descriptor(t_OceanLoadingCoefficients::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficients), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanLoadingCoefficients_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadingCoefficients::initializeClass, 1)))
              return NULL;
            return t_OceanLoadingCoefficients::wrap_Object(OceanLoadingCoefficients(((t_OceanLoadingCoefficients *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadingCoefficients_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadingCoefficients::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoadingCoefficients_init_(t_OceanLoadingCoefficients *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            JArray< JArray< ::org::orekit::models::earth::displacement::Tide > > a2((jobject) NULL);
            JArray< JArray< jdouble > > a3((jobject) NULL);
            JArray< JArray< jdouble > > a4((jobject) NULL);
            JArray< JArray< jdouble > > a5((jobject) NULL);
            JArray< JArray< jdouble > > a6((jobject) NULL);
            JArray< JArray< jdouble > > a7((jobject) NULL);
            JArray< JArray< jdouble > > a8((jobject) NULL);
            OceanLoadingCoefficients object((jobject) NULL);

            if (!parseArgs(args, "sk[[k[[D[[D[[D[[D[[D[[D", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::models::earth::displacement::Tide::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = OceanLoadingCoefficients(a0, a1, a2, a3, a4, a5, a6, a7, a8));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanLoadingCoefficients_getNbSpecies(t_OceanLoadingCoefficients *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbSpecies());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanLoadingCoefficients_getNbTides(t_OceanLoadingCoefficients *self, PyObject *arg)
          {
            jint a0;
            jint result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getNbTides(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNbTides", arg);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getSiteLocation(t_OceanLoadingCoefficients *self)
          {
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.getSiteLocation());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          static PyObject *t_OceanLoadingCoefficients_getSiteName(t_OceanLoadingCoefficients *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSiteName());
            return j2p(result);
          }

          static PyObject *t_OceanLoadingCoefficients_getSouthAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSouthAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSouthAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getSouthPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSouthPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getSouthPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getTide(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::models::earth::displacement::Tide result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTide(a0, a1));
              return ::org::orekit::models::earth::displacement::t_Tide::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getTide", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getWestAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getWestAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWestAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getWestPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getWestPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWestPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getZenithAmplitude(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getZenithAmplitude(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getZenithAmplitude", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_getZenithPhase(t_OceanLoadingCoefficients *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getZenithPhase(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getZenithPhase", args);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficients_get__nbSpecies(t_OceanLoadingCoefficients *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbSpecies());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_OceanLoadingCoefficients_get__siteLocation(t_OceanLoadingCoefficients *self, void *data)
          {
            ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
            OBJ_CALL(value = self->object.getSiteLocation());
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
          }

          static PyObject *t_OceanLoadingCoefficients_get__siteName(t_OceanLoadingCoefficients *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSiteName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *ForceModel::class$ = NULL;
      jmethodID *ForceModel::mids$ = NULL;
      bool ForceModel::live$ = false;

      jclass ForceModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/ForceModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_addContribution_5852b6ea0a71dcb4] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
          mids$[mid_addContribution_9d1574df69c5f1ff] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
          mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
          mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
          mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
          mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D ForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
      }

      void ForceModel::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addContribution_5852b6ea0a71dcb4], a0.this$, a1.this$);
      }

      void ForceModel::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addContribution_9d1574df69c5f1ff], a0.this$, a1.this$);
      }

      jboolean ForceModel::dependsOnPositionOnly() const
      {
        return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
      }

      ::java::util::stream::Stream ForceModel::getEventDetectors() const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
      }

      ::java::util::stream::Stream ForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
      }

      void ForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
      }

      void ForceModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
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
      static PyObject *t_ForceModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForceModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForceModel_acceleration(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_addContribution(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_dependsOnPositionOnly(t_ForceModel *self);
      static PyObject *t_ForceModel_getEventDetectors(t_ForceModel *self);
      static PyObject *t_ForceModel_getFieldEventDetectors(t_ForceModel *self, PyObject *arg);
      static PyObject *t_ForceModel_init(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_get__eventDetectors(t_ForceModel *self, void *data);
      static PyGetSetDef t_ForceModel__fields_[] = {
        DECLARE_GET_FIELD(t_ForceModel, eventDetectors),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ForceModel__methods_[] = {
        DECLARE_METHOD(t_ForceModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForceModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForceModel, acceleration, METH_VARARGS),
        DECLARE_METHOD(t_ForceModel, addContribution, METH_VARARGS),
        DECLARE_METHOD(t_ForceModel, dependsOnPositionOnly, METH_NOARGS),
        DECLARE_METHOD(t_ForceModel, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_ForceModel, getFieldEventDetectors, METH_O),
        DECLARE_METHOD(t_ForceModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ForceModel)[] = {
        { Py_tp_methods, t_ForceModel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ForceModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ForceModel)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
        NULL
      };

      DEFINE_TYPE(ForceModel, t_ForceModel, ForceModel);

      void t_ForceModel::install(PyObject *module)
      {
        installType(&PY_TYPE(ForceModel), &PY_TYPE_DEF(ForceModel), module, "ForceModel", 0);
      }

      void t_ForceModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "class_", make_descriptor(ForceModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "wrapfn_", make_descriptor(t_ForceModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ForceModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ForceModel::initializeClass, 1)))
          return NULL;
        return t_ForceModel::wrap_Object(ForceModel(((t_ForceModel *) arg)->object.this$));
      }
      static PyObject *t_ForceModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ForceModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ForceModel_acceleration(t_ForceModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.acceleration(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.acceleration(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "acceleration", args);
        return NULL;
      }

      static PyObject *t_ForceModel_addContribution(t_ForceModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
            {
              OBJ_CALL(self->object.addContribution(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addContribution(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "addContribution", args);
        return NULL;
      }

      static PyObject *t_ForceModel_dependsOnPositionOnly(t_ForceModel *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.dependsOnPositionOnly());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ForceModel_getEventDetectors(t_ForceModel *self)
      {
        ::java::util::stream::Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
      }

      static PyObject *t_ForceModel_getFieldEventDetectors(t_ForceModel *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
        return NULL;
      }

      static PyObject *t_ForceModel_init(t_ForceModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ForceModel_get__eventDetectors(t_ForceModel *self, void *data)
      {
        ::java::util::stream::Stream value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::stream::t_Stream::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPFWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFWriter::class$ = NULL;
        jmethodID *CPFWriter::mids$ = NULL;
        bool CPFWriter::live$ = false;

        jclass CPFWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_441284539c794317] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPFHeader;Lorg/orekit/time/TimeScale;)V");
            mids$[mid_init$_b8f58eb96ff59f90] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPFHeader;Lorg/orekit/time/TimeScale;Z)V");
            mids$[mid_write_2fe5901b7cb5a492] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFWriter::CPFWriter(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_441284539c794317, a0.this$, a1.this$)) {}

        CPFWriter::CPFWriter(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::org::orekit::time::TimeScale & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b8f58eb96ff59f90, a0.this$, a1.this$, a2)) {}

        void CPFWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_2fe5901b7cb5a492], a0.this$, a1.this$);
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
      namespace ilrs {
        static PyObject *t_CPFWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFWriter_init_(t_CPFWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFWriter_write(t_CPFWriter *self, PyObject *args);

        static PyMethodDef t_CPFWriter__methods_[] = {
          DECLARE_METHOD(t_CPFWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFWriter)[] = {
          { Py_tp_methods, t_CPFWriter__methods_ },
          { Py_tp_init, (void *) t_CPFWriter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPFWriter, t_CPFWriter, CPFWriter);

        void t_CPFWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFWriter), &PY_TYPE_DEF(CPFWriter), module, "CPFWriter", 0);
        }

        void t_CPFWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "class_", make_descriptor(CPFWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "wrapfn_", make_descriptor(t_CPFWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFWriter::initializeClass, 1)))
            return NULL;
          return t_CPFWriter::wrap_Object(CPFWriter(((t_CPFWriter *) arg)->object.this$));
        }
        static PyObject *t_CPFWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFWriter_init_(t_CPFWriter *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              CPFWriter object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CPFWriter(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              jboolean a2;
              CPFWriter object((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CPFWriter(a0, a1, a2));
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

        static PyObject *t_CPFWriter_write(t_CPFWriter *self, PyObject *args)
        {
          ::java::lang::Appendable a0((jobject) NULL);
          ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
          {
            OBJ_CALL(self->object.write(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/SparseGradient.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/SparseGradient.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *SparseGradient::class$ = NULL;
        jmethodID *SparseGradient::mids$ = NULL;
        bool SparseGradient::live$ = false;

        jclass SparseGradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/SparseGradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_2934351c6e7dae3f] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_acos_2934351c6e7dae3f] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_acosh_2934351c6e7dae3f] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_add_9f534c309edf98dc] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_add_414481af548a05c6] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_addInPlace_fea3f28dd010c551] = env->getMethodID(cls, "addInPlace", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)V");
            mids$[mid_asin_2934351c6e7dae3f] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_asinh_2934351c6e7dae3f] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan_2934351c6e7dae3f] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan2_9f534c309edf98dc] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atan2_9c836264a82f0c84] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_atanh_2934351c6e7dae3f] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cbrt_2934351c6e7dae3f] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_ceil_2934351c6e7dae3f] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_compose_756b544848fd6877] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_copySign_9f534c309edf98dc] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_copySign_414481af548a05c6] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cos_2934351c6e7dae3f] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_cosh_2934351c6e7dae3f] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_createConstant_414481af548a05c6] = env->getStaticMethodID(cls, "createConstant", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_createVariable_4af239edc1612dca] = env->getStaticMethodID(cls, "createVariable", "(ID)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_divide_9f534c309edf98dc] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_divide_414481af548a05c6] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_2934351c6e7dae3f] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_expm1_2934351c6e7dae3f] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_floor_2934351c6e7dae3f] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_getDerivative_46f85b53d9aedd96] = env->getMethodID(cls, "getDerivative", "(I)D");
            mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getPi_2934351c6e7dae3f] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_9f534c309edf98dc] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_hypot_9c836264a82f0c84] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_e9caad9adab65e68] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_e28390e7a9d3d4ac] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/SparseGradient;[Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_fcf8e0fa3f8f7def] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_8e0c39de1bf1da7c] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_f22a74eeb5d61dba] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_f05ab3c63c686eb3] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_8035e59f48419ce1] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_linearCombination_e415ce7cfb3956af] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log_2934351c6e7dae3f] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log10_2934351c6e7dae3f] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_log1p_2934351c6e7dae3f] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_9f534c309edf98dc] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_414481af548a05c6] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiply_794fd59fc4f0fb37] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_multiplyInPlace_fea3f28dd010c551] = env->getMethodID(cls, "multiplyInPlace", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)V");
            mids$[mid_negate_2934351c6e7dae3f] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_newInstance_414481af548a05c6] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_numVars_570ce0828f81a2c1] = env->getMethodID(cls, "numVars", "()I");
            mids$[mid_pow_9f534c309edf98dc] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_414481af548a05c6] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_794fd59fc4f0fb37] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_pow_afd287fe62d634b4] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_reciprocal_2934351c6e7dae3f] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_remainder_9f534c309edf98dc] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_remainder_414481af548a05c6] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_rint_2934351c6e7dae3f] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_rootN_794fd59fc4f0fb37] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_scalb_794fd59fc4f0fb37] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sign_2934351c6e7dae3f] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sin_2934351c6e7dae3f] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_2934351c6e7dae3f] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_2934351c6e7dae3f] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_subtract_9f534c309edf98dc] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/SparseGradient;)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_subtract_414481af548a05c6] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_tan_2934351c6e7dae3f] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_tanh_2934351c6e7dae3f] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_taylor_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_2934351c6e7dae3f] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_toRadians_2934351c6e7dae3f] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");
            mids$[mid_ulp_2934351c6e7dae3f] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/SparseGradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SparseGradient SparseGradient::abs() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_abs_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::acos() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_acos_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::acosh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_acosh_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::add(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_add_9f534c309edf98dc], a0.this$));
        }

        SparseGradient SparseGradient::add(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_add_414481af548a05c6], a0));
        }

        void SparseGradient::addInPlace(const SparseGradient & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addInPlace_fea3f28dd010c551], a0.this$);
        }

        SparseGradient SparseGradient::asin() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_asin_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::asinh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_asinh_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::atan() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atan_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::atan2(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atan2_9f534c309edf98dc], a0.this$));
        }

        SparseGradient SparseGradient::atan2(const SparseGradient & a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_atan2_9c836264a82f0c84], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::atanh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_atanh_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::cbrt() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cbrt_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::ceil() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_ceil_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::compose(const JArray< jdouble > & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_compose_756b544848fd6877], a0.this$));
        }

        SparseGradient SparseGradient::copySign(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_copySign_9f534c309edf98dc], a0.this$));
        }

        SparseGradient SparseGradient::copySign(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_copySign_414481af548a05c6], a0));
        }

        SparseGradient SparseGradient::cos() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cos_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::cosh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_cosh_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::createConstant(jdouble a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_createConstant_414481af548a05c6], a0));
        }

        SparseGradient SparseGradient::createVariable(jint a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_createVariable_4af239edc1612dca], a0, a1));
        }

        SparseGradient SparseGradient::divide(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_divide_9f534c309edf98dc], a0.this$));
        }

        SparseGradient SparseGradient::divide(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_divide_414481af548a05c6], a0));
        }

        jboolean SparseGradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        SparseGradient SparseGradient::exp() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_exp_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::expm1() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_expm1_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::floor() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_floor_2934351c6e7dae3f]));
        }

        jdouble SparseGradient::getDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDerivative_46f85b53d9aedd96], a0);
        }

        ::org::hipparchus::Field SparseGradient::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
        }

        SparseGradient SparseGradient::getPi() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_getPi_2934351c6e7dae3f]));
        }

        jdouble SparseGradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
        }

        jdouble SparseGradient::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
        }

        jint SparseGradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        SparseGradient SparseGradient::hypot(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_hypot_9f534c309edf98dc], a0.this$));
        }

        SparseGradient SparseGradient::hypot(const SparseGradient & a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_hypot_9c836264a82f0c84], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const JArray< jdouble > & a0, const JArray< SparseGradient > & a1) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_e9caad9adab65e68], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const JArray< SparseGradient > & a0, const JArray< SparseGradient > & a1) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_e28390e7a9d3d4ac], a0.this$, a1.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_fcf8e0fa3f8f7def], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_8e0c39de1bf1da7c], a0, a1.this$, a2, a3.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3, const SparseGradient & a4, const SparseGradient & a5) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_f22a74eeb5d61dba], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3, jdouble a4, const SparseGradient & a5) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_f05ab3c63c686eb3], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        SparseGradient SparseGradient::linearCombination(const SparseGradient & a0, const SparseGradient & a1, const SparseGradient & a2, const SparseGradient & a3, const SparseGradient & a4, const SparseGradient & a5, const SparseGradient & a6, const SparseGradient & a7) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_8035e59f48419ce1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        SparseGradient SparseGradient::linearCombination(jdouble a0, const SparseGradient & a1, jdouble a2, const SparseGradient & a3, jdouble a4, const SparseGradient & a5, jdouble a6, const SparseGradient & a7) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_e415ce7cfb3956af], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        SparseGradient SparseGradient::log() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::log10() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log10_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::log1p() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_log1p_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::multiply(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_9f534c309edf98dc], a0.this$));
        }

        SparseGradient SparseGradient::multiply(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_414481af548a05c6], a0));
        }

        SparseGradient SparseGradient::multiply(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_multiply_794fd59fc4f0fb37], a0));
        }

        void SparseGradient::multiplyInPlace(const SparseGradient & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_multiplyInPlace_fea3f28dd010c551], a0.this$);
        }

        SparseGradient SparseGradient::negate() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_negate_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::newInstance(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_newInstance_414481af548a05c6], a0));
        }

        jint SparseGradient::numVars() const
        {
          return env->callIntMethod(this$, mids$[mid_numVars_570ce0828f81a2c1]);
        }

        SparseGradient SparseGradient::pow(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_9f534c309edf98dc], a0.this$));
        }

        SparseGradient SparseGradient::pow(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_414481af548a05c6], a0));
        }

        SparseGradient SparseGradient::pow(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_pow_794fd59fc4f0fb37], a0));
        }

        SparseGradient SparseGradient::pow(jdouble a0, const SparseGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return SparseGradient(env->callStaticObjectMethod(cls, mids$[mid_pow_afd287fe62d634b4], a0, a1.this$));
        }

        SparseGradient SparseGradient::reciprocal() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_reciprocal_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::remainder(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_remainder_9f534c309edf98dc], a0.this$));
        }

        SparseGradient SparseGradient::remainder(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_remainder_414481af548a05c6], a0));
        }

        SparseGradient SparseGradient::rint() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_rint_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::rootN(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_rootN_794fd59fc4f0fb37], a0));
        }

        SparseGradient SparseGradient::scalb(jint a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_scalb_794fd59fc4f0fb37], a0));
        }

        SparseGradient SparseGradient::sign() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sign_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::sin() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sin_2934351c6e7dae3f]));
        }

        ::org::hipparchus::util::FieldSinCos SparseGradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
        }

        SparseGradient SparseGradient::sinh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sinh_2934351c6e7dae3f]));
        }

        ::org::hipparchus::util::FieldSinhCosh SparseGradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
        }

        SparseGradient SparseGradient::sqrt() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_sqrt_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::subtract(const SparseGradient & a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_subtract_9f534c309edf98dc], a0.this$));
        }

        SparseGradient SparseGradient::subtract(jdouble a0) const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_subtract_414481af548a05c6], a0));
        }

        SparseGradient SparseGradient::tan() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_tan_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::tanh() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_tanh_2934351c6e7dae3f]));
        }

        jdouble SparseGradient::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_9dc1ec0bcc0a9a29], a0.this$);
        }

        SparseGradient SparseGradient::toDegrees() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_toDegrees_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::toRadians() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_toRadians_2934351c6e7dae3f]));
        }

        SparseGradient SparseGradient::ulp() const
        {
          return SparseGradient(env->callObjectMethod(this$, mids$[mid_ulp_2934351c6e7dae3f]));
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
        static PyObject *t_SparseGradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SparseGradient_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SparseGradient_abs(t_SparseGradient *self);
        static PyObject *t_SparseGradient_acos(t_SparseGradient *self);
        static PyObject *t_SparseGradient_acosh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_add(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_addInPlace(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_asin(t_SparseGradient *self);
        static PyObject *t_SparseGradient_asinh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_atan(t_SparseGradient *self);
        static PyObject *t_SparseGradient_atan2(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_atanh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_cbrt(t_SparseGradient *self);
        static PyObject *t_SparseGradient_ceil(t_SparseGradient *self);
        static PyObject *t_SparseGradient_compose(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_copySign(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_cos(t_SparseGradient *self);
        static PyObject *t_SparseGradient_cosh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_createConstant(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SparseGradient_createVariable(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_divide(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_equals(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_exp(t_SparseGradient *self);
        static PyObject *t_SparseGradient_expm1(t_SparseGradient *self);
        static PyObject *t_SparseGradient_floor(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getDerivative(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_getField(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getPi(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getReal(t_SparseGradient *self);
        static PyObject *t_SparseGradient_getValue(t_SparseGradient *self);
        static PyObject *t_SparseGradient_hashCode(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_hypot(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_linearCombination(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_log(t_SparseGradient *self);
        static PyObject *t_SparseGradient_log10(t_SparseGradient *self);
        static PyObject *t_SparseGradient_log1p(t_SparseGradient *self);
        static PyObject *t_SparseGradient_multiply(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_multiplyInPlace(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_negate(t_SparseGradient *self);
        static PyObject *t_SparseGradient_newInstance(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_numVars(t_SparseGradient *self);
        static PyObject *t_SparseGradient_pow(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_SparseGradient_reciprocal(t_SparseGradient *self);
        static PyObject *t_SparseGradient_remainder(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_rint(t_SparseGradient *self);
        static PyObject *t_SparseGradient_rootN(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_scalb(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_sign(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sin(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sinCos(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sinh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sinhCosh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_sqrt(t_SparseGradient *self);
        static PyObject *t_SparseGradient_subtract(t_SparseGradient *self, PyObject *args);
        static PyObject *t_SparseGradient_tan(t_SparseGradient *self);
        static PyObject *t_SparseGradient_tanh(t_SparseGradient *self);
        static PyObject *t_SparseGradient_taylor(t_SparseGradient *self, PyObject *arg);
        static PyObject *t_SparseGradient_toDegrees(t_SparseGradient *self);
        static PyObject *t_SparseGradient_toRadians(t_SparseGradient *self);
        static PyObject *t_SparseGradient_ulp(t_SparseGradient *self);
        static PyObject *t_SparseGradient_get__field(t_SparseGradient *self, void *data);
        static PyObject *t_SparseGradient_get__pi(t_SparseGradient *self, void *data);
        static PyObject *t_SparseGradient_get__real(t_SparseGradient *self, void *data);
        static PyObject *t_SparseGradient_get__value(t_SparseGradient *self, void *data);
        static PyGetSetDef t_SparseGradient__fields_[] = {
          DECLARE_GET_FIELD(t_SparseGradient, field),
          DECLARE_GET_FIELD(t_SparseGradient, pi),
          DECLARE_GET_FIELD(t_SparseGradient, real),
          DECLARE_GET_FIELD(t_SparseGradient, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SparseGradient__methods_[] = {
          DECLARE_METHOD(t_SparseGradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, add, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, addInPlace, METH_O),
          DECLARE_METHOD(t_SparseGradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, atan2, METH_O),
          DECLARE_METHOD(t_SparseGradient, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, compose, METH_O),
          DECLARE_METHOD(t_SparseGradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, createConstant, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, createVariable, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getDerivative, METH_O),
          DECLARE_METHOD(t_SparseGradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, hypot, METH_O),
          DECLARE_METHOD(t_SparseGradient, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, log, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, multiplyInPlace, METH_O),
          DECLARE_METHOD(t_SparseGradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, newInstance, METH_O),
          DECLARE_METHOD(t_SparseGradient, numVars, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SparseGradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, rootN, METH_O),
          DECLARE_METHOD(t_SparseGradient, scalb, METH_O),
          DECLARE_METHOD(t_SparseGradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_SparseGradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, taylor, METH_O),
          DECLARE_METHOD(t_SparseGradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_SparseGradient, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SparseGradient)[] = {
          { Py_tp_methods, t_SparseGradient__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SparseGradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SparseGradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SparseGradient, t_SparseGradient, SparseGradient);

        void t_SparseGradient::install(PyObject *module)
        {
          installType(&PY_TYPE(SparseGradient), &PY_TYPE_DEF(SparseGradient), module, "SparseGradient", 0);
        }

        void t_SparseGradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SparseGradient), "class_", make_descriptor(SparseGradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SparseGradient), "wrapfn_", make_descriptor(t_SparseGradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SparseGradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SparseGradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SparseGradient::initializeClass, 1)))
            return NULL;
          return t_SparseGradient::wrap_Object(SparseGradient(((t_SparseGradient *) arg)->object.this$));
        }
        static PyObject *t_SparseGradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SparseGradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SparseGradient_abs(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_acos(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_acosh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_add(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_addInPlace(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addInPlace(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addInPlace", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_asin(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_asinh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_atan(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_atan2(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_atan2_(PyTypeObject *type, PyObject *args)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient a1((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "kk", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::atan2(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_atanh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_cbrt(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_ceil(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_compose(t_SparseGradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_copySign(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_cos(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_cosh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_createConstant(PyTypeObject *type, PyObject *arg)
        {
          jdouble a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::createConstant(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createConstant", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_createVariable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::createVariable(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createVariable", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_divide(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_equals(t_SparseGradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(SparseGradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_SparseGradient_exp(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_expm1(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_floor(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_getDerivative(t_SparseGradient *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivative", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_getField(t_SparseGradient *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(SparseGradient));
        }

        static PyObject *t_SparseGradient_getPi(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_getReal(t_SparseGradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SparseGradient_getValue(t_SparseGradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SparseGradient_hashCode(t_SparseGradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(SparseGradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_SparseGradient_hypot(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_hypot_(PyTypeObject *type, PyObject *args)
        {
          SparseGradient a0((jobject) NULL);
          SparseGradient a1((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "kk", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::hypot(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_linearCombination(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< SparseGradient > a1((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "[D[k", SparseGradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              JArray< SparseGradient > a0((jobject) NULL);
              JArray< SparseGradient > a1((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "[k[k", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient a1((jobject) NULL);
              SparseGradient a2((jobject) NULL);
              SparseGradient a3((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "kkkk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient a1((jobject) NULL);
              jdouble a2;
              SparseGradient a3((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "DkDk", SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient a1((jobject) NULL);
              SparseGradient a2((jobject) NULL);
              SparseGradient a3((jobject) NULL);
              SparseGradient a4((jobject) NULL);
              SparseGradient a5((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient a1((jobject) NULL);
              jdouble a2;
              SparseGradient a3((jobject) NULL);
              jdouble a4;
              SparseGradient a5((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient a1((jobject) NULL);
              SparseGradient a2((jobject) NULL);
              SparseGradient a3((jobject) NULL);
              SparseGradient a4((jobject) NULL);
              SparseGradient a5((jobject) NULL);
              SparseGradient a6((jobject) NULL);
              SparseGradient a7((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient a1((jobject) NULL);
              jdouble a2;
              SparseGradient a3((jobject) NULL);
              jdouble a4;
              SparseGradient a5((jobject) NULL);
              jdouble a6;
              SparseGradient a7((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, SparseGradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_log(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_log10(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_log1p(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_multiply(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_multiplyInPlace(t_SparseGradient *self, PyObject *arg)
        {
          SparseGradient a0((jobject) NULL);

          if (!parseArg(arg, "k", SparseGradient::initializeClass, &a0))
          {
            OBJ_CALL(self->object.multiplyInPlace(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "multiplyInPlace", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_negate(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_newInstance(t_SparseGradient *self, PyObject *arg)
        {
          jdouble a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_numVars(t_SparseGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.numVars());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SparseGradient_pow(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          SparseGradient a1((jobject) NULL);
          SparseGradient result((jobject) NULL);

          if (!parseArgs(args, "Dk", SparseGradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::SparseGradient::pow(a0, a1));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_reciprocal(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_remainder(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_rint(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_rootN(t_SparseGradient *self, PyObject *arg)
        {
          jint a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_scalb(t_SparseGradient *self, PyObject *arg)
        {
          jint a0;
          SparseGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_SparseGradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_SparseGradient_sign(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_sin(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_sinCos(t_SparseGradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(SparseGradient));
        }

        static PyObject *t_SparseGradient_sinh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_sinhCosh(t_SparseGradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(SparseGradient));
        }

        static PyObject *t_SparseGradient_sqrt(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_subtract(t_SparseGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              SparseGradient a0((jobject) NULL);
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "k", SparseGradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              SparseGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_SparseGradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_SparseGradient_tan(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_tanh(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_taylor(t_SparseGradient *self, PyObject *arg)
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

        static PyObject *t_SparseGradient_toDegrees(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_toRadians(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_ulp(t_SparseGradient *self)
        {
          SparseGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_SparseGradient::wrap_Object(result);
        }

        static PyObject *t_SparseGradient_get__field(t_SparseGradient *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_SparseGradient_get__pi(t_SparseGradient *self, void *data)
        {
          SparseGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_SparseGradient::wrap_Object(value);
        }

        static PyObject *t_SparseGradient_get__real(t_SparseGradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SparseGradient_get__value(t_SparseGradient *self, void *data)
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
#include "org/hipparchus/analysis/function/Asin.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Asin::class$ = NULL;
        jmethodID *Asin::mids$ = NULL;
        bool Asin::live$ = false;

        jclass Asin::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Asin");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Asin::Asin() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Asin::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Asin::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Asin_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Asin_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Asin_init_(t_Asin *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Asin_value(t_Asin *self, PyObject *args);

        static PyMethodDef t_Asin__methods_[] = {
          DECLARE_METHOD(t_Asin, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asin, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Asin, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Asin)[] = {
          { Py_tp_methods, t_Asin__methods_ },
          { Py_tp_init, (void *) t_Asin_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Asin)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Asin, t_Asin, Asin);

        void t_Asin::install(PyObject *module)
        {
          installType(&PY_TYPE(Asin), &PY_TYPE_DEF(Asin), module, "Asin", 0);
        }

        void t_Asin::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "class_", make_descriptor(Asin::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "wrapfn_", make_descriptor(t_Asin::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Asin), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Asin_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Asin::initializeClass, 1)))
            return NULL;
          return t_Asin::wrap_Object(Asin(((t_Asin *) arg)->object.this$));
        }
        static PyObject *t_Asin_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Asin::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Asin_init_(t_Asin *self, PyObject *args, PyObject *kwds)
        {
          Asin object((jobject) NULL);

          INT_CALL(object = Asin());
          self->object = object;

          return 0;
        }

        static PyObject *t_Asin_value(t_Asin *self, PyObject *args)
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
#include "org/hipparchus/distribution/continuous/NakagamiDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *NakagamiDistribution::class$ = NULL;
        jmethodID *NakagamiDistribution::mids$ = NULL;
        bool NakagamiDistribution::live$ = false;

        jclass NakagamiDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/NakagamiDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_dff5885c2c873297] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_dff5885c2c873297] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NakagamiDistribution::NakagamiDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        NakagamiDistribution::NakagamiDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        jdouble NakagamiDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble NakagamiDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble NakagamiDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble NakagamiDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble NakagamiDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_dff5885c2c873297]);
        }

        jdouble NakagamiDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_dff5885c2c873297]);
        }

        jdouble NakagamiDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble NakagamiDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jboolean NakagamiDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_NakagamiDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NakagamiDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NakagamiDistribution_init_(t_NakagamiDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NakagamiDistribution_cumulativeProbability(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_density(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getNumericalMean(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getNumericalVariance(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getScale(t_NakagamiDistribution *self);
        static PyObject *t_NakagamiDistribution_getShape(t_NakagamiDistribution *self);
        static PyObject *t_NakagamiDistribution_getSupportLowerBound(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getSupportUpperBound(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_isSupportConnected(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_get__numericalMean(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__numericalVariance(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__scale(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__shape(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportConnected(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportLowerBound(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportUpperBound(t_NakagamiDistribution *self, void *data);
        static PyGetSetDef t_NakagamiDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_NakagamiDistribution, numericalMean),
          DECLARE_GET_FIELD(t_NakagamiDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_NakagamiDistribution, scale),
          DECLARE_GET_FIELD(t_NakagamiDistribution, shape),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportConnected),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NakagamiDistribution__methods_[] = {
          DECLARE_METHOD(t_NakagamiDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NakagamiDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NakagamiDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NakagamiDistribution)[] = {
          { Py_tp_methods, t_NakagamiDistribution__methods_ },
          { Py_tp_init, (void *) t_NakagamiDistribution_init_ },
          { Py_tp_getset, t_NakagamiDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NakagamiDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(NakagamiDistribution, t_NakagamiDistribution, NakagamiDistribution);

        void t_NakagamiDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(NakagamiDistribution), &PY_TYPE_DEF(NakagamiDistribution), module, "NakagamiDistribution", 0);
        }

        void t_NakagamiDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "class_", make_descriptor(NakagamiDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "wrapfn_", make_descriptor(t_NakagamiDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NakagamiDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NakagamiDistribution::initializeClass, 1)))
            return NULL;
          return t_NakagamiDistribution::wrap_Object(NakagamiDistribution(((t_NakagamiDistribution *) arg)->object.this$));
        }
        static PyObject *t_NakagamiDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NakagamiDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NakagamiDistribution_init_(t_NakagamiDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              NakagamiDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = NakagamiDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              NakagamiDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = NakagamiDistribution(a0, a1, a2));
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

        static PyObject *t_NakagamiDistribution_cumulativeProbability(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_NakagamiDistribution_density(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getNumericalMean(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getNumericalVariance(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getScale(t_NakagamiDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NakagamiDistribution_getShape(t_NakagamiDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NakagamiDistribution_getSupportLowerBound(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getSupportUpperBound(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_NakagamiDistribution_isSupportConnected(t_NakagamiDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_NakagamiDistribution_get__numericalMean(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__numericalVariance(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__scale(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__shape(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__supportConnected(t_NakagamiDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_NakagamiDistribution_get__supportLowerBound(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__supportUpperBound(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Expm1.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Expm1::class$ = NULL;
        jmethodID *Expm1::mids$ = NULL;
        bool Expm1::live$ = false;

        jclass Expm1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Expm1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Expm1::Expm1() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Expm1::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Expm1::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Expm1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Expm1_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Expm1_init_(t_Expm1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Expm1_value(t_Expm1 *self, PyObject *args);

        static PyMethodDef t_Expm1__methods_[] = {
          DECLARE_METHOD(t_Expm1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Expm1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Expm1, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Expm1)[] = {
          { Py_tp_methods, t_Expm1__methods_ },
          { Py_tp_init, (void *) t_Expm1_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Expm1)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Expm1, t_Expm1, Expm1);

        void t_Expm1::install(PyObject *module)
        {
          installType(&PY_TYPE(Expm1), &PY_TYPE_DEF(Expm1), module, "Expm1", 0);
        }

        void t_Expm1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "class_", make_descriptor(Expm1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "wrapfn_", make_descriptor(t_Expm1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Expm1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Expm1::initializeClass, 1)))
            return NULL;
          return t_Expm1::wrap_Object(Expm1(((t_Expm1 *) arg)->object.this$));
        }
        static PyObject *t_Expm1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Expm1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Expm1_init_(t_Expm1 *self, PyObject *args, PyObject *kwds)
        {
          Expm1 object((jobject) NULL);

          INT_CALL(object = Expm1());
          self->object = object;

          return 0;
        }

        static PyObject *t_Expm1_value(t_Expm1 *self, PyObject *args)
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
#include "org/orekit/propagation/events/FunctionalDetector.h"
#include "org/orekit/propagation/events/FunctionalDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FunctionalDetector::class$ = NULL;
        jmethodID *FunctionalDetector::mids$ = NULL;
        bool FunctionalDetector::live$ = false;

        jclass FunctionalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FunctionalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_ecdcedadcf996c2b] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FunctionalDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FunctionalDetector::FunctionalDetector() : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble FunctionalDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
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
        static PyObject *t_FunctionalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FunctionalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FunctionalDetector_of_(t_FunctionalDetector *self, PyObject *args);
        static int t_FunctionalDetector_init_(t_FunctionalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FunctionalDetector_g(t_FunctionalDetector *self, PyObject *args);
        static PyObject *t_FunctionalDetector_get__parameters_(t_FunctionalDetector *self, void *data);
        static PyGetSetDef t_FunctionalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FunctionalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FunctionalDetector__methods_[] = {
          DECLARE_METHOD(t_FunctionalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FunctionalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FunctionalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FunctionalDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FunctionalDetector)[] = {
          { Py_tp_methods, t_FunctionalDetector__methods_ },
          { Py_tp_init, (void *) t_FunctionalDetector_init_ },
          { Py_tp_getset, t_FunctionalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FunctionalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FunctionalDetector, t_FunctionalDetector, FunctionalDetector);
        PyObject *t_FunctionalDetector::wrap_Object(const FunctionalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FunctionalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FunctionalDetector *self = (t_FunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FunctionalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FunctionalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FunctionalDetector *self = (t_FunctionalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FunctionalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FunctionalDetector), &PY_TYPE_DEF(FunctionalDetector), module, "FunctionalDetector", 0);
        }

        void t_FunctionalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "class_", make_descriptor(FunctionalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "wrapfn_", make_descriptor(t_FunctionalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FunctionalDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FunctionalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FunctionalDetector::initializeClass, 1)))
            return NULL;
          return t_FunctionalDetector::wrap_Object(FunctionalDetector(((t_FunctionalDetector *) arg)->object.this$));
        }
        static PyObject *t_FunctionalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FunctionalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FunctionalDetector_of_(t_FunctionalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FunctionalDetector_init_(t_FunctionalDetector *self, PyObject *args, PyObject *kwds)
        {
          FunctionalDetector object((jobject) NULL);

          INT_CALL(object = FunctionalDetector());
          self->object = object;
          self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FunctionalDetector);

          return 0;
        }

        static PyObject *t_FunctionalDetector_g(t_FunctionalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FunctionalDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_FunctionalDetector_get__parameters_(t_FunctionalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/IsotropicRadiationCNES95Convention.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationCNES95Convention::class$ = NULL;
        jmethodID *IsotropicRadiationCNES95Convention::mids$ = NULL;
        bool IsotropicRadiationCNES95Convention::live$ = false;

        jclass IsotropicRadiationCNES95Convention::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationCNES95Convention");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getRadiationParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_c01594a6748cab78] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_radiationPressureAcceleration_70d4c57af2df1a86] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationCNES95Convention::IsotropicRadiationCNES95Convention(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        ::java::util::List IsotropicRadiationCNES95Convention::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_2afa36052df4765d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationCNES95Convention::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_c01594a6748cab78], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationCNES95Convention::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_70d4c57af2df1a86], a0.this$, a1.this$, a2.this$));
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
      namespace radiation {
        static PyObject *t_IsotropicRadiationCNES95Convention_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationCNES95Convention_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationCNES95Convention_init_(t_IsotropicRadiationCNES95Convention *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationCNES95Convention_getRadiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self);
        static PyObject *t_IsotropicRadiationCNES95Convention_radiationPressureAcceleration(t_IsotropicRadiationCNES95Convention *self, PyObject *args);
        static PyObject *t_IsotropicRadiationCNES95Convention_get__radiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self, void *data);
        static PyGetSetDef t_IsotropicRadiationCNES95Convention__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationCNES95Convention, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationCNES95Convention__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationCNES95Convention)[] = {
          { Py_tp_methods, t_IsotropicRadiationCNES95Convention__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationCNES95Convention_init_ },
          { Py_tp_getset, t_IsotropicRadiationCNES95Convention__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationCNES95Convention)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationCNES95Convention, t_IsotropicRadiationCNES95Convention, IsotropicRadiationCNES95Convention);

        void t_IsotropicRadiationCNES95Convention::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationCNES95Convention), &PY_TYPE_DEF(IsotropicRadiationCNES95Convention), module, "IsotropicRadiationCNES95Convention", 0);
        }

        void t_IsotropicRadiationCNES95Convention::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "class_", make_descriptor(IsotropicRadiationCNES95Convention::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "wrapfn_", make_descriptor(t_IsotropicRadiationCNES95Convention::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationCNES95Convention::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationCNES95Convention::wrap_Object(IsotropicRadiationCNES95Convention(((t_IsotropicRadiationCNES95Convention *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationCNES95Convention_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationCNES95Convention::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationCNES95Convention_init_(t_IsotropicRadiationCNES95Convention *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          IsotropicRadiationCNES95Convention object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = IsotropicRadiationCNES95Convention(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_getRadiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_radiationPressureAcceleration(t_IsotropicRadiationCNES95Convention *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_get__radiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *MeasurementCombination::class$ = NULL;
          jmethodID *MeasurementCombination::mids$ = NULL;
          bool MeasurementCombination::live$ = false;

          jclass MeasurementCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/MeasurementCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_38fa214a925f8e7a] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet MeasurementCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_38fa214a925f8e7a], a0.this$));
          }

          ::java::lang::String MeasurementCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
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
          static PyObject *t_MeasurementCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombination_combine(t_MeasurementCombination *self, PyObject *arg);
          static PyObject *t_MeasurementCombination_getName(t_MeasurementCombination *self);
          static PyObject *t_MeasurementCombination_get__name(t_MeasurementCombination *self, void *data);
          static PyGetSetDef t_MeasurementCombination__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementCombination__methods_[] = {
            DECLARE_METHOD(t_MeasurementCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombination, combine, METH_O),
            DECLARE_METHOD(t_MeasurementCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementCombination)[] = {
            { Py_tp_methods, t_MeasurementCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementCombination, t_MeasurementCombination, MeasurementCombination);

          void t_MeasurementCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementCombination), &PY_TYPE_DEF(MeasurementCombination), module, "MeasurementCombination", 0);
          }

          void t_MeasurementCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "class_", make_descriptor(MeasurementCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "wrapfn_", make_descriptor(t_MeasurementCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementCombination::initializeClass, 1)))
              return NULL;
            return t_MeasurementCombination::wrap_Object(MeasurementCombination(((t_MeasurementCombination *) arg)->object.this$));
          }
          static PyObject *t_MeasurementCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementCombination_combine(t_MeasurementCombination *self, PyObject *arg)
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

          static PyObject *t_MeasurementCombination_getName(t_MeasurementCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MeasurementCombination_get__name(t_MeasurementCombination *self, void *data)
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
#include "org/orekit/rugged/adjustment/measurements/SensorToGroundMapping.h"
#include "java/util/Map$Entry.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorToGroundMapping::class$ = NULL;
          jmethodID *SensorToGroundMapping::mids$ = NULL;
          bool SensorToGroundMapping::live$ = false;

          jclass SensorToGroundMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorToGroundMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_6a2001eff0605f71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_addMapping_03574314a06b257a] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/bodies/GeodeticPoint;)V");
              mids$[mid_getMapping_015730311a5bacdc] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedName_11b109bd155ca898] = env->getMethodID(cls, "getRuggedName", "()Ljava/lang/String;");
              mids$[mid_getSensorName_11b109bd155ca898] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorToGroundMapping::SensorToGroundMapping(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

          SensorToGroundMapping::SensorToGroundMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a2001eff0605f71, a0.this$, a1.this$)) {}

          void SensorToGroundMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_03574314a06b257a], a0.this$, a1.this$);
          }

          ::java::util::Set SensorToGroundMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_015730311a5bacdc]));
          }

          ::java::lang::String SensorToGroundMapping::getRuggedName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedName_11b109bd155ca898]));
          }

          ::java::lang::String SensorToGroundMapping::getSensorName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_11b109bd155ca898]));
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
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorToGroundMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorToGroundMapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SensorToGroundMapping_init_(t_SensorToGroundMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorToGroundMapping_addMapping(t_SensorToGroundMapping *self, PyObject *args);
          static PyObject *t_SensorToGroundMapping_getMapping(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_getRuggedName(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_getSensorName(t_SensorToGroundMapping *self);
          static PyObject *t_SensorToGroundMapping_get__mapping(t_SensorToGroundMapping *self, void *data);
          static PyObject *t_SensorToGroundMapping_get__ruggedName(t_SensorToGroundMapping *self, void *data);
          static PyObject *t_SensorToGroundMapping_get__sensorName(t_SensorToGroundMapping *self, void *data);
          static PyGetSetDef t_SensorToGroundMapping__fields_[] = {
            DECLARE_GET_FIELD(t_SensorToGroundMapping, mapping),
            DECLARE_GET_FIELD(t_SensorToGroundMapping, ruggedName),
            DECLARE_GET_FIELD(t_SensorToGroundMapping, sensorName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorToGroundMapping__methods_[] = {
            DECLARE_METHOD(t_SensorToGroundMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToGroundMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToGroundMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getRuggedName, METH_NOARGS),
            DECLARE_METHOD(t_SensorToGroundMapping, getSensorName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorToGroundMapping)[] = {
            { Py_tp_methods, t_SensorToGroundMapping__methods_ },
            { Py_tp_init, (void *) t_SensorToGroundMapping_init_ },
            { Py_tp_getset, t_SensorToGroundMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorToGroundMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorToGroundMapping, t_SensorToGroundMapping, SensorToGroundMapping);

          void t_SensorToGroundMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorToGroundMapping), &PY_TYPE_DEF(SensorToGroundMapping), module, "SensorToGroundMapping", 0);
          }

          void t_SensorToGroundMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "class_", make_descriptor(SensorToGroundMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "wrapfn_", make_descriptor(t_SensorToGroundMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToGroundMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorToGroundMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorToGroundMapping::initializeClass, 1)))
              return NULL;
            return t_SensorToGroundMapping::wrap_Object(SensorToGroundMapping(((t_SensorToGroundMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorToGroundMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorToGroundMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SensorToGroundMapping_init_(t_SensorToGroundMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                SensorToGroundMapping object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = SensorToGroundMapping(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorToGroundMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorToGroundMapping(a0, a1));
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

          static PyObject *t_SensorToGroundMapping_addMapping(t_SensorToGroundMapping *self, PyObject *args)
          {
            ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addMapping(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorToGroundMapping_getMapping(t_SensorToGroundMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorToGroundMapping_getRuggedName(t_SensorToGroundMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedName());
            return j2p(result);
          }

          static PyObject *t_SensorToGroundMapping_getSensorName(t_SensorToGroundMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorName());
            return j2p(result);
          }

          static PyObject *t_SensorToGroundMapping_get__mapping(t_SensorToGroundMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorToGroundMapping_get__ruggedName(t_SensorToGroundMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedName());
            return j2p(value);
          }

          static PyObject *t_SensorToGroundMapping_get__sensorName(t_SensorToGroundMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalGradientConverter::class$ = NULL;
        jmethodID *AbstractAnalyticalGradientConverter::mids$ = NULL;
        bool AbstractAnalyticalGradientConverter::live$ = false;

        jclass AbstractAnalyticalGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getPropagator_bfdeffa87b393212] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;");
            mids$[mid_getState_02cea343d9f71933] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator AbstractAnalyticalGradientConverter::getPropagator(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a1) const
        {
          return ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_bfdeffa87b393212], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState AbstractAnalyticalGradientConverter::getState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_02cea343d9f71933]));
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
        static PyObject *t_AbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalGradientConverter_getPropagator(t_AbstractAnalyticalGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalGradientConverter_getState(t_AbstractAnalyticalGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalGradientConverter_get__state(t_AbstractAnalyticalGradientConverter *self, void *data);
        static PyGetSetDef t_AbstractAnalyticalGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalGradientConverter, state),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalGradientConverter__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, getState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalGradientConverter)[] = {
          { Py_tp_methods, t_AbstractAnalyticalGradientConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalGradientConverter, t_AbstractAnalyticalGradientConverter, AbstractAnalyticalGradientConverter);

        void t_AbstractAnalyticalGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalGradientConverter), &PY_TYPE_DEF(AbstractAnalyticalGradientConverter), module, "AbstractAnalyticalGradientConverter", 0);
        }

        void t_AbstractAnalyticalGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "class_", make_descriptor(AbstractAnalyticalGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "wrapfn_", make_descriptor(t_AbstractAnalyticalGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalGradientConverter::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalGradientConverter::wrap_Object(AbstractAnalyticalGradientConverter(((t_AbstractAnalyticalGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_getPropagator(t_AbstractAnalyticalGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > a1((jobject) NULL);
          ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator result((jobject) NULL);

          if (!parseArgs(args, "K[k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPropagator(a0, a1));
            return ::org::orekit::propagation::analytical::t_FieldAbstractAnalyticalPropagator::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_getState(t_AbstractAnalyticalGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalGradientConverter), (PyObject *) self, "getState", args, 2);
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_get__state(t_AbstractAnalyticalGradientConverter *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
          mids$[mid_valueOf_ac5daa58fa9d2237] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/LagrangianPoints;");
          mids$[mid_values_3055fa7ebefc5fee] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/LagrangianPoints;");

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
        return LagrangianPoints(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ac5daa58fa9d2237], a0.this$));
      }

      JArray< LagrangianPoints > LagrangianPoints::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LagrangianPoints >(env->callStaticObjectMethod(cls, mids$[mid_values_3055fa7ebefc5fee]));
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
#include "org/orekit/files/rinex/utils/parsing/RinexUtils.h"
#include "org/orekit/files/rinex/RinexFile.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *RinexUtils::class$ = NULL;
            jmethodID *RinexUtils::mids$ = NULL;
            bool RinexUtils::live$ = false;
            jint RinexUtils::LABEL_INDEX = (jint) 0;

            jclass RinexUtils::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/rinex/utils/parsing/RinexUtils");

                mids$ = new jmethodID[max_mid];
                mids$[mid_convert2DigitsYear_2235cd056f5a882b] = env->getStaticMethodID(cls, "convert2DigitsYear", "(I)I");
                mids$[mid_getLabel_92807efd57acb082] = env->getStaticMethodID(cls, "getLabel", "(Ljava/lang/String;)Ljava/lang/String;");
                mids$[mid_matchesLabel_9365555b1308b94c] = env->getStaticMethodID(cls, "matchesLabel", "(Ljava/lang/String;Ljava/lang/String;)Z");
                mids$[mid_parseComment_0e3d1ede7927cdb9] = env->getStaticMethodID(cls, "parseComment", "(ILjava/lang/String;Lorg/orekit/files/rinex/RinexFile;)V");
                mids$[mid_parseDouble_0f6945e9d2215f4d] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;II)D");
                mids$[mid_parseInt_e00de35a0d221b11] = env->getStaticMethodID(cls, "parseInt", "(Ljava/lang/String;II)I");
                mids$[mid_parseProgramRunByDate_b3d47b4b0f4f605d] = env->getStaticMethodID(cls, "parseProgramRunByDate", "(Ljava/lang/String;ILjava/lang/String;Lorg/orekit/time/TimeScales;Lorg/orekit/files/rinex/section/RinexBaseHeader;)V");
                mids$[mid_parseString_d61d1faf352a69c6] = env->getStaticMethodID(cls, "parseString", "(Ljava/lang/String;II)Ljava/lang/String;");
                mids$[mid_parseVersionFileTypeSatelliteSystem_cdc09b6f779d0738] = env->getStaticMethodID(cls, "parseVersionFileTypeSatelliteSystem", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/rinex/section/RinexBaseHeader;[D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                LABEL_INDEX = env->getStaticIntField(cls, "LABEL_INDEX");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint RinexUtils::convert2DigitsYear(jint a0)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticIntMethod(cls, mids$[mid_convert2DigitsYear_2235cd056f5a882b], a0);
            }

            ::java::lang::String RinexUtils::getLabel(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_getLabel_92807efd57acb082], a0.this$));
            }

            jboolean RinexUtils::matchesLabel(const ::java::lang::String & a0, const ::java::lang::String & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticBooleanMethod(cls, mids$[mid_matchesLabel_9365555b1308b94c], a0.this$, a1.this$);
            }

            void RinexUtils::parseComment(jint a0, const ::java::lang::String & a1, const ::org::orekit::files::rinex::RinexFile & a2)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseComment_0e3d1ede7927cdb9], a0, a1.this$, a2.this$);
            }

            jdouble RinexUtils::parseDouble(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_parseDouble_0f6945e9d2215f4d], a0.this$, a1, a2);
            }

            jint RinexUtils::parseInt(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticIntMethod(cls, mids$[mid_parseInt_e00de35a0d221b11], a0.this$, a1, a2);
            }

            void RinexUtils::parseProgramRunByDate(const ::java::lang::String & a0, jint a1, const ::java::lang::String & a2, const ::org::orekit::time::TimeScales & a3, const ::org::orekit::files::rinex::section::RinexBaseHeader & a4)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseProgramRunByDate_b3d47b4b0f4f605d], a0.this$, a1, a2.this$, a3.this$, a4.this$);
            }

            ::java::lang::String RinexUtils::parseString(const ::java::lang::String & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_parseString_d61d1faf352a69c6], a0.this$, a1, a2));
            }

            void RinexUtils::parseVersionFileTypeSatelliteSystem(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::rinex::section::RinexBaseHeader & a2, const JArray< jdouble > & a3)
            {
              jclass cls = env->getClass(initializeClass);
              env->callStaticVoidMethod(cls, mids$[mid_parseVersionFileTypeSatelliteSystem_cdc09b6f779d0738], a0.this$, a1.this$, a2.this$, a3.this$);
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
      namespace rinex {
        namespace utils {
          namespace parsing {
            static PyObject *t_RinexUtils_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_convert2DigitsYear(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_getLabel(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RinexUtils_matchesLabel(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseComment(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseDouble(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseInt(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseProgramRunByDate(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseString(PyTypeObject *type, PyObject *args);
            static PyObject *t_RinexUtils_parseVersionFileTypeSatelliteSystem(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_RinexUtils__methods_[] = {
              DECLARE_METHOD(t_RinexUtils, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, convert2DigitsYear, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, getLabel, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, matchesLabel, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseComment, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseDouble, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseInt, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseProgramRunByDate, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseString, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RinexUtils, parseVersionFileTypeSatelliteSystem, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RinexUtils)[] = {
              { Py_tp_methods, t_RinexUtils__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RinexUtils)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RinexUtils, t_RinexUtils, RinexUtils);

            void t_RinexUtils::install(PyObject *module)
            {
              installType(&PY_TYPE(RinexUtils), &PY_TYPE_DEF(RinexUtils), module, "RinexUtils", 0);
            }

            void t_RinexUtils::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "class_", make_descriptor(RinexUtils::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "wrapfn_", make_descriptor(t_RinexUtils::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "boxfn_", make_descriptor(boxObject));
              env->getClass(RinexUtils::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RinexUtils), "LABEL_INDEX", make_descriptor(RinexUtils::LABEL_INDEX));
            }

            static PyObject *t_RinexUtils_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RinexUtils::initializeClass, 1)))
                return NULL;
              return t_RinexUtils::wrap_Object(RinexUtils(((t_RinexUtils *) arg)->object.this$));
            }
            static PyObject *t_RinexUtils_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RinexUtils::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RinexUtils_convert2DigitsYear(PyTypeObject *type, PyObject *arg)
            {
              jint a0;
              jint result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::convert2DigitsYear(a0));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError(type, "convert2DigitsYear", arg);
              return NULL;
            }

            static PyObject *t_RinexUtils_getLabel(PyTypeObject *type, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::getLabel(a0));
                return j2p(result);
              }

              PyErr_SetArgsError(type, "getLabel", arg);
              return NULL;
            }

            static PyObject *t_RinexUtils_matchesLabel(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::matchesLabel(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError(type, "matchesLabel", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseComment(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::rinex::RinexFile a2((jobject) NULL);
              PyTypeObject **p2;

              if (!parseArgs(args, "IsK", ::org::orekit::files::rinex::RinexFile::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::rinex::t_RinexFile::parameters_))
              {
                OBJ_CALL(::org::orekit::files::rinex::utils::parsing::RinexUtils::parseComment(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError(type, "parseComment", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseDouble(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::parseDouble(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "parseDouble", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseInt(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jint result;

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::parseInt(a0, a1, a2));
                return PyLong_FromLong((long) result);
              }

              PyErr_SetArgsError(type, "parseInt", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseProgramRunByDate(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              ::java::lang::String a2((jobject) NULL);
              ::org::orekit::time::TimeScales a3((jobject) NULL);
              ::org::orekit::files::rinex::section::RinexBaseHeader a4((jobject) NULL);

              if (!parseArgs(args, "sIskk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::files::rinex::section::RinexBaseHeader::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(::org::orekit::files::rinex::utils::parsing::RinexUtils::parseProgramRunByDate(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError(type, "parseProgramRunByDate", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseString(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "sII", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::files::rinex::utils::parsing::RinexUtils::parseString(a0, a1, a2));
                return j2p(result);
              }

              PyErr_SetArgsError(type, "parseString", args);
              return NULL;
            }

            static PyObject *t_RinexUtils_parseVersionFileTypeSatelliteSystem(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::rinex::section::RinexBaseHeader a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "ssk[D", ::org::orekit::files::rinex::section::RinexBaseHeader::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(::org::orekit::files::rinex::utils::parsing::RinexUtils::parseVersionFileTypeSatelliteSystem(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError(type, "parseVersionFileTypeSatelliteSystem", args);
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
#include "org/orekit/propagation/events/handlers/RecordAndContinue$Event.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *RecordAndContinue$Event::class$ = NULL;
          jmethodID *RecordAndContinue$Event::mids$ = NULL;
          bool RecordAndContinue$Event::live$ = false;

          jclass RecordAndContinue$Event::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/RecordAndContinue$Event");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDetector_d73bb985ffde4156] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
              mids$[mid_getState_c6311115fea01a34] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_isIncreasing_b108b35ef48e27bd] = env->getMethodID(cls, "isIncreasing", "()Z");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::events::EventDetector RecordAndContinue$Event::getDetector() const
          {
            return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_d73bb985ffde4156]));
          }

          ::org::orekit::propagation::SpacecraftState RecordAndContinue$Event::getState() const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_c6311115fea01a34]));
          }

          jboolean RecordAndContinue$Event::isIncreasing() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isIncreasing_b108b35ef48e27bd]);
          }

          ::java::lang::String RecordAndContinue$Event::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      namespace events {
        namespace handlers {
          static PyObject *t_RecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue$Event_getDetector(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_getState(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_isIncreasing(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_toString(t_RecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_RecordAndContinue$Event_get__detector(t_RecordAndContinue$Event *self, void *data);
          static PyObject *t_RecordAndContinue$Event_get__increasing(t_RecordAndContinue$Event *self, void *data);
          static PyObject *t_RecordAndContinue$Event_get__state(t_RecordAndContinue$Event *self, void *data);
          static PyGetSetDef t_RecordAndContinue$Event__fields_[] = {
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, detector),
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, increasing),
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, state),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordAndContinue$Event__methods_[] = {
            DECLARE_METHOD(t_RecordAndContinue$Event, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue$Event, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue$Event, getDetector, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, getState, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, isIncreasing, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordAndContinue$Event)[] = {
            { Py_tp_methods, t_RecordAndContinue$Event__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RecordAndContinue$Event__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordAndContinue$Event)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RecordAndContinue$Event, t_RecordAndContinue$Event, RecordAndContinue$Event);

          void t_RecordAndContinue$Event::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordAndContinue$Event), &PY_TYPE_DEF(RecordAndContinue$Event), module, "RecordAndContinue$Event", 0);
          }

          void t_RecordAndContinue$Event::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "class_", make_descriptor(RecordAndContinue$Event::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "wrapfn_", make_descriptor(t_RecordAndContinue$Event::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordAndContinue$Event::initializeClass, 1)))
              return NULL;
            return t_RecordAndContinue$Event::wrap_Object(RecordAndContinue$Event(((t_RecordAndContinue$Event *) arg)->object.this$));
          }
          static PyObject *t_RecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordAndContinue$Event::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RecordAndContinue$Event_getDetector(t_RecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getDetector());
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
          }

          static PyObject *t_RecordAndContinue$Event_getState(t_RecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          static PyObject *t_RecordAndContinue$Event_isIncreasing(t_RecordAndContinue$Event *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isIncreasing());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_RecordAndContinue$Event_toString(t_RecordAndContinue$Event *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(RecordAndContinue$Event), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_RecordAndContinue$Event_get__detector(t_RecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getDetector());
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
          }

          static PyObject *t_RecordAndContinue$Event_get__increasing(t_RecordAndContinue$Event *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isIncreasing());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_RecordAndContinue$Event_get__state(t_RecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            OBJ_CALL(value = self->object.getState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonics.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonUnnormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *PythonUnnormalizedSphericalHarmonics::mids$ = NULL;
          bool PythonUnnormalizedSphericalHarmonics::live$ = false;

          jclass PythonUnnormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getUnnormalizedCnm_dbbe5f05149dbf73] = env->getMethodID(cls, "getUnnormalizedCnm", "(II)D");
              mids$[mid_getUnnormalizedSnm_dbbe5f05149dbf73] = env->getMethodID(cls, "getUnnormalizedSnm", "(II)D");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonUnnormalizedSphericalHarmonics::PythonUnnormalizedSphericalHarmonics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonUnnormalizedSphericalHarmonics::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonUnnormalizedSphericalHarmonics::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonUnnormalizedSphericalHarmonics::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonUnnormalizedSphericalHarmonics_init_(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_finalize(t_PythonUnnormalizedSphericalHarmonics *self);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_pythonExtension(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonics_getDate0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2(JNIEnv *jenv, jobject jobj, jint a0, jint a1);
          static void JNICALL t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_get__self(t_PythonUnnormalizedSphericalHarmonics *self, void *data);
          static PyGetSetDef t_PythonUnnormalizedSphericalHarmonics__fields_[] = {
            DECLARE_GET_FIELD(t_PythonUnnormalizedSphericalHarmonics, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonUnnormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonics, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonUnnormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_PythonUnnormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) t_PythonUnnormalizedSphericalHarmonics_init_ },
            { Py_tp_getset, t_PythonUnnormalizedSphericalHarmonics__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonUnnormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonUnnormalizedSphericalHarmonics, t_PythonUnnormalizedSphericalHarmonics, PythonUnnormalizedSphericalHarmonics);

          void t_PythonUnnormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonUnnormalizedSphericalHarmonics), &PY_TYPE_DEF(PythonUnnormalizedSphericalHarmonics), module, "PythonUnnormalizedSphericalHarmonics", 1);
          }

          void t_PythonUnnormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "class_", make_descriptor(PythonUnnormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_PythonUnnormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonUnnormalizedSphericalHarmonics::initializeClass);
            JNINativeMethod methods[] = {
              { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonUnnormalizedSphericalHarmonics_getDate0 },
              { "getUnnormalizedCnm", "(II)D", (void *) t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1 },
              { "getUnnormalizedSnm", "(II)D", (void *) t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2 },
              { "pythonDecRef", "()V", (void *) t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonUnnormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_PythonUnnormalizedSphericalHarmonics::wrap_Object(PythonUnnormalizedSphericalHarmonics(((t_PythonUnnormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_PythonUnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonUnnormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonUnnormalizedSphericalHarmonics_init_(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args, PyObject *kwds)
          {
            PythonUnnormalizedSphericalHarmonics object((jobject) NULL);

            INT_CALL(object = PythonUnnormalizedSphericalHarmonics());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_finalize(t_PythonUnnormalizedSphericalHarmonics *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_pythonExtension(t_PythonUnnormalizedSphericalHarmonics *self, PyObject *args)
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

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonics_getDate0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getDate", result);
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

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedCnm1(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedCnm", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getUnnormalizedCnm", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonics_getUnnormalizedSnm2(JNIEnv *jenv, jobject jobj, jint a0, jint a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getUnnormalizedSnm", "ii", (int) a0, (int) a1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getUnnormalizedSnm", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonUnnormalizedSphericalHarmonics_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonUnnormalizedSphericalHarmonics::mids$[PythonUnnormalizedSphericalHarmonics::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonics_get__self(t_PythonUnnormalizedSphericalHarmonics *self, void *data)
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
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldPropagator::class$ = NULL;
      jmethodID *FieldPropagator::mids$ = NULL;
      bool FieldPropagator::live$ = false;
      jdouble FieldPropagator::DEFAULT_MASS = (jdouble) 0;

      jclass FieldPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_2c8cec257f03501f] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_addEventDetector_f929ebd2a84dbfe7] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
          mids$[mid_clearEventsDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_clearStepHandlers_0fa09c18fee449d5] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getAdditionalStateProviders_2afa36052df4765d] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_54ac43f1e933cf20] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
          mids$[mid_getEventsDetectors_37528d110cff6b74] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_02cea343d9f71933] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_805c1ec2ab9b09dd] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_f6f1ea8aef3019eb] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_propagate_fc770c29e3468de8] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_resetInitialState_1463d3d0d52f94dd] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setStepHandler_16d47a327666f5ff] = env->getMethodID(cls, "setStepHandler", "(Lorg/orekit/propagation/sampling/FieldOrekitStepHandler;)V");
          mids$[mid_setStepHandler_465bcdb67e0beb29] = env->getMethodID(cls, "setStepHandler", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::FieldAdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_2c8cec257f03501f], a0.this$);
      }

      void FieldPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_f929ebd2a84dbfe7], a0.this$);
      }

      void FieldPropagator::clearEventsDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_0fa09c18fee449d5]);
      }

      void FieldPropagator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_0fa09c18fee449d5]);
      }

      ::java::util::List FieldPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_2afa36052df4765d]));
      }

      ::org::orekit::attitudes::AttitudeProvider FieldPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_a904f3d015a354a0]));
      }

      ::org::orekit::propagation::FieldEphemerisGenerator FieldPropagator::getEphemerisGenerator() const
      {
        return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_54ac43f1e933cf20]));
      }

      ::java::util::Collection FieldPropagator::getEventsDetectors() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_37528d110cff6b74]));
      }

      ::org::orekit::frames::Frame FieldPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_02cea343d9f71933]));
      }

      JArray< ::java::lang::String > FieldPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3]));
      }

      ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer FieldPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_805c1ec2ab9b09dd]));
      }

      jboolean FieldPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68], a0.this$);
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_f6f1ea8aef3019eb], a0.this$));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_fc770c29e3468de8], a0.this$, a1.this$));
      }

      void FieldPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_1463d3d0d52f94dd], a0.this$);
      }

      void FieldPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_3cff7c75ea06698c], a0.this$);
      }

      void FieldPropagator::setStepHandler(const ::org::orekit::propagation::sampling::FieldOrekitStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_16d47a327666f5ff], a0.this$);
      }

      void FieldPropagator::setStepHandler(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setStepHandler_465bcdb67e0beb29], a0.this$, a1.this$);
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
      static PyObject *t_FieldPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPropagator_of_(t_FieldPropagator *self, PyObject *args);
      static PyObject *t_FieldPropagator_addAdditionalStateProvider(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_addEventDetector(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_clearEventsDetectors(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_clearStepHandlers(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getAdditionalStateProviders(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getAttitudeProvider(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getEphemerisGenerator(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getEventsDetectors(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getFrame(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getInitialState(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getManagedAdditionalStates(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_getMultiplexer(t_FieldPropagator *self);
      static PyObject *t_FieldPropagator_isAdditionalStateManaged(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_propagate(t_FieldPropagator *self, PyObject *args);
      static PyObject *t_FieldPropagator_resetInitialState(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_setAttitudeProvider(t_FieldPropagator *self, PyObject *arg);
      static PyObject *t_FieldPropagator_setStepHandler(t_FieldPropagator *self, PyObject *args);
      static PyObject *t_FieldPropagator_get__additionalStateProviders(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__attitudeProvider(t_FieldPropagator *self, void *data);
      static int t_FieldPropagator_set__attitudeProvider(t_FieldPropagator *self, PyObject *arg, void *data);
      static PyObject *t_FieldPropagator_get__ephemerisGenerator(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__eventsDetectors(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__frame(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__initialState(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__managedAdditionalStates(t_FieldPropagator *self, void *data);
      static PyObject *t_FieldPropagator_get__multiplexer(t_FieldPropagator *self, void *data);
      static int t_FieldPropagator_set__stepHandler(t_FieldPropagator *self, PyObject *arg, void *data);
      static PyObject *t_FieldPropagator_get__parameters_(t_FieldPropagator *self, void *data);
      static PyGetSetDef t_FieldPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_FieldPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_FieldPropagator, ephemerisGenerator),
        DECLARE_GET_FIELD(t_FieldPropagator, eventsDetectors),
        DECLARE_GET_FIELD(t_FieldPropagator, frame),
        DECLARE_GET_FIELD(t_FieldPropagator, initialState),
        DECLARE_GET_FIELD(t_FieldPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_FieldPropagator, multiplexer),
        DECLARE_SET_FIELD(t_FieldPropagator, stepHandler),
        DECLARE_GET_FIELD(t_FieldPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_FieldPropagator, addEventDetector, METH_O),
        DECLARE_METHOD(t_FieldPropagator, clearEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getEphemerisGenerator, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getEventsDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_FieldPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_FieldPropagator, propagate, METH_VARARGS),
        DECLARE_METHOD(t_FieldPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_FieldPropagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_FieldPropagator, setStepHandler, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPropagator)[] = {
        { Py_tp_methods, t_FieldPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::FieldPVCoordinatesProvider),
        NULL
      };

      DEFINE_TYPE(FieldPropagator, t_FieldPropagator, FieldPropagator);
      PyObject *t_FieldPropagator::wrap_Object(const FieldPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPropagator *self = (t_FieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPropagator *self = (t_FieldPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPropagator), &PY_TYPE_DEF(FieldPropagator), module, "FieldPropagator", 0);
      }

      void t_FieldPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "class_", make_descriptor(FieldPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "wrapfn_", make_descriptor(t_FieldPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "boxfn_", make_descriptor(boxObject));
        env->getClass(FieldPropagator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPropagator), "DEFAULT_MASS", make_descriptor(FieldPropagator::DEFAULT_MASS));
      }

      static PyObject *t_FieldPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldPropagator::wrap_Object(FieldPropagator(((t_FieldPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPropagator_of_(t_FieldPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldPropagator_addAdditionalStateProvider(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldAdditionalStateProvider a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldAdditionalStateProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldAdditionalStateProvider::parameters_))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_addEventDetector(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_clearEventsDetectors(t_FieldPropagator *self)
      {
        OBJ_CALL(self->object.clearEventsDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldPropagator_clearStepHandlers(t_FieldPropagator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldPropagator_getAdditionalStateProviders(t_FieldPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getAttitudeProvider(t_FieldPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getEphemerisGenerator(t_FieldPropagator *self)
      {
        ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPropagator_getEventsDetectors(t_FieldPropagator *self)
      {
        ::java::util::Collection result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getFrame(t_FieldPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldPropagator_getInitialState(t_FieldPropagator *self)
      {
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPropagator_getManagedAdditionalStates(t_FieldPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_FieldPropagator_getMultiplexer(t_FieldPropagator *self)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPropagator_isAdditionalStateManaged(t_FieldPropagator *self, PyObject *arg)
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

      static PyObject *t_FieldPropagator_propagate(t_FieldPropagator *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "propagate", args);
        return NULL;
      }

      static PyObject *t_FieldPropagator_resetInitialState(t_FieldPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_FieldPropagator_setAttitudeProvider(t_FieldPropagator *self, PyObject *arg)
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

      static PyObject *t_FieldPropagator_setStepHandler(t_FieldPropagator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::sampling::FieldOrekitStepHandler a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepHandler::parameters_))
            {
              OBJ_CALL(self->object.setStepHandler(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
            {
              OBJ_CALL(self->object.setStepHandler(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setStepHandler", args);
        return NULL;
      }
      static PyObject *t_FieldPropagator_get__parameters_(t_FieldPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPropagator_get__additionalStateProviders(t_FieldPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__attitudeProvider(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_FieldPropagator_set__attitudeProvider(t_FieldPropagator *self, PyObject *arg, void *data)
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

      static PyObject *t_FieldPropagator_get__ephemerisGenerator(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getEphemerisGenerator());
        return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__eventsDetectors(t_FieldPropagator *self, void *data)
      {
        ::java::util::Collection value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventsDetectors());
        return ::java::util::t_Collection::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__frame(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__initialState(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
      }

      static PyObject *t_FieldPropagator_get__managedAdditionalStates(t_FieldPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_FieldPropagator_get__multiplexer(t_FieldPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(value);
      }

      static int t_FieldPropagator_set__stepHandler(t_FieldPropagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepHandler value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::FieldOrekitStepHandler::initializeClass, &value))
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
#include "org/orekit/propagation/events/PythonFieldEnablingPredicate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldEnablingPredicate::class$ = NULL;
        jmethodID *PythonFieldEnablingPredicate::mids$ = NULL;
        bool PythonFieldEnablingPredicate::live$ = false;

        jclass PythonFieldEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_eventIsEnabled_0d65b7645fead4e2] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldEnablingPredicate::PythonFieldEnablingPredicate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonFieldEnablingPredicate::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldEnablingPredicate::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldEnablingPredicate::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonFieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldEnablingPredicate_of_(t_PythonFieldEnablingPredicate *self, PyObject *args);
        static int t_PythonFieldEnablingPredicate_init_(t_PythonFieldEnablingPredicate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldEnablingPredicate_finalize(t_PythonFieldEnablingPredicate *self);
        static PyObject *t_PythonFieldEnablingPredicate_pythonExtension(t_PythonFieldEnablingPredicate *self, PyObject *args);
        static jboolean JNICALL t_PythonFieldEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldEnablingPredicate_get__self(t_PythonFieldEnablingPredicate *self, void *data);
        static PyObject *t_PythonFieldEnablingPredicate_get__parameters_(t_PythonFieldEnablingPredicate *self, void *data);
        static PyGetSetDef t_PythonFieldEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldEnablingPredicate, self),
          DECLARE_GET_FIELD(t_PythonFieldEnablingPredicate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldEnablingPredicate, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldEnablingPredicate)[] = {
          { Py_tp_methods, t_PythonFieldEnablingPredicate__methods_ },
          { Py_tp_init, (void *) t_PythonFieldEnablingPredicate_init_ },
          { Py_tp_getset, t_PythonFieldEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldEnablingPredicate, t_PythonFieldEnablingPredicate, PythonFieldEnablingPredicate);
        PyObject *t_PythonFieldEnablingPredicate::wrap_Object(const PythonFieldEnablingPredicate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEnablingPredicate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEnablingPredicate *self = (t_PythonFieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldEnablingPredicate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldEnablingPredicate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldEnablingPredicate *self = (t_PythonFieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldEnablingPredicate), &PY_TYPE_DEF(PythonFieldEnablingPredicate), module, "PythonFieldEnablingPredicate", 1);
        }

        void t_PythonFieldEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "class_", make_descriptor(PythonFieldEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "wrapfn_", make_descriptor(t_PythonFieldEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldEnablingPredicate), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldEnablingPredicate::initializeClass);
          JNINativeMethod methods[] = {
            { "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z", (void *) t_PythonFieldEnablingPredicate_eventIsEnabled0 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldEnablingPredicate_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonFieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_PythonFieldEnablingPredicate::wrap_Object(PythonFieldEnablingPredicate(((t_PythonFieldEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldEnablingPredicate_of_(t_PythonFieldEnablingPredicate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldEnablingPredicate_init_(t_PythonFieldEnablingPredicate *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldEnablingPredicate object((jobject) NULL);

          INT_CALL(object = PythonFieldEnablingPredicate());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldEnablingPredicate_finalize(t_PythonFieldEnablingPredicate *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldEnablingPredicate_pythonExtension(t_PythonFieldEnablingPredicate *self, PyObject *args)
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

        static jboolean JNICALL t_PythonFieldEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(::org::orekit::propagation::events::FieldEventDetector(a1));
          PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
          PyObject *result = PyObject_CallMethod(obj, "eventIsEnabled", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("eventIsEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonFieldEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldEnablingPredicate::mids$[PythonFieldEnablingPredicate::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldEnablingPredicate_get__self(t_PythonFieldEnablingPredicate *self, void *data)
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
        static PyObject *t_PythonFieldEnablingPredicate_get__parameters_(t_PythonFieldEnablingPredicate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/MessagesParser.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *MessagesParser::class$ = NULL;
          jmethodID *MessagesParser::mids$ = NULL;
          bool MessagesParser::live$ = false;

          jclass MessagesParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/MessagesParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_parse_3d1122b226ebd07d] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;Z)Lorg/orekit/gnss/metric/messages/ParsedMessage;");
              mids$[mid_getMessageType_b909afe8923771a6] = env->getMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/MessageType;");
              mids$[mid_parseMessageNumber_bbc828ae54845950] = env->getMethodID(cls, "parseMessageNumber", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MessagesParser::MessagesParser(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}

          ::org::orekit::gnss::metric::messages::ParsedMessage MessagesParser::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jboolean a1) const
          {
            return ::org::orekit::gnss::metric::messages::ParsedMessage(env->callObjectMethod(this$, mids$[mid_parse_3d1122b226ebd07d], a0.this$, a1));
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
          static PyObject *t_MessagesParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessagesParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MessagesParser_init_(t_MessagesParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MessagesParser_parse(t_MessagesParser *self, PyObject *args);

          static PyMethodDef t_MessagesParser__methods_[] = {
            DECLARE_METHOD(t_MessagesParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessagesParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessagesParser, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessagesParser)[] = {
            { Py_tp_methods, t_MessagesParser__methods_ },
            { Py_tp_init, (void *) t_MessagesParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessagesParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessagesParser, t_MessagesParser, MessagesParser);

          void t_MessagesParser::install(PyObject *module)
          {
            installType(&PY_TYPE(MessagesParser), &PY_TYPE_DEF(MessagesParser), module, "MessagesParser", 0);
          }

          void t_MessagesParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessagesParser), "class_", make_descriptor(MessagesParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessagesParser), "wrapfn_", make_descriptor(t_MessagesParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessagesParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessagesParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessagesParser::initializeClass, 1)))
              return NULL;
            return t_MessagesParser::wrap_Object(MessagesParser(((t_MessagesParser *) arg)->object.this$));
          }
          static PyObject *t_MessagesParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessagesParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MessagesParser_init_(t_MessagesParser *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            MessagesParser object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = MessagesParser(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MessagesParser_parse(t_MessagesParser *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jboolean a1;
            ::org::orekit::gnss::metric::messages::ParsedMessage result((jobject) NULL);

            if (!parseArgs(args, "kZ", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::orekit::gnss::metric::messages::t_ParsedMessage::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *SupportBallGenerator::class$ = NULL;
        jmethodID *SupportBallGenerator::mids$ = NULL;
        bool SupportBallGenerator::live$ = false;

        jclass SupportBallGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/SupportBallGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_ballOnSupport_8eaea97b2dcfeb64] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::enclosing::EnclosingBall SupportBallGenerator::ballOnSupport(const ::java::util::List & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_8eaea97b2dcfeb64], a0.this$));
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
      namespace enclosing {
        static PyObject *t_SupportBallGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SupportBallGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SupportBallGenerator_of_(t_SupportBallGenerator *self, PyObject *args);
        static PyObject *t_SupportBallGenerator_ballOnSupport(t_SupportBallGenerator *self, PyObject *arg);
        static PyObject *t_SupportBallGenerator_get__parameters_(t_SupportBallGenerator *self, void *data);
        static PyGetSetDef t_SupportBallGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_SupportBallGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SupportBallGenerator__methods_[] = {
          DECLARE_METHOD(t_SupportBallGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SupportBallGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SupportBallGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_SupportBallGenerator, ballOnSupport, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SupportBallGenerator)[] = {
          { Py_tp_methods, t_SupportBallGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SupportBallGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SupportBallGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SupportBallGenerator, t_SupportBallGenerator, SupportBallGenerator);
        PyObject *t_SupportBallGenerator::wrap_Object(const SupportBallGenerator& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_SupportBallGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SupportBallGenerator *self = (t_SupportBallGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_SupportBallGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_SupportBallGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SupportBallGenerator *self = (t_SupportBallGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_SupportBallGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(SupportBallGenerator), &PY_TYPE_DEF(SupportBallGenerator), module, "SupportBallGenerator", 0);
        }

        void t_SupportBallGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "class_", make_descriptor(SupportBallGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "wrapfn_", make_descriptor(t_SupportBallGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SupportBallGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SupportBallGenerator::initializeClass, 1)))
            return NULL;
          return t_SupportBallGenerator::wrap_Object(SupportBallGenerator(((t_SupportBallGenerator *) arg)->object.this$));
        }
        static PyObject *t_SupportBallGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SupportBallGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SupportBallGenerator_of_(t_SupportBallGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SupportBallGenerator_ballOnSupport(t_SupportBallGenerator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.ballOnSupport(a0));
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
          return NULL;
        }
        static PyObject *t_SupportBallGenerator_get__parameters_(t_SupportBallGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataSource$Opener.h"
#include "java/io/IOException.h"
#include "java/io/Reader.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$Opener::class$ = NULL;
      jmethodID *DataSource$Opener::mids$ = NULL;
      bool DataSource$Opener::live$ = false;

      jclass DataSource$Opener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$Opener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openReaderOnce_26c6a3f16521a493] = env->getMethodID(cls, "openReaderOnce", "()Ljava/io/Reader;");
          mids$[mid_openStreamOnce_51fdc45647b8e866] = env->getMethodID(cls, "openStreamOnce", "()Ljava/io/InputStream;");
          mids$[mid_rawDataIsBinary_b108b35ef48e27bd] = env->getMethodID(cls, "rawDataIsBinary", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::Reader DataSource$Opener::openReaderOnce() const
      {
        return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_openReaderOnce_26c6a3f16521a493]));
      }

      ::java::io::InputStream DataSource$Opener::openStreamOnce() const
      {
        return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_openStreamOnce_51fdc45647b8e866]));
      }

      jboolean DataSource$Opener::rawDataIsBinary() const
      {
        return env->callBooleanMethod(this$, mids$[mid_rawDataIsBinary_b108b35ef48e27bd]);
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
      static PyObject *t_DataSource$Opener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$Opener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$Opener_openReaderOnce(t_DataSource$Opener *self);
      static PyObject *t_DataSource$Opener_openStreamOnce(t_DataSource$Opener *self);
      static PyObject *t_DataSource$Opener_rawDataIsBinary(t_DataSource$Opener *self);

      static PyMethodDef t_DataSource$Opener__methods_[] = {
        DECLARE_METHOD(t_DataSource$Opener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$Opener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$Opener, openReaderOnce, METH_NOARGS),
        DECLARE_METHOD(t_DataSource$Opener, openStreamOnce, METH_NOARGS),
        DECLARE_METHOD(t_DataSource$Opener, rawDataIsBinary, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$Opener)[] = {
        { Py_tp_methods, t_DataSource$Opener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$Opener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$Opener, t_DataSource$Opener, DataSource$Opener);

      void t_DataSource$Opener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$Opener), &PY_TYPE_DEF(DataSource$Opener), module, "DataSource$Opener", 0);
      }

      void t_DataSource$Opener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "class_", make_descriptor(DataSource$Opener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "wrapfn_", make_descriptor(t_DataSource$Opener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$Opener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$Opener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$Opener::initializeClass, 1)))
          return NULL;
        return t_DataSource$Opener::wrap_Object(DataSource$Opener(((t_DataSource$Opener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$Opener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$Opener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$Opener_openReaderOnce(t_DataSource$Opener *self)
      {
        ::java::io::Reader result((jobject) NULL);
        OBJ_CALL(result = self->object.openReaderOnce());
        return ::java::io::t_Reader::wrap_Object(result);
      }

      static PyObject *t_DataSource$Opener_openStreamOnce(t_DataSource$Opener *self)
      {
        ::java::io::InputStream result((jobject) NULL);
        OBJ_CALL(result = self->object.openStreamOnce());
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      static PyObject *t_DataSource$Opener_rawDataIsBinary(t_DataSource$Opener *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.rawDataIsBinary());
        Py_RETURN_BOOL(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVector$Entry::class$ = NULL;
      jmethodID *RealVector$Entry::mids$ = NULL;
      bool RealVector$Entry::live$ = false;

      jclass RealVector$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVector$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bdf205176b90cff1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_getIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getIndex", "()I");
          mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");
          mids$[mid_setIndex_99803b0791f320ff] = env->getMethodID(cls, "setIndex", "(I)V");
          mids$[mid_setValue_17db3a65980d3441] = env->getMethodID(cls, "setValue", "(D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVector$Entry::RealVector$Entry(const ::org::hipparchus::linear::RealVector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bdf205176b90cff1, a0.this$)) {}

      jint RealVector$Entry::getIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getIndex_570ce0828f81a2c1]);
      }

      jdouble RealVector$Entry::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
      }

      void RealVector$Entry::setIndex(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIndex_99803b0791f320ff], a0);
      }

      void RealVector$Entry::setValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_17db3a65980d3441], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_RealVector$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVector$Entry_init_(t_RealVector$Entry *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVector$Entry_getIndex(t_RealVector$Entry *self);
      static PyObject *t_RealVector$Entry_getValue(t_RealVector$Entry *self);
      static PyObject *t_RealVector$Entry_setIndex(t_RealVector$Entry *self, PyObject *arg);
      static PyObject *t_RealVector$Entry_setValue(t_RealVector$Entry *self, PyObject *arg);
      static PyObject *t_RealVector$Entry_get__index(t_RealVector$Entry *self, void *data);
      static int t_RealVector$Entry_set__index(t_RealVector$Entry *self, PyObject *arg, void *data);
      static PyObject *t_RealVector$Entry_get__value(t_RealVector$Entry *self, void *data);
      static int t_RealVector$Entry_set__value(t_RealVector$Entry *self, PyObject *arg, void *data);
      static PyGetSetDef t_RealVector$Entry__fields_[] = {
        DECLARE_GETSET_FIELD(t_RealVector$Entry, index),
        DECLARE_GETSET_FIELD(t_RealVector$Entry, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVector$Entry__methods_[] = {
        DECLARE_METHOD(t_RealVector$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector$Entry, getIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector$Entry, setIndex, METH_O),
        DECLARE_METHOD(t_RealVector$Entry, setValue, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVector$Entry)[] = {
        { Py_tp_methods, t_RealVector$Entry__methods_ },
        { Py_tp_init, (void *) t_RealVector$Entry_init_ },
        { Py_tp_getset, t_RealVector$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVector$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVector$Entry, t_RealVector$Entry, RealVector$Entry);

      void t_RealVector$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVector$Entry), &PY_TYPE_DEF(RealVector$Entry), module, "RealVector$Entry", 0);
      }

      void t_RealVector$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "class_", make_descriptor(RealVector$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "wrapfn_", make_descriptor(t_RealVector$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVector$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVector$Entry::initializeClass, 1)))
          return NULL;
        return t_RealVector$Entry::wrap_Object(RealVector$Entry(((t_RealVector$Entry *) arg)->object.this$));
      }
      static PyObject *t_RealVector$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVector$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVector$Entry_init_(t_RealVector$Entry *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        RealVector$Entry object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          INT_CALL(object = RealVector$Entry(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RealVector$Entry_getIndex(t_RealVector$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector$Entry_getValue(t_RealVector$Entry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector$Entry_setIndex(t_RealVector$Entry *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIndex(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIndex", arg);
        return NULL;
      }

      static PyObject *t_RealVector$Entry_setValue(t_RealVector$Entry *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setValue", arg);
        return NULL;
      }

      static PyObject *t_RealVector$Entry_get__index(t_RealVector$Entry *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIndex());
        return PyLong_FromLong((long) value);
      }
      static int t_RealVector$Entry_set__index(t_RealVector$Entry *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIndex(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "index", arg);
        return -1;
      }

      static PyObject *t_RealVector$Entry_get__value(t_RealVector$Entry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_RealVector$Entry_set__value(t_RealVector$Entry *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolator.h"
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *PiecewiseBicubicSplineInterpolator::class$ = NULL;
        jmethodID *PiecewiseBicubicSplineInterpolator::mids$ = NULL;
        bool PiecewiseBicubicSplineInterpolator::live$ = false;

        jclass PiecewiseBicubicSplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_36a8ea44b704c39a] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PiecewiseBicubicSplineInterpolator::PiecewiseBicubicSplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction PiecewiseBicubicSplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_36a8ea44b704c39a], a0.this$, a1.this$, a2.this$));
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
      namespace interpolation {
        static PyObject *t_PiecewiseBicubicSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PiecewiseBicubicSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PiecewiseBicubicSplineInterpolator_init_(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PiecewiseBicubicSplineInterpolator_interpolate(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args);

        static PyMethodDef t_PiecewiseBicubicSplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PiecewiseBicubicSplineInterpolator)[] = {
          { Py_tp_methods, t_PiecewiseBicubicSplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_PiecewiseBicubicSplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PiecewiseBicubicSplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PiecewiseBicubicSplineInterpolator, t_PiecewiseBicubicSplineInterpolator, PiecewiseBicubicSplineInterpolator);

        void t_PiecewiseBicubicSplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PiecewiseBicubicSplineInterpolator), &PY_TYPE_DEF(PiecewiseBicubicSplineInterpolator), module, "PiecewiseBicubicSplineInterpolator", 0);
        }

        void t_PiecewiseBicubicSplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "class_", make_descriptor(PiecewiseBicubicSplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "wrapfn_", make_descriptor(t_PiecewiseBicubicSplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PiecewiseBicubicSplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_PiecewiseBicubicSplineInterpolator::wrap_Object(PiecewiseBicubicSplineInterpolator(((t_PiecewiseBicubicSplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PiecewiseBicubicSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PiecewiseBicubicSplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PiecewiseBicubicSplineInterpolator_init_(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PiecewiseBicubicSplineInterpolator object((jobject) NULL);

          INT_CALL(object = PiecewiseBicubicSplineInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolator_interpolate(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_PiecewiseBicubicSplineInterpolatingFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDifferentiableVectorFunction::class$ = NULL;
        jmethodID *UnivariateDifferentiableVectorFunction::mids$ = NULL;
        bool UnivariateDifferentiableVectorFunction::live$ = false;

        jclass UnivariateDifferentiableVectorFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_75b23942a40a3816] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > UnivariateDifferentiableVectorFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_value_75b23942a40a3816], a0.this$));
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
        static PyObject *t_UnivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableVectorFunction_value(t_UnivariateDifferentiableVectorFunction *self, PyObject *args);

        static PyMethodDef t_UnivariateDifferentiableVectorFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableVectorFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableVectorFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableVectorFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableVectorFunction)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableVectorFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableVectorFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::UnivariateVectorFunction),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableVectorFunction, t_UnivariateDifferentiableVectorFunction, UnivariateDifferentiableVectorFunction);

        void t_UnivariateDifferentiableVectorFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableVectorFunction), &PY_TYPE_DEF(UnivariateDifferentiableVectorFunction), module, "UnivariateDifferentiableVectorFunction", 0);
        }

        void t_UnivariateDifferentiableVectorFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableVectorFunction), "class_", make_descriptor(UnivariateDifferentiableVectorFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableVectorFunction), "wrapfn_", make_descriptor(t_UnivariateDifferentiableVectorFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableVectorFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableVectorFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableVectorFunction::wrap_Object(UnivariateDifferentiableVectorFunction(((t_UnivariateDifferentiableVectorFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableVectorFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDifferentiableVectorFunction_value(t_UnivariateDifferentiableVectorFunction *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          return callSuper(PY_TYPE(UnivariateDifferentiableVectorFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/ReceiverAntenna.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *ReceiverAntenna::class$ = NULL;
        jmethodID *ReceiverAntenna::mids$ = NULL;
        bool ReceiverAntenna::live$ = false;

        jclass ReceiverAntenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/ReceiverAntenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a6279989875ad2c2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V");
            mids$[mid_getSerialNumber_11b109bd155ca898] = env->getMethodID(cls, "getSerialNumber", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ReceiverAntenna::ReceiverAntenna(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::util::Map & a2, const ::java::lang::String & a3) : ::org::orekit::gnss::antenna::Antenna(env->newObject(initializeClass, &mids$, mid_init$_a6279989875ad2c2, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::lang::String ReceiverAntenna::getSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSerialNumber_11b109bd155ca898]));
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
      namespace antenna {
        static PyObject *t_ReceiverAntenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReceiverAntenna_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ReceiverAntenna_init_(t_ReceiverAntenna *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ReceiverAntenna_getSerialNumber(t_ReceiverAntenna *self);
        static PyObject *t_ReceiverAntenna_get__serialNumber(t_ReceiverAntenna *self, void *data);
        static PyGetSetDef t_ReceiverAntenna__fields_[] = {
          DECLARE_GET_FIELD(t_ReceiverAntenna, serialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ReceiverAntenna__methods_[] = {
          DECLARE_METHOD(t_ReceiverAntenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReceiverAntenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReceiverAntenna, getSerialNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ReceiverAntenna)[] = {
          { Py_tp_methods, t_ReceiverAntenna__methods_ },
          { Py_tp_init, (void *) t_ReceiverAntenna_init_ },
          { Py_tp_getset, t_ReceiverAntenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ReceiverAntenna)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::antenna::Antenna),
          NULL
        };

        DEFINE_TYPE(ReceiverAntenna, t_ReceiverAntenna, ReceiverAntenna);

        void t_ReceiverAntenna::install(PyObject *module)
        {
          installType(&PY_TYPE(ReceiverAntenna), &PY_TYPE_DEF(ReceiverAntenna), module, "ReceiverAntenna", 0);
        }

        void t_ReceiverAntenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "class_", make_descriptor(ReceiverAntenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "wrapfn_", make_descriptor(t_ReceiverAntenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReceiverAntenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ReceiverAntenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ReceiverAntenna::initializeClass, 1)))
            return NULL;
          return t_ReceiverAntenna::wrap_Object(ReceiverAntenna(((t_ReceiverAntenna *) arg)->object.this$));
        }
        static PyObject *t_ReceiverAntenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ReceiverAntenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ReceiverAntenna_init_(t_ReceiverAntenna *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::util::Map a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::lang::String a3((jobject) NULL);
          ReceiverAntenna object((jobject) NULL);

          if (!parseArgs(args, "ssKs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Map::parameters_, &a3))
          {
            INT_CALL(object = ReceiverAntenna(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ReceiverAntenna_getSerialNumber(t_ReceiverAntenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSerialNumber());
          return j2p(result);
        }

        static PyObject *t_ReceiverAntenna_get__serialNumber(t_ReceiverAntenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSerialNumber());
          return j2p(value);
        }
      }
    }
  }
}
