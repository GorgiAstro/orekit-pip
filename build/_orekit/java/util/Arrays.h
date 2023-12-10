#ifndef java_util_Arrays_H
#define java_util_Arrays_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    class List;
    class Spliterator$OfLong;
    namespace stream {
      class Stream;
      class DoubleStream;
    }
    class Spliterator$OfDouble;
    class Spliterator;
    class Spliterator$OfInt;
  }
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Arrays : public ::java::lang::Object {
     public:
      enum {
        mid_asList_234aa90ee2d16639,
        mid_binarySearch_76fd1872bdb7a177,
        mid_binarySearch_470e2979761090f3,
        mid_binarySearch_f3a2a1b6041f5654,
        mid_binarySearch_fe3be197f0a3fad6,
        mid_binarySearch_791106768ea60ccf,
        mid_binarySearch_5bd36750b26c8f11,
        mid_binarySearch_11c9f0ca09e9a1b5,
        mid_binarySearch_d5ae829e5e529654,
        mid_binarySearch_e6a79a6354ddf6c2,
        mid_binarySearch_14d6496267e3e078,
        mid_binarySearch_dac3408c8e84411f,
        mid_binarySearch_fdcd5d137f48eb75,
        mid_binarySearch_47998f71d1a88c38,
        mid_binarySearch_583a145bae2e56ff,
        mid_binarySearch_963d9b0e2e776cd8,
        mid_binarySearch_9251887bb739094b,
        mid_binarySearch_d3d4b6e50a1863a0,
        mid_binarySearch_ed3b5ef5a6f3be11,
        mid_compare_baa420e9123f184d,
        mid_compare_722a72033b68df72,
        mid_compare_fe416a234af07512,
        mid_compare_cd4eb7530284071c,
        mid_compare_05ddcb51512740f6,
        mid_compare_05974a320e030538,
        mid_compare_3064f21e6f53a721,
        mid_compare_dbc50d7826e5b924,
        mid_compare_ad0f844af4393ee4,
        mid_compare_0331c01e93701ad9,
        mid_compare_5600d9807ef938e4,
        mid_compare_7e8f592e9833cd15,
        mid_compare_65b89a3807dde15a,
        mid_compare_1c877592ad1ee56a,
        mid_compare_0279e31277a62c0b,
        mid_compare_65da25236b6795e1,
        mid_compare_d6347f3fc5a33688,
        mid_compare_4394f3faabb4f993,
        mid_compare_9b68319512dc43a5,
        mid_compare_cb1a4da0acde8ce3,
        mid_compareUnsigned_baa420e9123f184d,
        mid_compareUnsigned_05ddcb51512740f6,
        mid_compareUnsigned_05974a320e030538,
        mid_compareUnsigned_dbc50d7826e5b924,
        mid_compareUnsigned_5600d9807ef938e4,
        mid_compareUnsigned_0279e31277a62c0b,
        mid_compareUnsigned_65da25236b6795e1,
        mid_compareUnsigned_4394f3faabb4f993,
        mid_copyOf_9fc5790b73021b24,
        mid_copyOf_2815f1640c315d20,
        mid_copyOf_fd1288d34222cfa8,
        mid_copyOf_aecf0ff2b03f8a50,
        mid_copyOf_fbd6545ab638c2dd,
        mid_copyOf_a036faf087e6e86e,
        mid_copyOf_4114e0fb3fb67c85,
        mid_copyOf_e1b3f84730964aac,
        mid_copyOf_295a0ae7b916e43d,
        mid_copyOf_8ea29e823d1d75b2,
        mid_copyOfRange_0c8f5f8e7a2e708c,
        mid_copyOfRange_1bd63ee99200d788,
        mid_copyOfRange_27a40d66e0497a45,
        mid_copyOfRange_82bb4c530d532258,
        mid_copyOfRange_c717479d81ab06d6,
        mid_copyOfRange_6fa95f5fa0c7f50d,
        mid_copyOfRange_e8c275a90f7ca17f,
        mid_copyOfRange_cd6a99c63c149abf,
        mid_copyOfRange_5ddc01ca6df3fa2a,
        mid_copyOfRange_566b6fdd010f4db0,
        mid_deepEquals_9f5c36073a5f569a,
        mid_deepHashCode_6625a4feecabf811,
        mid_deepToString_b7235b7698aa209a,
        mid_equals_038dd22190ceb95d,
        mid_equals_9d3cbdc03832bcd3,
        mid_equals_5418f6d9d0f17dae,
        mid_equals_70b45f0447f4c6bc,
        mid_equals_3f2e961d1ff5453d,
        mid_equals_289f0db12278154e,
        mid_equals_9f5c36073a5f569a,
        mid_equals_297ade561ff86626,
        mid_equals_2590426d9393e74a,
        mid_equals_09b281b89923b281,
        mid_equals_d5af8f65e34c49cd,
        mid_equals_f3c046aa7ef86cfb,
        mid_equals_872910f0955c4d97,
        mid_equals_9a10c202483899bc,
        mid_equals_de02faf0b76b687b,
        mid_equals_99a79dfe15fa8f4b,
        mid_equals_6905057aeab93690,
        mid_equals_1352239d687e4b43,
        mid_equals_d1547cf463b182ed,
        mid_equals_abe2e7ea6b3fd070,
        mid_fill_44ff0cc32f9c294a,
        mid_fill_42d076c00da13d7a,
        mid_fill_caadaecfce5fba2f,
        mid_fill_88c139a773072406,
        mid_fill_5b34b0a91dcd935c,
        mid_fill_a88d02f4a2784662,
        mid_fill_ae4b10d09d66eaa2,
        mid_fill_ed844b73e78822d0,
        mid_fill_9cd31edef8e73899,
        mid_fill_61b091d379125aa0,
        mid_fill_4e51e80f532fe2ea,
        mid_fill_f959d0192b334e18,
        mid_fill_345b449c06ec9ea7,
        mid_fill_47f8a1cb0b6c367e,
        mid_fill_b3ee0a9ff676bcfd,
        mid_fill_bd41d01b7a349a04,
        mid_fill_f9676b3c09d63585,
        mid_fill_4a8da8a57784889b,
        mid_hashCode_11d417f25cf33664,
        mid_hashCode_eeb6c7fd19987667,
        mid_hashCode_37221385ab42f822,
        mid_hashCode_73d39ddfc8ced2fb,
        mid_hashCode_5c5c9df37b0af581,
        mid_hashCode_412058d2d7d76177,
        mid_hashCode_6625a4feecabf811,
        mid_hashCode_a5b2596176772f32,
        mid_hashCode_1703eab2be7ceb7d,
        mid_mismatch_baa420e9123f184d,
        mid_mismatch_722a72033b68df72,
        mid_mismatch_fe416a234af07512,
        mid_mismatch_cd4eb7530284071c,
        mid_mismatch_05ddcb51512740f6,
        mid_mismatch_05974a320e030538,
        mid_mismatch_f88fe08b39f9016d,
        mid_mismatch_dbc50d7826e5b924,
        mid_mismatch_ad0f844af4393ee4,
        mid_mismatch_0331c01e93701ad9,
        mid_mismatch_5600d9807ef938e4,
        mid_mismatch_7e8f592e9833cd15,
        mid_mismatch_65b89a3807dde15a,
        mid_mismatch_1c877592ad1ee56a,
        mid_mismatch_0279e31277a62c0b,
        mid_mismatch_65da25236b6795e1,
        mid_mismatch_5198a56bbe74b433,
        mid_mismatch_4394f3faabb4f993,
        mid_mismatch_9b68319512dc43a5,
        mid_mismatch_cb1a4da0acde8ce3,
        mid_parallelSort_9c4b35f0a6dc87f3,
        mid_parallelSort_819ed274952f967e,
        mid_parallelSort_ebc26dcaf4761286,
        mid_parallelSort_6f778634e7666a51,
        mid_parallelSort_3b603738d1eb3233,
        mid_parallelSort_f9329a87f434e224,
        mid_parallelSort_9e6c4f84b6360656,
        mid_parallelSort_bc5c58ffe95d3159,
        mid_parallelSort_c7dfceeb041ab7ea,
        mid_parallelSort_125b1e9f043b29f8,
        mid_parallelSort_2df38be22737223f,
        mid_parallelSort_d3508f432c1d798d,
        mid_parallelSort_2483374c28b19287,
        mid_parallelSort_32b3bfc37fd90cb0,
        mid_parallelSort_38536a459e4458c3,
        mid_parallelSort_507df61b437bd28e,
        mid_parallelSort_4be8ab814ce91808,
        mid_parallelSort_e59f8a294a0e4a05,
        mid_sort_9c4b35f0a6dc87f3,
        mid_sort_819ed274952f967e,
        mid_sort_ebc26dcaf4761286,
        mid_sort_6f778634e7666a51,
        mid_sort_3b603738d1eb3233,
        mid_sort_f9329a87f434e224,
        mid_sort_776481ea23945f99,
        mid_sort_bc5c58ffe95d3159,
        mid_sort_c7dfceeb041ab7ea,
        mid_sort_125b1e9f043b29f8,
        mid_sort_2df38be22737223f,
        mid_sort_d3508f432c1d798d,
        mid_sort_2483374c28b19287,
        mid_sort_32b3bfc37fd90cb0,
        mid_sort_38536a459e4458c3,
        mid_sort_a6734ac7e6f0c15f,
        mid_sort_4be8ab814ce91808,
        mid_sort_e59f8a294a0e4a05,
        mid_spliterator_a1c22ccd1221fd1f,
        mid_spliterator_ff833f6f0ab534f3,
        mid_spliterator_a9a7718b48cd0c00,
        mid_spliterator_77d5ce28a6a64340,
        mid_spliterator_01fb3a1929552b9c,
        mid_spliterator_7409018a011423c4,
        mid_spliterator_2d0880e179480ac6,
        mid_spliterator_9cdf3fd48f941574,
        mid_stream_d042e1ca31d645c7,
        mid_stream_df43cc70bb37f421,
        mid_stream_e7ce36de34786223,
        mid_stream_5b6b7b0b64e5d930,
        mid_toString_4989aa3fc6c2f181,
        mid_toString_7faef32e6b4dd67a,
        mid_toString_acc91b9da4f13835,
        mid_toString_17272fdbaca30cb0,
        mid_toString_e3f5ec408434fab9,
        mid_toString_5750fa194072b765,
        mid_toString_b7235b7698aa209a,
        mid_toString_47ac1bd68b3d3354,
        mid_toString_e16e6978d0d1cf66,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Arrays(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Arrays(const Arrays& obj) : ::java::lang::Object(obj) {}

      static ::java::util::List asList(const JArray< ::java::lang::Object > &);
      static jint binarySearch(const JArray< jbyte > &, jbyte);
      static jint binarySearch(const JArray< jchar > &, jchar);
      static jint binarySearch(const JArray< jdouble > &, jdouble);
      static jint binarySearch(const JArray< jfloat > &, jfloat);
      static jint binarySearch(const JArray< jint > &, jint);
      static jint binarySearch(const JArray< jlong > &, jlong);
      static jint binarySearch(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static jint binarySearch(const JArray< jshort > &, jshort);
      static jint binarySearch(const JArray< ::java::lang::Object > &, const ::java::lang::Object &, const ::java::util::Comparator &);
      static jint binarySearch(const JArray< jbyte > &, jint, jint, jbyte);
      static jint binarySearch(const JArray< jchar > &, jint, jint, jchar);
      static jint binarySearch(const JArray< jdouble > &, jint, jint, jdouble);
      static jint binarySearch(const JArray< jfloat > &, jint, jint, jfloat);
      static jint binarySearch(const JArray< jint > &, jint, jint, jint);
      static jint binarySearch(const JArray< jlong > &, jint, jint, jlong);
      static jint binarySearch(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &);
      static jint binarySearch(const JArray< jshort > &, jint, jint, jshort);
      static jint binarySearch(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &, const ::java::util::Comparator &);
      static jint compare(const JArray< jbyte > &, const JArray< jbyte > &);
      static jint compare(const JArray< jchar > &, const JArray< jchar > &);
      static jint compare(const JArray< jdouble > &, const JArray< jdouble > &);
      static jint compare(const JArray< jfloat > &, const JArray< jfloat > &);
      static jint compare(const JArray< jint > &, const JArray< jint > &);
      static jint compare(const JArray< jlong > &, const JArray< jlong > &);
      static jint compare(const JArray< ::java::lang::Comparable > &, const JArray< ::java::lang::Comparable > &);
      static jint compare(const JArray< jshort > &, const JArray< jshort > &);
      static jint compare(const JArray< jboolean > &, const JArray< jboolean > &);
      static jint compare(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static jint compare(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jint compare(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
      static jint compare(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint, jint);
      static jint compare(const JArray< jfloat > &, jint, jint, const JArray< jfloat > &, jint, jint);
      static jint compare(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jint compare(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jint compare(const JArray< ::java::lang::Comparable > &, jint, jint, const JArray< ::java::lang::Comparable > &, jint, jint);
      static jint compare(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static jint compare(const JArray< jboolean > &, jint, jint, const JArray< jboolean > &, jint, jint);
      static jint compare(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static jint compareUnsigned(const JArray< jbyte > &, const JArray< jbyte > &);
      static jint compareUnsigned(const JArray< jint > &, const JArray< jint > &);
      static jint compareUnsigned(const JArray< jlong > &, const JArray< jlong > &);
      static jint compareUnsigned(const JArray< jshort > &, const JArray< jshort > &);
      static jint compareUnsigned(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jint compareUnsigned(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jint compareUnsigned(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jint compareUnsigned(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static JArray< jbyte > copyOf(const JArray< jbyte > &, jint);
      static JArray< jchar > copyOf(const JArray< jchar > &, jint);
      static JArray< jdouble > copyOf(const JArray< jdouble > &, jint);
      static JArray< jfloat > copyOf(const JArray< jfloat > &, jint);
      static JArray< jint > copyOf(const JArray< jint > &, jint);
      static JArray< jlong > copyOf(const JArray< jlong > &, jint);
      static JArray< ::java::lang::Object > copyOf(const JArray< ::java::lang::Object > &, jint);
      static JArray< jshort > copyOf(const JArray< jshort > &, jint);
      static JArray< jboolean > copyOf(const JArray< jboolean > &, jint);
      static JArray< ::java::lang::Object > copyOf(const JArray< ::java::lang::Object > &, jint, const ::java::lang::Class &);
      static JArray< jbyte > copyOfRange(const JArray< jbyte > &, jint, jint);
      static JArray< jchar > copyOfRange(const JArray< jchar > &, jint, jint);
      static JArray< jdouble > copyOfRange(const JArray< jdouble > &, jint, jint);
      static JArray< jfloat > copyOfRange(const JArray< jfloat > &, jint, jint);
      static JArray< jint > copyOfRange(const JArray< jint > &, jint, jint);
      static JArray< jlong > copyOfRange(const JArray< jlong > &, jint, jint);
      static JArray< ::java::lang::Object > copyOfRange(const JArray< ::java::lang::Object > &, jint, jint);
      static JArray< jshort > copyOfRange(const JArray< jshort > &, jint, jint);
      static JArray< jboolean > copyOfRange(const JArray< jboolean > &, jint, jint);
      static JArray< ::java::lang::Object > copyOfRange(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Class &);
      static jboolean deepEquals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jint deepHashCode(const JArray< ::java::lang::Object > &);
      static ::java::lang::String deepToString(const JArray< ::java::lang::Object > &);
      static jboolean equals(const JArray< jbyte > &, const JArray< jbyte > &);
      static jboolean equals(const JArray< jchar > &, const JArray< jchar > &);
      static jboolean equals(const JArray< jdouble > &, const JArray< jdouble > &);
      static jboolean equals(const JArray< jfloat > &, const JArray< jfloat > &);
      static jboolean equals(const JArray< jint > &, const JArray< jint > &);
      static jboolean equals(const JArray< jlong > &, const JArray< jlong > &);
      static jboolean equals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jboolean equals(const JArray< jshort > &, const JArray< jshort > &);
      static jboolean equals(const JArray< jboolean > &, const JArray< jboolean > &);
      static jboolean equals(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static jboolean equals(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jboolean equals(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
      static jboolean equals(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint, jint);
      static jboolean equals(const JArray< jfloat > &, jint, jint, const JArray< jfloat > &, jint, jint);
      static jboolean equals(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jboolean equals(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jboolean equals(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint);
      static jboolean equals(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static jboolean equals(const JArray< jboolean > &, jint, jint, const JArray< jboolean > &, jint, jint);
      static jboolean equals(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static void fill(const JArray< jbyte > &, jbyte);
      static void fill(const JArray< jchar > &, jchar);
      static void fill(const JArray< jdouble > &, jdouble);
      static void fill(const JArray< jfloat > &, jfloat);
      static void fill(const JArray< jboolean > &, jboolean);
      static void fill(const JArray< jint > &, jint);
      static void fill(const JArray< ::java::lang::Object > &, const ::java::lang::Object &);
      static void fill(const JArray< jlong > &, jlong);
      static void fill(const JArray< jshort > &, jshort);
      static void fill(const JArray< jchar > &, jint, jint, jchar);
      static void fill(const JArray< jboolean > &, jint, jint, jboolean);
      static void fill(const JArray< jbyte > &, jint, jint, jbyte);
      static void fill(const JArray< jdouble > &, jint, jint, jdouble);
      static void fill(const JArray< jfloat > &, jint, jint, jfloat);
      static void fill(const JArray< jint > &, jint, jint, jint);
      static void fill(const JArray< ::java::lang::Object > &, jint, jint, const ::java::lang::Object &);
      static void fill(const JArray< jlong > &, jint, jint, jlong);
      static void fill(const JArray< jshort > &, jint, jint, jshort);
      static jint hashCode(const JArray< jbyte > &);
      static jint hashCode(const JArray< jchar > &);
      static jint hashCode(const JArray< jdouble > &);
      static jint hashCode(const JArray< jfloat > &);
      static jint hashCode(const JArray< jint > &);
      static jint hashCode(const JArray< jlong > &);
      static jint hashCode(const JArray< ::java::lang::Object > &);
      static jint hashCode(const JArray< jshort > &);
      static jint hashCode(const JArray< jboolean > &);
      static jint mismatch(const JArray< jbyte > &, const JArray< jbyte > &);
      static jint mismatch(const JArray< jchar > &, const JArray< jchar > &);
      static jint mismatch(const JArray< jdouble > &, const JArray< jdouble > &);
      static jint mismatch(const JArray< jfloat > &, const JArray< jfloat > &);
      static jint mismatch(const JArray< jint > &, const JArray< jint > &);
      static jint mismatch(const JArray< jlong > &, const JArray< jlong > &);
      static jint mismatch(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &);
      static jint mismatch(const JArray< jshort > &, const JArray< jshort > &);
      static jint mismatch(const JArray< jboolean > &, const JArray< jboolean > &);
      static jint mismatch(const JArray< ::java::lang::Object > &, const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static jint mismatch(const JArray< jbyte > &, jint, jint, const JArray< jbyte > &, jint, jint);
      static jint mismatch(const JArray< jchar > &, jint, jint, const JArray< jchar > &, jint, jint);
      static jint mismatch(const JArray< jdouble > &, jint, jint, const JArray< jdouble > &, jint, jint);
      static jint mismatch(const JArray< jfloat > &, jint, jint, const JArray< jfloat > &, jint, jint);
      static jint mismatch(const JArray< jint > &, jint, jint, const JArray< jint > &, jint, jint);
      static jint mismatch(const JArray< jlong > &, jint, jint, const JArray< jlong > &, jint, jint);
      static jint mismatch(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint);
      static jint mismatch(const JArray< jshort > &, jint, jint, const JArray< jshort > &, jint, jint);
      static jint mismatch(const JArray< jboolean > &, jint, jint, const JArray< jboolean > &, jint, jint);
      static jint mismatch(const JArray< ::java::lang::Object > &, jint, jint, const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static void parallelSort(const JArray< jbyte > &);
      static void parallelSort(const JArray< jchar > &);
      static void parallelSort(const JArray< jdouble > &);
      static void parallelSort(const JArray< jfloat > &);
      static void parallelSort(const JArray< jint > &);
      static void parallelSort(const JArray< jlong > &);
      static void parallelSort(const JArray< ::java::lang::Comparable > &);
      static void parallelSort(const JArray< jshort > &);
      static void parallelSort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static void parallelSort(const JArray< jbyte > &, jint, jint);
      static void parallelSort(const JArray< jchar > &, jint, jint);
      static void parallelSort(const JArray< jdouble > &, jint, jint);
      static void parallelSort(const JArray< jfloat > &, jint, jint);
      static void parallelSort(const JArray< jint > &, jint, jint);
      static void parallelSort(const JArray< jlong > &, jint, jint);
      static void parallelSort(const JArray< ::java::lang::Comparable > &, jint, jint);
      static void parallelSort(const JArray< jshort > &, jint, jint);
      static void parallelSort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static void sort(const JArray< jbyte > &);
      static void sort(const JArray< jchar > &);
      static void sort(const JArray< jdouble > &);
      static void sort(const JArray< jfloat > &);
      static void sort(const JArray< jint > &);
      static void sort(const JArray< jlong > &);
      static void sort(const JArray< ::java::lang::Object > &);
      static void sort(const JArray< jshort > &);
      static void sort(const JArray< ::java::lang::Object > &, const ::java::util::Comparator &);
      static void sort(const JArray< jbyte > &, jint, jint);
      static void sort(const JArray< jchar > &, jint, jint);
      static void sort(const JArray< jdouble > &, jint, jint);
      static void sort(const JArray< jfloat > &, jint, jint);
      static void sort(const JArray< jint > &, jint, jint);
      static void sort(const JArray< jlong > &, jint, jint);
      static void sort(const JArray< ::java::lang::Object > &, jint, jint);
      static void sort(const JArray< jshort > &, jint, jint);
      static void sort(const JArray< ::java::lang::Object > &, jint, jint, const ::java::util::Comparator &);
      static ::java::util::Spliterator$OfDouble spliterator(const JArray< jdouble > &);
      static ::java::util::Spliterator$OfInt spliterator(const JArray< jint > &);
      static ::java::util::Spliterator$OfLong spliterator(const JArray< jlong > &);
      static ::java::util::Spliterator spliterator(const JArray< ::java::lang::Object > &);
      static ::java::util::Spliterator$OfDouble spliterator(const JArray< jdouble > &, jint, jint);
      static ::java::util::Spliterator$OfInt spliterator(const JArray< jint > &, jint, jint);
      static ::java::util::Spliterator$OfLong spliterator(const JArray< jlong > &, jint, jint);
      static ::java::util::Spliterator spliterator(const JArray< ::java::lang::Object > &, jint, jint);
      static ::java::util::stream::DoubleStream stream(const JArray< jdouble > &);
      static ::java::util::stream::Stream stream(const JArray< ::java::lang::Object > &);
      static ::java::util::stream::DoubleStream stream(const JArray< jdouble > &, jint, jint);
      static ::java::util::stream::Stream stream(const JArray< ::java::lang::Object > &, jint, jint);
      static ::java::lang::String toString(const JArray< jbyte > &);
      static ::java::lang::String toString(const JArray< jchar > &);
      static ::java::lang::String toString(const JArray< jdouble > &);
      static ::java::lang::String toString(const JArray< jfloat > &);
      static ::java::lang::String toString(const JArray< jint > &);
      static ::java::lang::String toString(const JArray< jlong > &);
      static ::java::lang::String toString(const JArray< ::java::lang::Object > &);
      static ::java::lang::String toString(const JArray< jshort > &);
      static ::java::lang::String toString(const JArray< jboolean > &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Arrays);
    extern PyTypeObject *PY_TYPE(Arrays);

    class t_Arrays {
    public:
      PyObject_HEAD
      Arrays object;
      static PyObject *wrap_Object(const Arrays&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
